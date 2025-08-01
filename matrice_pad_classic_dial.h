#pragma once
#include "quantum.h"

#define LAYOUT_3x4_knob( \
    k00,k01,k02,k03,     \
    k10,k11,k12,k13,     \
    k14,k15,k16,k17,     \
    kbtn                 \
) {                      \
    { k00, k01, k02, k03 }, \
    { k10, k11, k12, k13 }, \
    { k14, k15, k16, k17 }, \
    { kbtn, KC_NO, KC_NO, KC_NO } \
}
