/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2017-2018, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 */
#ifndef _CAM_EEPROM_CORE_H_
#define _CAM_EEPROM_CORE_H_

#include "cam_eeprom_dev.h"

int32_t cam_eeprom_driver_cmd(struct cam_eeprom_ctrl_t *e_ctrl, void *arg);
int32_t cam_eeprom_parse_read_memory_map(struct device_node *of_node,
	struct cam_eeprom_ctrl_t *e_ctrl);
/**
 * @e_ctrl: EEPROM ctrl structure
 *
 * This API handles the shutdown ioctl/close
 */
void cam_eeprom_shutdown(struct cam_eeprom_ctrl_t *e_ctrl);

struct completion *cam_eeprom_get_i3c_completion(uint32_t index);

#ifdef OPLUS_FEATURE_CAMERA_COMMON
int cam_eeprom_power_up(struct cam_eeprom_ctrl_t *e_ctrl,
	struct cam_sensor_power_ctrl_t *power_info);
int cam_eeprom_power_down(struct cam_eeprom_ctrl_t *e_ctrl);
#endif
#endif
/* _CAM_EEPROM_CORE_H_ */
