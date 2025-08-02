#include QMK_KEYBOARD_H
#include "print.h"

void keyboard_pre_init_user(void) { setPinInputHigh(F6); }   // pull-up

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x4_knob(
        KC_F13, KC_F14, KC_F15, KC_F16,
        KC_F17, KC_F18, KC_F19, KC_F20,
        KC_F21, KC_F22, KC_F23, KC_F24,
        KC_MUTE                    /* kbtn → encoder press */
    )
};
/* rotary turns (direction already correct) */
const uint16_t PROGMEM encoder_map[1][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { { KC_VOLD, KC_VOLU } }
};
