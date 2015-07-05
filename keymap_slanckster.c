// Author: Nathan Ross Powell <nathanrospowell@gmail.com> <https://github.com/nathanrosspowell>
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP_GRID(
       FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0,
       FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0,
       FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0,
       FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0, FN0 ),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_MACRO(0)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    return record->event.pressed ? MACRO( D(LSFT), T(SCLN), T(9), U(LSFT), T(SPC), END ) : MACRO_NONE;
}