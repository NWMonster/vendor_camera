/**
 * rohm_bu64243gwz_actuator.h
 *
 * DESCRIPTION
 *  Auto-Generated by Actuator tool.
 *
 * Copyright (c) 2014-2015 Qualcomm Technologies, Inc. All Rights Reserved.
 *   Qualcomm Technologies Proprietary and Confidential.
 */
  {
    .actuator_params =
    {
      .module_name = "SUNNY-Q8V18A",
      .actuator_name = "rohm_bu64243gwz",
      .i2c_addr = 0x18,
      .i2c_data_type = CAMERA_I2C_BYTE_DATA,
      .i2c_addr_type = CAMERA_I2C_BYTE_ADDR,
      .act_type = ACTUATOR_TYPE_VCM,
      .data_size = 10,
      .reg_tbl =
      {
        .reg_tbl_size = 1,
        .reg_params =
        {
          {
            .reg_write_type = ACTUATOR_WRITE_DAC,
            .hw_mask = 0x0000c400,
            .reg_addr = 0xFFFF,
            .hw_shift = 0,
            .data_shift = 0,
          },
        },
      },
      .init_setting_size = 4,
      .init_settings =
      {
        {
          .reg_addr = 0xCC,
          .addr_type = CAMERA_I2C_BYTE_ADDR,
          .reg_data = 0x2B,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .i2c_operation = ACTUATOR_I2C_OP_WRITE,
          .delay = 0,
        },
        {
          .reg_addr = 0xD4,
          .addr_type = CAMERA_I2C_BYTE_ADDR,
          .reg_data = 0x01,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .i2c_operation = ACTUATOR_I2C_OP_WRITE,
          .delay = 0,
        },
        {
          .reg_addr = 0xDC,
          .addr_type = CAMERA_I2C_BYTE_ADDR,
          .reg_data = 0x02,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .i2c_operation = ACTUATOR_I2C_OP_WRITE,
          .delay = 0,
        },
        {
          .reg_addr = 0xE4,
          .addr_type = CAMERA_I2C_BYTE_ADDR,
          .reg_data = 0x21,
          .data_type = CAMERA_I2C_BYTE_DATA,
          .i2c_operation = ACTUATOR_I2C_OP_WRITE,
          .delay = 0,
        },
      },
    }, /* actuator_params */

    .actuator_tuned_params =
    {
      .scenario_size =
      {
        4, /* MOVE_NEAR */
        4, /* MOVE_FAR */
      },
      .ringing_scenario =
      {
        /* MOVE_NEAR */
        {
          9,
          18,
          36,
          405,
        },
        /* MOVE_FAR */
        {
          9,
          18,
          36,
          405,
        },
      },
      .initial_code = 80,
      .region_size = 1,
      .region_params =
      {
        {
          .step_bound =
          {
            408, /* Macro step boundary*/
            0, /* Infinity step boundary*/
          },
          .code_per_step = 1,
        },
      },
      .damping =
      {
        /* damping[MOVE_NEAR] */
        {
          /* Scenario 0 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E424,
              },
            },
          },
          /* Scenario 1 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E424,
              },
            },
          },
          /* Scenario 2 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E422,
              },
            },
          },
          /* Scenario 3 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E422,
              },
            },
          },
        },
        /* damping[MOVE_NEAR] */
        {
          /* Scenario 0 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E424,
              },
            },
          },
          /* Scenario 1 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 2000,
                .hw_params = 0x0000E481,
              },
            },
          },
          /* Scenario 2 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E422,
              },
            },
          },
          /* Scenario 3 */
          {
            .ringing_params =
            {
              /* Region 0 */
              {
                .damping_step = 0x3FF,
                .damping_delay = 15000,
                .hw_params = 0x0000E422,
              },
            },
          },
        },
      },
    }, /* actuator_tuned_params */
  },
