#include "ftl.h"
#include "ftl_private.h"
#ifndef DISABLE_AUTO_INGEST
#include <curl/curl.h>
#include <jansson.h>
#endif

static int _ingest_lookup_ip(const char *ingest_location, char ***ingest_ip);
static int _ping_server(const char *ip, int port);
OS_THREAD_ROUTINE _ingest_get_rtt(void *data);

typedef struct {
    ftl_ingest_t *ingest;
    ftl_stream_configuration_private_t *ftl;
}_tmp_ingest_thread_data_t;

static int _ping_server(const char *hostname, int port) {

  SOCKET sock;
  struct addrinfo hints;
  char dummy[4];
  struct timeval start, stop, delta;
  int retval = -1;
  struct addrinfo* resolved_names = 0;
  struct addrinfo* p = 0;
  int err = 0;
  int off = 0;

  memset(&hints, 0, sizeof(hints));
  hints.ai_family = PF_UNSPEC;
  hints.ai_socktype = SOCK_DGRAM;
  hints.ai_protocol = 0;

  int ingest_port = INGEST_PORT;
  char port_str[10];

  snprintf(port_str, 10, "%d", port);
  
  err = getaddrinfo(hostname, port_str, &hints, &resolved_names);
  if (err != 0) {
    return FTL_DNS_FAILURE;
  }

  do {
    for (p = resolved_names; p != NULL; p = p->ai_next) {
      sock = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
      if (sock == -1) {
        continue;
      }

      setsockopt(sock, IPPROTO_IPV6, IPV6_V6ONLY, (char *)&off, sizeof(off));
      set_socket_recv_timeout(sock, 500);

      gettimeofday(&start, NULL);

      if (sendto(sock, dummy, sizeof(dummy), 0, p->ai_addr, (int)p->ai_addrlen) == SOCKET_ERROR) {
        printf("Sendto error: %s\n", get_socket_error());
        break;
      }

      if (recv(sock, dummy, sizeof(dummy), 0) < 0) {
        break;
      }

      gettimeofday(&stop, NULL);
      timeval_subtract(&delta, &stop, &start);
      retval = (int)timeval_to_ms(&delta);
    }
  } while (0);

  /* Free the resolved name struct */
  freeaddrinfo(resolved_names);
  
  shutdown_socket(sock, SD_BOTH);
  close_socket(sock);
  
  return retval;
}

OS_THREAD_ROUTINE _ingest_get_rtt(void *data) {
    _tmp_ingest_thread_data_t *thread_data = (_tmp_ingest_thread_data_t *)data;
    ftl_stream_configuration_private_t *ftl = thread_data->ftl;
    ftl_ingest_t *ingest = thread_data->ingest;
    int ping;
    
    ingest->rtt = 1000;
    
    if ((ping = _ping_server(ingest->name, INGEST_PING_PORT)) >= 0) {
        ingest->rtt = ping;
    }

    return 0;
}

ftl_status_t ftl_find_closest_available_ingest(const char* ingestHosts[], int ingestsCount, char* bestIngestHostComputed)
{
    if (ingestHosts == NULL || ingestsCount <= 0) {
      return FTL_UNKNOWN_ERROR_CODE;
    }

    ftl_ingest_t* ingestElements = NULL;
    OS_THREAD_HANDLE *handles = NULL;
    _tmp_ingest_thread_data_t *data = NULL;
    
    int i;

    ftl_status_t ret_status = FTL_SUCCESS;
    do {
        if ((ingestElements = calloc(ingestsCount, sizeof(ftl_ingest_t))) == NULL) {
            ret_status = FTL_MALLOC_FAILURE;
            break;
        }

        for (i = 0; i < ingestsCount; i++) {
            size_t host_len = strlen(ingestHosts[i]) + 1;
            if ((ingestElements[i].name = malloc(host_len)) == NULL) {
                ret_status = FTL_MALLOC_FAILURE;
                break;
            }
            strcpy_s(ingestElements[i].name, host_len, ingestHosts[i]);
            ingestElements[i].rtt = 1000;
            ingestElements[i].next = NULL;
        }
        if (ret_status != FTL_SUCCESS) {
            break;
        }

        if ((handles = (OS_THREAD_HANDLE *)malloc(sizeof(OS_THREAD_HANDLE) * ingestsCount)) == NULL) {
            ret_status = FTL_MALLOC_FAILURE;
            break;
        }

        if ((data = (_tmp_ingest_thread_data_t *)malloc(sizeof(_tmp_ingest_thread_data_t) * ingestsCount)) == NULL) {
            ret_status = FTL_MALLOC_FAILURE;
            break;
        }
    } while (0);

    // malloc failed, cleanup
    if (ret_status != FTL_SUCCESS) {
        if (ingestElements != NULL) {
            for (i = 0; i < ingestsCount; i++) {
              free(ingestElements[i].name);
            }
        }
        free(ingestElements);
        free(handles);
        free(data);
        return ret_status;
    }

    ftl_ingest_t *best = NULL;
    struct timeval start, stop, delta;
    gettimeofday(&start, NULL);

    /*query all the ingests about cpu and rtt*/
    for (i = 0; i < ingestsCount; i++) {
        handles[i] = 0;
        data[i].ingest = &ingestElements[i];
        data[i].ftl = NULL;
        os_create_thread(&handles[i], NULL, _ingest_get_rtt, &data[i]);
        sleep_ms(5); //space out the pings
    }

    /*wait for all the ingests to complete*/
    for (i = 0; i < ingestsCount; i++) {

        if (handles[i] != 0) {
            os_wait_thread(handles[i]);
        }

        if (best == NULL || ingestElements[i].rtt < best->rtt) {
            best = &ingestElements[i];
        }
    }

    gettimeofday(&stop, NULL);
    timeval_subtract(&delta, &stop, &start);
    int ms = (int)timeval_to_ms(&delta);

    for (i = 0; i < ingestsCount; i++) {
        if (handles[i] != 0) {
            os_destroy_thread(handles[i]);
        }
    }

    free(handles);
    free(data);

    if (best) {
        strcpy_s(bestIngestHostComputed, strlen(best->name), best->name);
    } else {
        ret_status = FTL_UNKNOWN_ERROR_CODE;
    }

    for (i = 0; i < ingestsCount; i++) {
        free(ingestElements[i].name);
    }
    free(ingestElements);

    return ret_status;
}

