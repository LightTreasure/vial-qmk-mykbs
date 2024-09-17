/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once
#define VIAL_KEYBOARD_UID {0x18, 0x07, 0xE2, 0xFE, 0x65, 0x92, 0x11, 0xE9}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

/* Ensure we jump to bootloader if the RESET keycode was pressed */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE
