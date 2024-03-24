// Copyright 2024 y (@sato5322)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define VIAL_KEYBOARD_UID {0x51, 0x19, 0x86, 0x24, 0x28, 0x2C, 0x30, 0xDA}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DYNAMIC_KEYMAP_LAYER_COUNT  4

#define TAPPING_TERM 200
#define HOLD_ON_OTHER_KEY_PRESS
#define TAPPING_FORCE_HOLD

//#define PRODUCT saot01

