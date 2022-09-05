#include QMK_KEYBOARD_H
#include "keycodes.h"
// #include "layer_lock.h"
// #include "oneshot.h"

// Tap Dance declarations
enum {
    T_QT,
    T_BSFS,
    T_SLDT,
    T_LGT,
    T_SCCN,
    MO_1,
    MO_2,
    MO_3,
    MO_4,
    MO_5,
    MO_6,
    MO_7,
    MO_8,
    MO_9,
    MO_0,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [T_QT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_DQT),
    [T_BSFS] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [T_SLDT] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_SLSH),
    [T_LGT] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_SLSH),
    [T_SCCN] = ACTION_TAP_DANCE_DOUBLE(KC_COLN, KC_SCLN),
    [MO_1] = ACTION_TAP_DANCE_DOUBLE(G(KC_1), LSG(KC_1)),
    [MO_2] = ACTION_TAP_DANCE_DOUBLE(G(KC_2), LSG(KC_2)),
    [MO_3] = ACTION_TAP_DANCE_DOUBLE(G(KC_3), LSG(KC_3)),
    [MO_4] = ACTION_TAP_DANCE_DOUBLE(G(KC_4), LSG(KC_4)),
    [MO_5] = ACTION_TAP_DANCE_DOUBLE(G(KC_5), LSG(KC_5)),
    [MO_6] = ACTION_TAP_DANCE_DOUBLE(G(KC_6), LSG(KC_6)),
    [MO_7] = ACTION_TAP_DANCE_DOUBLE(G(KC_7), LSG(KC_7)),
    [MO_8] = ACTION_TAP_DANCE_DOUBLE(G(KC_8), LSG(KC_8)),
    [MO_9] = ACTION_TAP_DANCE_DOUBLE(G(KC_9), LSG(KC_9)),
    [MO_0] = ACTION_TAP_DANCE_DOUBLE(G(KC_0), LSG(KC_0)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_CDH] = LAYOUT(
        KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_J,       KC_L,       KC_U,       KC_Y,       TD(T_QT),
        HOME_A,     HOME_R,     HOME_S,     HOME_T,     KC_G,       KC_M,       HOME_N,     HOME_E,     HOME_I,     HOME_O,
        KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_K,       KC_H,       KC_COMM,    KC_DOT,     TD(T_BSFS),
                                            CDH,        SUP_1,      NAV,        NUM
  ),
  [_NUM] = LAYOUT(
        KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_PLUS,    KC_7,       KC_8,       KC_9,       KC_0,
        KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_MINS,    KC_UNDS,    KC_MINS,    KC_4,       KC_5,       KC_6,       TD(T_SCCN),
        KC_TILD,    KC_GRV,     KC_BSLS,    TD(T_LGT),  KC_PIPE,    KC_EQL,     KC_1,       KC_2,       KC_3,       TD(T_SLDT),
                                            CDH,        SUP_1,      FUN,        CDH
  ),
  [_NAV] = LAYOUT(
        KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_PGDN,    KC_HOME,    KC_NO,      KC_NO,      KC_END,     KC_NO,
        C(KC_A),    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_F10,     KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_NO,
        C(KC_Z),    C(KC_X),    C(KC_C),    KC_NO,      C(KC_V),    KC_INS,     KC_DEL,     KC_PGUP,    KC_PGDN,    KC_NO,
                                            CDH,        SUP_1,      SUP_2,      CDH
  ),
  [_FUN] = LAYOUT(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_PSCR,    KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_LALT,    KC_NO,      KC_NO,      KC_F11,     KC_F12,     KC_NO,      KC_NO,      KC_NO,      KC_PAUS,    KC_NO,
                                            CDH,        SUP_1,      SUP_2,      CDH
  ),
  [_SUP] = LAYOUT(
        TD(MO_1),   TD(MO_2),   TD(MO_3),   TD(MO_4),   TD(MO_5),   KC_PSCR,    KC_NO,      KC_NO,      KC_NO,      KC_NO,
        TD(MO_6),   TD(MO_7),   TD(MO_8),   TD(MO_9),   TD(MO_0),   KC_AWM,     KC_AWR,     KC_NO,      KC_NO,      KC_NO,
        G(KC_Q),    G(KC_W),    G(KC_E),    G(KC_D),    KC_AWM,     G(KC_A),    KC_NO,      KC_NO,      KC_NO,      KC_NO,
                                            CDH,        SUP_1,      SUP_2,      CDH
  )
};

