#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libobs" for configuration "Release"
set_property(TARGET libobs APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(libobs PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/bin/64bit/obs.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "w32-pthreads"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/64bit/obs.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS libobs )
list(APPEND _IMPORT_CHECK_FILES_FOR_libobs "${_IMPORT_PREFIX}/bin/64bit/obs.lib" "${_IMPORT_PREFIX}/bin/64bit/obs.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
