// Copyright 2024 Fernando Ramirez (@imaginabit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define DEFAULT_KEYMAP custom_keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_linear_5(
        KC_1, KC_2, KC_3, KC_4, KC_5
    )
};
