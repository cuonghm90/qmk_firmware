/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

/*
----------------------------------------------------------------------------------------------------------------------------|
| K000,       K002, K003, K004, K005, K006, K007, K008, K009,       K011, K012, K013, K413|         |K014, K015, K016, K017 |
| ESC,        F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,         F9,   F10,  F11,  F12 |         |Del,  Ins,  PdUp, PnDn |
----------------------------------------------------------------------------------------------------------------------------|
----------------------------------------------------------------------------------------------------------------------------|
| K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113      |         |K114, K115, K116, K117 |
| ~,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    -,    +,    BaSpc     |         |Num,  *,    /,    -    |
----------------------------------------------------------------------------------------------------------------------------|
|  K200   |K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K313   |         |K214, K215, K216, K217 |
|  Tab    |Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    {,    },     \     |         |7,    8,    9,    +    |
----------------------------------------------------------------------------------------------------------------------------|
|   K300   | K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312       |         |K314, K315, K316, K317 |
|   Caps   | A,    S,    D,    F,    G,    H,    J,    K,    L,    :,    ",    Enter      |         |4,    5,    6,    Enter|
----------------------------------------------------------------------------------------------------------------------------|
|     K400    | K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411    |   |  K412  |  |K414, K415, K416       |
|     RShift  | Z,    X,    C,    V,    B,    N,    M,    ,<,   .>,   /?,   LShift  |   |  UP    |  |1,    2,    3          |
----------------------------------------------------------------------------------------------------------------------------|
| K500, K501, K502 |                   K505                | K508, K509, K510 |     | K511, K512, K514 ||  K15, K16         |
| Ctrl, Win,  Alt  |                Space                  | Alt,  Ctrl, Fn   |     | Left, Down, Right||  0,   .           |
----------------------------------------------------------------------------------------------------------------------------|
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	----------------------------------------------------------------------------------------------------------------------------|
	| K000,       K002, K003, K004, K005, K006, K007, K008, K009,       K011, K012, K013, K413|         |K014, K015, K016, K017 |
	| ESC,        F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,         F9,   F10,  F11,  F12 |         |Del,  Ins,  PdUp, PnDn |
	----------------------------------------------------------------------------------------------------------------------------|
	----------------------------------------------------------------------------------------------------------------------------|
	| K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113      |         |K114, K115, K116, K117 |
	| ~,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    -,    +,    BaSpc     |         |Num,  *,    /,    -    |
	----------------------------------------------------------------------------------------------------------------------------|
	|  K200   |K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K313   |         |K214, K215, K216, K217 |
	|  Tab    |Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    {,    },     \     |         |7,    8,    9,    +    |
	----------------------------------------------------------------------------------------------------------------------------|
	|   K300   | K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312       |         |K314, K315, K316, K317 |
	|   Caps   | A,    S,    D,    F,    G,    H,    J,    K,    L,    :,    ",    Enter      |         |4,    5,    6,    Enter|
	----------------------------------------------------------------------------------------------------------------------------|
	|     K400    | K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411    |   |  K412  |  |K414, K415, K416       |
	|     RShift  | Z,    X,    C,    V,    B,    N,    M,    ,<,   .>,   /?,   LShift  |   |  UP    |  |1,    2,    3          |
	----------------------------------------------------------------------------------------------------------------------------|
	| K500, K501, K502 |                   K505                | K508, K509, K510 |     | K511, K512, K514 ||  K15, K16         |
	| Ctrl, Win,  Alt  |                Space                  | Alt,  Ctrl, Fn   |     | Left, Down, Right||  0,   .           |
	----------------------------------------------------------------------------------------------------------------------------|
	*/

  [_BASE] = LAYOUT_default(
    KC_ESC,  		  KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,  KC_HOME, KC_END,\
    KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,		\
    KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,		\
    KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  		 KC_P4,   KC_P5,   KC_P6,   KC_PENT,		\
    KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,  			 KC_P1,   KC_P2,   KC_P3,					\
    KC_LCTL, KC_LGUI, KC_LALT,					KC_SPC, 				   KC_RALT, KC_RCTL, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
  ),

  [_FN1] = LAYOUT_default(
    RGB_TOG,   		  _______, _______,_______, _______, _______, _______, RGB_VAD, RGB_VAI, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_PGUP, KC_PGDN,        \
    RGB_M_P,  RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_SN,RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, _____________, _______, _______, _______,		\
    _______,  _______, _______, _______,_______, _______,_______, _______, KC_PSCR, _______, _______, _______, _______, _______, _______, _______, _______, _______,		\
    _______,  _______, _______, _______,_______, _______,_______, _______, _______, _______, _______, _______, _______,  		 _______, _______, _______, _______,		\
    _______,  _______, _______, _______,_______, _______,_______, _______, _______, _______, _______, RGB_MOD, KC_PGUP,  		 _______, _______, _______,					\
    _______,  _______, _______,					_______, 				   _______, RGB_TOG, _______, KC_HOME, KC_PGDN, KC_END,  _______, _______
  )
};

#ifdef RGBLIGHT_LAYERS
// // num led
// const rgblight_segment_t PROGMEM numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {0, 1, HSV_BLUE},
//     // {84, 1, HSV_BLUE},
//     // {72, 1, HSV_BLUE},
//     // {97, 1, HSV_BLUE},
//     // {92, 1, HSV_BLUE},
//     // {89, 1, HSV_BLUE}
// );

// // caps led
// const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {1, 1, HSV_BLUE}
// );

// // scroll led
// const rgblight_segment_t PROGMEM scrolllock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     // {2, 1, HSV_BLUE}
// );

// // rgb light layers
// const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     numlock_layer,
//     capslock_layer,
//     scrolllock_layer
// );
#endif

void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_GRADIENT);
    rgblight_set_effect_range(3, RGBLED_NUM - 3);
    #ifdef RGBLIGHT_LAYERS
        // Enable the LED layers
        //rgblight_layers = rgb_layers;
    #endif
#endif


}

__attribute__ ((weak))
void led_set_user(uint8_t usb_led) {
    //set num lock led indi
    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
        //HSV_BLUE with 200 val
        sethsv_raw(170, 255, 200, (LED_TYPE *)&led[0]);
    } else {
        sethsv(HSV_OFF, (LED_TYPE *)&led[0]);
    }

    //set caps lock led indi
    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
        //HSV_BLUE with 200 val
        sethsv_raw(170, 255, 200, (LED_TYPE *)&led[1]);
    } else {
        sethsv(HSV_OFF, (LED_TYPE *)&led[1]);
    }

    //set scroll lock led indi
    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
        //HSV_BLUE with 200 val
        sethsv_raw(170, 255, 200, (LED_TYPE *)&led[2]);
    } else {
        sethsv(HSV_OFF, (LED_TYPE *)&led[2]);
    }
    rgblight_set();
}
