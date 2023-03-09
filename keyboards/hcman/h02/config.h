// Copyright 2023 ThePinkUnicorn6 (@ThePinkUnicorn6)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID                   0x4843
#define PRODUCT_ID                  0x0000
#define DEVICE_VER                  0x0001

#define MANUFACTURER                Hcman
#define PRODUCT                     H02

#define LED_DISABLE_WHEN_USB_SUSPENDED true
#define FORCE_NKRO

#define MATRIX_ROWS                 6
#define MATRIX_COLS                 19

#define DIODE_DIRECTION             ROW2COL

#define MATRIX_COL_PINS             { A8, A9, A10, A11, A12, A13, A14, A15, D0, D1, D2, D3, D4, D5, A2, A1, A3, A4, A5 }
#define MATRIX_ROW_PINS             { B0, B1, B2, B3, B4, B5 }


#define LED_MATRIX_ROWS             MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS     1
#define LED_MATRIX_ROW_PINS         { C8, C7, C6, C5, C4, C9 }

#define LED_MATRIX_COLS             MATRIX_COLS
#define LED_MATRIX_COL_PINS         MATRIX_COL_PINS

#define DRIVER_LED_TOTAL            (87)

#define LED_CAPS_LOCK_PIN           D6

//#define ACTIVATE_PWM_CHAN_0 //A0
#define ACTIVATE_PWM_CHAN_1 //A1
#define ACTIVATE_PWM_CHAN_2 //A2
#define ACTIVATE_PWM_CHAN_3 //A3
#define ACTIVATE_PWM_CHAN_4 //A4
#define ACTIVATE_PWM_CHAN_5 //A5
//#define ACTIVATE_PWM_CHAN_6 //A6
//#define ACTIVATE_PWM_CHAN_7 //A7
#define ACTIVATE_PWM_CHAN_8 //A8
#define ACTIVATE_PWM_CHAN_9 //A9
#define ACTIVATE_PWM_CHAN_10 //A10
#define ACTIVATE_PWM_CHAN_11 //A11
#define ACTIVATE_PWM_CHAN_12 //A12
#define ACTIVATE_PWM_CHAN_13 //A13
#define ACTIVATE_PWM_CHAN_14 //A14
#define ACTIVATE_PWM_CHAN_15 //A15
#define ACTIVATE_PWM_CHAN_16 //D0
#define ACTIVATE_PWM_CHAN_17 //D1
#define ACTIVATE_PWM_CHAN_18 //D2
#define ACTIVATE_PWM_CHAN_19 //D3
#define ACTIVATE_PWM_CHAN_21 //D5
#define ACTIVATE_PWM_CHAN_20 //D4

#define LED_MATRIX_KEYPRESSES
#define ENABLE_LED_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_LED_MATRIX_SOLID_SPLASH
#define ENABLE_LED_MATRIX_SOLID_MULTISPLASH
