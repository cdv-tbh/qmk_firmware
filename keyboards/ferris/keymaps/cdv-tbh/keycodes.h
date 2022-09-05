#pragma once
#include QMK_KEYBOARD_H
#include "quantum.h"

// Combos on layer 0 work on all layers
#define COMBO_ONLY_FROM_LAYER 0

// When the user holds a key after tapping it, the tapping function is repeated by default, rather than activating the hold function.
// This allows keeping the ability to auto-repeat the tapping function of a dual-role key.
// TAPPING_FORCE_HOLD removes that ability to let the user activate the hold function instead, in the case of holding
// the dual-role key after having tapped it.
#define TAPPING_FORCE_HOLD

// home row mods for Colemak-DH
#define HOME_A LCTL_T(KC_A)
#define HOME_R LGUI_T(KC_R)
#define HOME_S LALT_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_N RSFT_T(KC_N)
#define HOME_E LALT_T(KC_E)
#define HOME_I LGUI_T(KC_I)
#define HOME_O RCTL_T(KC_O)

// Layer keys
#define CDH TO(_CDH)
#define NUM TO(_NUM)
#define NAV TO(_NAV)
#define SUP_1 LT(OSL(_SUP), KC_SPC)
#define SUP_2 LT(OSL(_SUP), KC_BSPC)
#define FUN OSL(_FUN)

#define PMIN LALT(KC_PLUS) // plus/minus symbol

#define KC_AWR MT(LSG_T(KC_R), G(KC_SPC))
#define KC_AWM MT(LSG_T(KC_LT), (LSG_T(KC_GT)))

enum layers {
    _CDH,
	_NUM,
	_NAV,
	_FUN,
    _SUP,
};

// enum keycodes {
// 	// Numword and switch app
// 	NUMWORD = SAFE_RANGE,

// 	OS_SHFT,
//     OS_CTRL,
//     OS_ALT,
//     OS_CMD,
// };