enum combo_events {
   LCBR_COMBO,
   LPRN_COMBO,
   LBRC_COMBO,
   RCBR_COMBO,
   RPRN_COMBO,
   RBRC_COMBO,
   ESC_COMBO,
   BACKSPACE_COMBO,
   DELETE_COMBO,
   TAB_COMBO,
   ENTER_COMBO,
//    ESC1_COMBO,
   BACKSPACE1_COMBO,
   DELETE1_COMBO,
   TAB1_COMBO,
   ENTER1_COMBO,
   CUT_COMBO,
   COPY_COMBO,
   PASTE_COMBO,
//    CPWORD_COMBO,
//    MINS_COMBO,
//    UNDS_COMBO,
   COMBO_LENGTH
 };

 uint16_t COMBO_LEN = COMBO_LENGTH;

 const uint16_t PROGMEM lbrc_combo[] = {KC_D, HOME_A, COMBO_END};
 const uint16_t PROGMEM lcbr_combo[] = {KC_D, HOME_R, COMBO_END};
 const uint16_t PROGMEM lprn_combo[] = {KC_D, HOME_S, COMBO_END};
 const uint16_t PROGMEM rprn_combo[] = {KC_H, HOME_E, COMBO_END};
 const uint16_t PROGMEM rcbr_combo[] = {KC_H, HOME_I, COMBO_END};
 const uint16_t PROGMEM rbrc_combo[] = {KC_H, HOME_O, COMBO_END};
 const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
 const uint16_t PROGMEM backspace_combo[] = {KC_F, KC_P, COMBO_END};
 const uint16_t PROGMEM delete_combo[] = {KC_W, KC_F, COMBO_END};
 const uint16_t PROGMEM tab_combo[] = {KC_P, KC_B, COMBO_END};
 const uint16_t PROGMEM enter_combo[] = {HOME_S, HOME_T, COMBO_END};
//  const uint16_t PROGMEM esc1_combo[] = {KC_Y,  T_QT, COMBO_END};
 const uint16_t PROGMEM backspace1_combo[] = {KC_L, KC_U, COMBO_END};
 const uint16_t PROGMEM delete1_combo[] = {KC_U, KC_Y, COMBO_END};
 const uint16_t PROGMEM tab1_combo[] = {KC_J, KC_L, COMBO_END};
 const uint16_t PROGMEM enter1_combo[] = {HOME_N, HOME_E, COMBO_END};
 const uint16_t PROGMEM cut_combo[] = {KC_X, KC_C, COMBO_END};
 const uint16_t PROGMEM copy_combo[] = {KC_C, KC_D, COMBO_END};
 const uint16_t PROGMEM paste_combo[] = {KC_D, KC_V, COMBO_END};
