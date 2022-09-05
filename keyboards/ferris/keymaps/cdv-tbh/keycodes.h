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

// shortcuts
#define M_UNDO G(KC_Z)
#define M_CUT G(KC_X)
#define M_COPY G(KC_C)
#define M_PSTE G(KC_V)
#define M_SAVE G(KC_S)
#define TAB_L G(S(KC_LBRC))
#define TAB_R G(S(KC_RBRC))
#define WS_L A(S(KC_LEFT))  // select word left
#define WS_R A(S(KC_RIGHT)) // select word right
#define W_L A(KC_LEFT)      // move word left
#define W_R A(KC_RIGHT)     // move word right
#define LAU LGUI(KC_SPC)    // launcher (cmd+spc)
// awkward symbols to type
#define GBPD LALT(KC_3) // UK pound sign
#define PMIN LALT(KC_PLUS) // plus/minus symbol


#define UND_G MT(KC_UNDS, KC_G)
#define MINS_M MT(KC_MINS, KC_M)
// #define MT_DOTQ MT(KC_DQUO, KC_QUOT)
// #define MT_BSFS MT(KC_BSLS, KC_SLSH)
// #define KC_LTGT MT(KC_LT, KC_GT)
// #define KC_SCCN MT(KC_SCLN, KC_COLN)
// #define KC_SLDT MT(KC_SLSH, KC_DOT)
#define KC_AWR MT(LSG_T(KC_R), G(KC_SPC))
#define KC_AWM MT(LSG_T(KC_LT), (LSG_T(KC_GT)))

// change to window \ move to window
// #define MO_1 MT(LSG(KC_1), G(KC_1))
// #define MO_2 MT(LSG(KC_2), G(KC_2))
// #define MO_3 MT(LSG(KC_3), G(KC_3))
// #define MO_4 MT(LSG(KC_4), G(KC_4))
// #define MO_5 MT(LSG(KC_5), G(KC_5))
// #define MO_6 MT(LSG(KC_6), G(KC_6))
// #define MO_7 MT(LSG(KC_7), G(KC_7))
// #define MO_8 MT(LSG(KC_8), G(KC_8))
// #define MO_9 MT(LSG(KC_9), G(KC_9))
// #define MO_0 MT(LSG(KC_0), G(KC_0))

#define KC_CTSC RCTL_T(KC_SCLN)
#define KC_LSHZ LSFT_T(KC_Z)
#define KC_RLSH RSFT_T(KC_SLSH)
#define KC_SPM2 LT(2, KC_SPC)
#define KC_BSM1 LT(1, KC_BSPC)
#define KC_GUTA GUI_T(KC_KC_TAB)
#define KC_CLGV CTL_T(KC_GRV)

enum layers {
    _CDH,
	_NUM,
	_NAV,
	_FUN,
    _SUP,
};

enum keycodes {
	// Numword and switch app
	NUMWORD = SAFE_RANGE,

	OS_SHFT,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

	LLOCK,
	SW_APP,
};
