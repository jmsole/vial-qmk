/* Copyright 2023 splitkb.com <support@splitkb.com>
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

#pragma once

// Myriad boilerplate
#define MYRIAD_ENABLE

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

// #define TRI_LAYER_LOWER_LAYER 1
// #define TRI_LAYER_UPPER_LAYER 2
// #define TRI_LAYER_ADJUST_LAYER 3
#define CAPS_WORD_IDLE_TIMEOUT 3000  // 3 seconds.

/// Vial-specific settings

// Default is 2, needed because keymap has 7 layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define VIAL_KEYBOARD_UID {0xB3, 0x8D, 0x94, 0xDA, 0xB3, 0xD7, 0xDC, 0x3D}

#define VIAL_UNLOCK_COMBO_ROWS { 3, 9 }
#define VIAL_UNLOCK_COMBO_COLS { 2, 5 }

#define USB_POLLING_INTERVAL_MS 1
