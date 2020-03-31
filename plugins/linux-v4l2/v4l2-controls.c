/*
Copyright (C) 2019 by Gary Kramlich <grim@reaperworld.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <fcntl.h>

#include <linux/videodev2.h>
#include <libv4l2.h>

#include "v4l2-controls.h"

#define blog(level, msg, ...) blog(level, "v4l2-controls: " msg, ##__VA_ARGS__)

#if defined(__LP64__)
#define UINT_TO_POINTER(val) ((void *)(unsigned long)(val))
#define POINTER_TO_UINT(p) ((unsigned int)(unsigned long)(p))
#else
#define UINT_TO_POINTER(val) ((void *)(unsigned int)(val))
#define POINTER_TO_UINT(p) ((unsigned int)(unsigned int)(p))
#endif

static bool v4l2_control_changed(void *data, obs_properties_t *props,
				 obs_property_t *prop, obs_data_t *settings)
{
	int dev = v4l2_open(obs_data_get_string(settings, "device_id"),
			    O_RDWR | O_NONBLOCK);
	bool ret = false;

	(void)props;

	if (dev == -1)
		return false;

	struct v4l2_control control;
	control.id = POINTER_TO_UINT(data);
	control.value = obs_data_get_int(settings, obs_property_name(prop));

	if (0 != v4l2_ioctl(dev, VIDIOC_S_CTRL, &control)) {
		ret = true;
	}

	v4l2_close(dev);

	return ret;
}

static int_fast32_t v4l2_update_controls_menu(int_fast32_t dev,
					      obs_properties_t *props,
					      struct v4l2_queryctrl *qctrl)
{
	obs_property_t *prop;
	struct v4l2_querymenu qmenu;

	prop = obs_properties_add_list(props, (char *)qctrl->name,
				       (char *)qctrl->name, OBS_COMBO_TYPE_LIST,
				       OBS_COMBO_FORMAT_INT);

	obs_property_set_modified_callback2(prop, v4l2_control_changed,
					    UINT_TO_POINTER(qctrl->id));

	memset(&qmenu, 0, sizeof(qmenu));
	qmenu.id = qctrl->id;

	for (qmenu.index = qctrl->minimum;
	     qmenu.index <= (uint32_t)qctrl->maximum;
	     qmenu.index += qctrl->step) {
		if (0 == v4l2_ioctl(dev, VIDIOC_QUERYMENU, &qmenu)) {
			obs_property_list_add_int(prop, (char *)qmenu.name,
						  qmenu.value);
		}
	}

	return 0;
}

int_fast32_t v4l2_update_controls(int_fast32_t dev, obs_properties_t *props,
				  obs_data_t *settings)
{
	struct v4l2_queryctrl qctrl;
	obs_property_t *prop = NULL;

	if (!dev || !props)
		return -1;

	memset(&qctrl, 0, sizeof(qctrl));
	qctrl.id = V4L2_CTRL_FLAG_NEXT_CTRL;
	while (0 == v4l2_ioctl(dev, VIDIOC_QUERYCTRL, &qctrl)) {
		if (qctrl.flags & V4L2_CTRL_FLAG_DISABLED) {
			blog(LOG_INFO, "found control %s but it is disabled",
			     qctrl.name);
			continue;
		}

		if (qctrl.flags & V4L2_CTRL_FLAG_READ_ONLY) {
			blog(LOG_INFO, "found control %s but it is readonly",
			     qctrl.name);
			continue;
		}

		if (qctrl.flags & V4L2_CTRL_FLAG_VOLATILE) {
			blog(LOG_INFO, "found control %s but it is volatile",
			     qctrl.name);
			continue;
		}

		switch (qctrl.type) {
		case V4L2_CTRL_TYPE_INTEGER:
			prop = obs_properties_add_int_slider(
				props, (char *)qctrl.name, (char *)qctrl.name,
				qctrl.minimum, qctrl.maximum, qctrl.step);
			obs_data_set_default_int(settings, (char *)qctrl.name,
						 qctrl.default_value);
			obs_property_set_modified_callback2(
				prop, v4l2_control_changed,
				UINT_TO_POINTER(qctrl.id));
			break;
		case V4L2_CTRL_TYPE_BOOLEAN:
			prop = obs_properties_add_bool(
				props, (char *)qctrl.name, (char *)qctrl.name);
			obs_data_set_default_bool(settings, (char *)qctrl.name,
						  qctrl.default_value);
			obs_property_set_modified_callback2(
				prop, v4l2_control_changed,
				UINT_TO_POINTER(qctrl.id));
			break;
		case V4L2_CTRL_TYPE_MENU:
		case V4L2_CTRL_TYPE_INTEGER_MENU:
			v4l2_update_controls_menu(dev, props, &qctrl);
			obs_data_set_default_int(settings, (char *)qctrl.name,
						 qctrl.default_value);
			blog(LOG_INFO, "setting default for %s to %d",
			     (char *)qctrl.name, qctrl.default_value);
			break;
		}

		qctrl.id |= V4L2_CTRL_FLAG_NEXT_CTRL;
	}

	return 0;
}
