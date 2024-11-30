#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_75_ansi_rwkl(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_DEL,
                            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS,
                            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PSCR,
                            KC_CAPS, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_ENT, KC_PGUP,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
                            KC_LCTL, KC_LGUI, KC_LALT, LT(1, KC_SPC), TT(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

  [1] = LAYOUT_75_ansi_rwkl(QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                            _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                            _______, _______, KC_MS_U, KC_BTN1, KC_BTN2, _______, KC_PSTE, _______, _______, _______, _______, _______, _______, _______, _______,
                            _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______, _______,
                            _______, _______, _______, KC_COPY, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                            _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______),


  [2] = LAYOUT_75_ansi_rwkl(RGB_M_B, RGB_TOG, RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                            RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_DYNAMIC_TAPPING_TERM_PRINT,
                            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_DYNAMIC_TAPPING_TERM_UP,
                            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_DYNAMIC_TAPPING_TERM_DOWN,
                            _______, _______, _______, _______, TO(0), _______, _______, _______, _______)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
