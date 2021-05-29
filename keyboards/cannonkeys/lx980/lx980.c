
#include "lx980.h"

#include "rgblight_list.h"
#include "rgblight.h"

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        #ifdef RGBLIGHT_LAYERS
            rgblight_set_layer_state(0, led_state.num_lock);
            rgblight_set_layer_state(1, led_state.caps_lock);
            rgblight_set_layer_state(2, led_state.scroll_lock);
        #endif
    }

    return res;
}