#ifndef DISABLE_AUTO_INGEST
OS_THREAD_ROUTINE _ingest_get_hosts(ftl_stream_configuration_private_t *ftl);

static size_t _curl_write_callback(void *contents, size_t size, size_t nmemb, void *userp)
{
  size_t realsize = size * nmemb;
  struct MemoryStruct *mem = (struct MemoryStruct *)userp;

  mem->memory = realloc(mem->memory, mem->size + realsize + 1);
  if (mem->memory == NULL) {
    /* out of memory! */
    printf("not enough memory (realloc returned NULL)\n");
    return 0;
  }

  memcpy(&(mem->memory[mem->size]), contents, realsize);
  mem->size += realsize;
  mem->memory[mem->size] = 0;

  return realsize;
}

OS_THREAD_ROUTINE _ingest_get_hosts(ftl_stream_configuration_private_t *ftl) {
  CURL *curl_handle;
  CURLcode res;
  struct MemoryStruct chunk;
  char *query_result = NULL;
  size_t i = 0;
  int total_ingest_cnt = 0;
  json_error_t error;
  json_t *ingests = NULL, *ingest_item = NULL, *ingest_array = NULL;

  curl_handle = curl_easy_init();

  chunk.memory = malloc(1);  /* will be grown as needed by realloc */
  chunk.size = 0;    /* no data at this point */
  char ingestBestUrl[1024], vendorName[100], vendorVersion[100], ftlSdkVersion[20];
  struct curl_slist *list = NULL;

  int formatUri = snprintf(ingestBestUrl, sizeof(ingestBestUrl), INGEST_LIST_URI, ftl->channel_id);
  
  curl_easy_setopt(curl_handle, CURLOPT_URL, ingestBestUrl);

  int formatVendorName = snprintf(vendorName, sizeof(vendorName), "MS-ClientId: %s", ftl->vendor_name);
  int formatVendorVersion = snprintf(vendorVersion, sizeof(vendorVersion), "MS-ClientVersion: %s", ftl->vendor_version);
  int formatFtlSdkVersion = snprintf(ftlSdkVersion, sizeof(ftlSdkVersion), "ftlsdk/%d.%d.%d", FTL_VERSION_MAJOR, FTL_VERSION_MINOR, FTL_VERSION_MAINTENANCE);
  
  if (formatVendorName > 0) {
    list = curl_slist_append(list, vendorName);
  }

  if (formatVendorVersion > 0) {
    list = curl_slist_append(list, vendorVersion);
  }

  if (list != NULL) {
    curl_easy_setopt(curl_handle, CURLOPT_HTTPHEADER, list);
  }

  curl_easy_setopt(curl_handle, CURLOPT_SSL_VERIFYPEER, TRUE);
  curl_easy_setopt(curl_handle, CURLOPT_SSL_VERIFYHOST, 2L);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, _curl_write_callback);
  curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, (void *)&chunk);

  if (formatFtlSdkVersion > 0) {
    curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, ftlSdkVersion);
  }
  else {
    curl_easy_setopt(curl_handle, CURLOPT_USERAGENT, "ftlsdk/0.10.0");
  }

  curl_easy_setopt(curl_handle, CURLOPT_FOLLOWLOCATION, 1L);
  
