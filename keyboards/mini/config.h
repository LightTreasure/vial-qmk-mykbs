// Copyright 2024 Alok Meshram
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Key matrix size */
#define MATRIX_COLS 4
#define MATRIX_ROWS 3

/* Key matrix pins (pin names are AVR format) */
#define MATRIX_COL_PINS { B6, B3, B1, F7 }
#define MATRIX_ROW_PINS { E6, B4, B5 }

/* 
   The Adafruit NeoKeys have diodes with:
   Rows connected to anodes 
   Columns connected to cathodes
   
   In QMK parlance, this is ROW2COL
*/
#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5
