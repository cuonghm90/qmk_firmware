/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B44 //KD
#define PRODUCT_ID      0x3938 //98
#define DEVICE_VER      0x0111
#define MANUFACTURER    dkkb
#define PRODUCT         LX980

/*Boot magic setup*/
#if BOOTMAGIC_ENABLE
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1
#endif

/*VIA*/
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 899
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 125

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define MATRIX_COL_PINS { A4, A5, A6, A7, B0, B1, B2, B10, B11, B12, B13, B14, B4, B5, B6, B7, B8, B9 }
#define MATRIX_ROW_PINS { C14, C13, C15, A2, A1, A3 }
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_INDICATOR_PIN B15
#define RGB_INDICATOR_NUM 3

#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_MODE_STATIC_LIGHT
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGB_DI_PIN B15
#define RGBLED_NUM 101
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 0
#define RGBLIGHT_DEFAULT_SAT 0
#define RGBLIGHT_DEFAULT_VAL 0

#define RGBLIGHT_LED_MAP {                              0, 1, 2,             \
    3,  4,5,6,7,    8,9,10,11,      12,13,14,15,        16,17,18,19,         \
    37,36,35,34,33,32,31,30,29,28,27,26,25,  24,        23,22,21,20,         \
    38,39,40,41,42,43,44,45,46,47,48,49,50,51,          52,53,54,55,         \
    71,70,69,68,67,66,65,64,63,62,61,60,59,             58,57,56,             \
    72,73,74,75,76,77,78,79,80,81,82,83,      84,       85,86,87,88,         \
    100,99,98,  97,     96,95,94,           93,92,91,   90,89              \
}