#if LIBCURL_VERSION_NUM >= 0x072400
  // A lot of servers don't yet support ALPN
  curl_easy_setopt(curl_handle, CURLOPT_SSL_ENABLE_ALPN, 0);
#endif

  res = curl_easy_perform(curl_handle);

  if (res != CURLE_OK) {
    printf("curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    goto cleanup;
  }

  if ((ingests = json_loadb(chunk.memory, chunk.size, 0, &error)) == NULL) {
    goto cleanup;
  }
  
  ingest_array = json_object_get(ingests, "ingests");
  
  size_t size = json_array_size(ingest_array);
  
  for (i = 0; i < size; i++) {
    char *name = NULL;
    ingest_item = json_array_get(ingest_array, i);    
    if (json_unpack(ingest_item, "{s:s}", "name", &name) < 0) {
        continue;
    }

    ftl_ingest_t *ingest_elmt;

    if ((ingest_elmt = malloc(sizeof(ftl_ingest_t))) == NULL) {
      goto cleanup;
    }

    ingest_elmt->name = _strdup(name);
    ingest_elmt->rtt = 500;
    ingest_elmt->next = NULL;

    if (ftl->ingest_list == NULL) {
      ftl->ingest_list = ingest_elmt;
    }
    else {
      ftl_ingest_t *tail = ftl->ingest_list;
      while (tail->next != NULL) {
        tail = tail->next;
      }

      tail->next = ingest_elmt;
    }

    total_ingest_cnt++;
 }

cleanup:
  free(chunk.memory);
  curl_easy_cleanup(curl_handle);
  if (ingests != NULL) {
    json_decref(ingests);
  }
  
  ftl->ingest_count = total_ingest_cnt;
  
  return total_ingest_cnt;
}

char * ingest_find_best(ftl_stream_configuration_private_t *ftl) {

  OS_THREAD_HANDLE *handle;
  _tmp_ingest_thread_data_t *data;
  int i;
  ftl_ingest_t *elmt, *best = NULL;
  struct timeval start, stop, delta;

  /*get list of ingest each time as they are dynamically selected*/
  while (ftl->ingest_list != NULL) {
    elmt = ftl->ingest_list;
    ftl->ingest_list = elmt->next;
    free(elmt->name);
    free(elmt);
  }

  if (_ingest_get_hosts(ftl) <= 0) {
    return NULL;
  }

  if ((handle = (OS_THREAD_HANDLE *)malloc(sizeof(OS_THREAD_HANDLE) * ftl->ingest_count)) == NULL) {
    return NULL;
  }

  if ((data = (_tmp_ingest_thread_data_t *)malloc(sizeof(_tmp_ingest_thread_data_t) * ftl->ingest_count)) == NULL) {
    return NULL;
  }

  gettimeofday(&start, NULL);

  /*query all the ingests about cpu and rtt*/
  elmt = ftl->ingest_list;
  for (i = 0; i < ftl->ingest_count && elmt != NULL; i++) {
    handle[i] = 0;
    data[i].ingest = elmt;
    data[i].ftl = ftl;
    os_create_thread(&handle[i], NULL, _ingest_get_rtt, &data[i]);
    sleep_ms(5); //space out the pings
    elmt = elmt->next;
  }

  /*wait for all the ingests to complete*/
  elmt = ftl->ingest_list;
  for (i = 0; i < ftl->ingest_count && elmt != NULL; i++) {

    if (handle[i] != 0) {
      os_wait_thread(handle[i]);
    }

    if (best == NULL || elmt->rtt < best->rtt) {
      best = elmt;
    }

    elmt = elmt->next;
  }

  gettimeofday(&stop, NULL);
  timeval_subtract(&delta, &stop, &start);
  int ms = (int)timeval_to_ms(&delta);

  FTL_LOG(ftl, FTL_LOG_INFO, "It took %d ms to query all ingests\n", ms);

  elmt = ftl->ingest_list;
  for (i = 0; i < ftl->ingest_count && elmt != NULL; i++) {
    if (handle[i] != 0) {
      os_destroy_thread(handle[i]);
    }

    elmt = elmt->next;
  }
  
  free(handle);
  free(data);

  if (best){
    FTL_LOG(ftl, FTL_LOG_INFO, "%s had the shortest RTT of %d ms\n", best->name, best->rtt);
    return _strdup(best->name);
  }
  return NULL;
}
#endif

void ingest_release(ftl_stream_configuration_private_t *ftl) {

  ftl_ingest_t *elmt, *tmp;

  elmt = ftl->ingest_list;

  while (elmt != NULL) {
    tmp = elmt->next;
    free(elmt);
    elmt = tmp;
  }
}