//  const uint16_t PROGMEM cpword_combo[] = {HOME_A, HOME_O, COMBO_END};
//  const uint16_t PROGMEM mins_combo[] = {KC_M, HOME_N, COMBO_END};
//  const uint16_t PROGMEM unds_combo[] = {HOME_T, KC_G, COMBO_END};

 combo_t key_combos[] = {
   [LCBR_COMBO] = COMBO(lcbr_combo, KC_LCBR),
   [LPRN_COMBO] = COMBO(lprn_combo, KC_LPRN),
   [LBRC_COMBO] = COMBO(lbrc_combo, KC_LBRC),
   [RCBR_COMBO] = COMBO(rcbr_combo, KC_RCBR),
   [RPRN_COMBO] = COMBO(rprn_combo, KC_RPRN),
   [RBRC_COMBO] = COMBO(rbrc_combo, KC_RBRC),
   [ESC_COMBO] = COMBO(esc_combo, KC_ESC),
   [BACKSPACE_COMBO] = COMBO(backspace_combo, KC_BSPC),
   [DELETE_COMBO] = COMBO(delete_combo, KC_DEL),
   [TAB_COMBO] = COMBO(tab_combo, KC_TAB),
   [ENTER_COMBO] = COMBO(enter_combo, KC_ENTER),
//    [ESC1_COMBO] = COMBO(esc1_combo, KC_ESC),
   [BACKSPACE1_COMBO] = COMBO(backspace1_combo, KC_BSPC),
   [DELETE1_COMBO] = COMBO(delete1_combo, KC_DEL),
   [TAB1_COMBO] = COMBO(tab1_combo, KC_TAB),
   [ENTER1_COMBO] = COMBO(enter1_combo, KC_ENTER),
   [CUT_COMBO] = COMBO(cut_combo, KC_CUT),
   [COPY_COMBO] = COMBO(copy_combo, KC_COPY),
   [PASTE_COMBO] = COMBO(paste_combo, KC_PASTE),
//    [CPWORD_COMBO] = COMBO(cpword_combo, CAPS_WORD),
//    [MINS_COMBO] = COMBO(mins_combo, KC_MINS),
//    [UNDS_COMBO] = COMBO(unds_combo, KC_UNDS),
 };

// caps word setup
// bool caps_word_press_user(uint16_t keycode) {
//     switch (keycode) {
//         // Keycodes that continue Caps Word, with shift applied.
//         case KC_A ... KC_Z:
//             add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
//             return true;

//         // Keycodes that continue Caps Word, without shifting.
//         case KC_1 ... KC_0:
//         case KC_BSPC:
//         case KC_MINS:
//         case KC_DEL:
//         case KC_UNDS:
//             return true;

//         default:
//             return false;  // Deactivate Caps Word.
//     }
// }

// bool is_oneshot_cancel_key(uint16_t keycode) {
//     switch (keycode) {
//     case NAV:
//     case NUM:
//         return true;
//     default:
//         return false;
//     }
// }

// bool is_oneshot_ignored_key(uint16_t keycode) {
//     switch (keycode) {
//     case NAV:
//     case NUM:
//     case OS_SHFT:
//     case OS_CTRL:
//     case OS_ALT:
//     case OS_CMD:
//         return true;
//     default:
//         return false;
//     }
// }

// bool sw_app_active = false;

// oneshot_state os_shft_state = os_up_unqueued;
// oneshot_state os_ctrl_state = os_up_unqueued;
// oneshot_state os_alt_state = os_up_unqueued;
// oneshot_state os_cmd_state = os_up_unqueued;

// bool process_record_user(uint16_t keycode, keyrecord_t* record) {

//   update_swapper(
//                  &sw_app_active, KC_LGUI, KC_TAB,
//                  keycode, record
//                  );

//   update_oneshot(
//                  &os_shft_state, KC_LSFT, OS_SHFT,
//                  keycode, record
//                  );

//   update_oneshot(
//                  &os_ctrl_state, KC_LCTL, OS_CTRL,
//                  keycode, record
//                  );

//   update_oneshot(
//                  &os_alt_state, KC_LALT, OS_ALT,
//                  keycode, record
//                  );

//   update_oneshot(
//                  &os_cmd_state, KC_LCMD, OS_CMD,
//                  keycode, record
//                  );

//   if (!process_layer_lock(keycode, record, LLOCK)) { return false; }

//   return true;
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _NUM, _NAV, _FUN,
//     );
// }
