/* Copyright 2023 Jeremy O'Brien
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_planck_grid(
    MI_OCTD, MI_CH1, MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH9, MI_CH10, MI_OCTU,
    KC_NO,   MI_Cs3, MI_Ds3, KC_NO,  MI_Fs3, MI_Gs3, MI_As3, KC_NO,  MI_Cs4, MI_Ds4, KC_NO,   MI_Fs4,
    MI_C3,   MI_D3,  MI_E3,  MI_F3,  MI_G3,  MI_A3,  MI_B3,  MI_C4,  MI_D4,  MI_E4,  MI_F4,   MI_G4,
    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
