#include QMK_KEYBOARD_H

enum custom_keycodes {
    ALT_1_MACRO = SAFE_RANGE,
    ALT_2_MACRO,
    ALT_3_MACRO,
    ALT_4_MACRO,
    ALT_5_MACRO,
    ALT_6_MACRO,
    ALT_7_MACRO,
    ALT_8_MACRO,
    ALT_9_MACRO,
    ALT_0_MACRO,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALT_1_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "1" SS_UP(X_LALT));
            }
            return false;
        case ALT_2_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "2" SS_UP(X_LALT));
            }
            return false;
        case ALT_3_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "3" SS_UP(X_LALT));
            }
            return false;
        case ALT_4_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "4" SS_UP(X_LALT));
            }
            return false;
        case ALT_5_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "5" SS_UP(X_LALT));
            }
            return false;
        case ALT_6_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "6" SS_UP(X_LALT));
            }
            return false;
        case ALT_7_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "7" SS_UP(X_LALT));
            }
            return false;
        case ALT_8_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "8" SS_UP(X_LALT));
            }
            return false;
        case ALT_9_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "9" SS_UP(X_LALT));
            }
            return false;
        case ALT_0_MACRO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) "0" SS_UP(X_LALT));
            }
            return false;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (dvorak)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | TAB  |   '  |   ,  |   .  |   p  |   y  |                             |   f  |   g  |   c  |   r  |   l  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | ESC  |   a  |   o  |   e  |   u  |   i  |                             |   d  |   h  |   t  |   n  |   s  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   ;  |   q  |   j  |   k  |   x  |                             |   b  |   m  |   w  |   v  |   z  |      |
     * +------+------+------+------+-------------+-------------+ +-------------+-------------+------+------+------+------+
     *               |  [   |   ]  |      |      |      |      | |      |      |      |      |      |      |
     *               +-------------+-------------+------+------| |------+------+-------------+-------------+
     *                             |      |      |      |      | |      |      |      |      |
     *                             |------+------|-------------+ +-------------|------+------|
     *                                           
     */
    [0] = LAYOUT(
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                        KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_MINS,
        KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                        KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,                        KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_BSLS,
                          _______, _______, KC_LCTL, KC_BSPC, KC_DEL,   KC_ENT,   KC_SPC,  KC_RCTL,   _______,  _______,
                                            KC_LGUI,  MO(3), MO(1),    MO(2),  MO(3),  KC_RGUI
                                            
    ),

    [1] = LAYOUT(
        _______, _______, _______, KC_UP, _______, _______,                     LSFT(KC_GRV), LSFT(KC_SCLN), LSFT(KC_EQL), LSFT(KC_SLSH), LSFT(KC_MINS), LSFT(KC_SLSH),
        _______, _______, KC_LEFT, KC_DOWN, KC_DOWN, _______,                     KC_GRV, KC_SCLN, KC_EQL, KC_SLSH, KC_MINS, KC_BSLS,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                                            KC_LALT, _______, _______,   _______, _______, KC_RALT
    ),

    [2] = LAYOUT(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, 
        _______, _______, _______, _______, _______, _______,                      KC_DOT,    KC_4,    KC_5,    KC_6, _______, _______,
        _______, _______, _______, _______, _______, _______,                        KC_0,    KC_1,    KC_2,    KC_3, _______, _______,
                          _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                                            KC_LALT, _______, _______,   _______, _______, KC_RALT
    ),

    [3] = LAYOUT(
        _______, ALT_1_MACRO, ALT_2_MACRO, ALT_3_MACRO, ALT_4_MACRO, ALT_5_MACRO, ALT_6_MACRO,   ALT_7_MACRO, ALT_8_MACRO, ALT_9_MACRO, ALT_0_MACRO, _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                                            KC_LALT, _______, _______,   _______, _______, KC_RALT
    )
};

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}