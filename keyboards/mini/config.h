#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3193
#define DEVICE_VER		  0x0001
#define MANUFACTURER    "Alok Meshram"
#define PRODUCT         "Mini"

/* key matrix size */
#define MATRIX_COLS 4
#define MATRIX_ROWS 3

/* key matrix pins */
#define MATRIX_COL_PINS { B6, B3, B1, F7 }
#define MATRIX_ROW_PINS { E6, B4, B5 }

/* The Adafruit NeoKeys have diodes with:
   Rows connected to anodes 
   Columns connected to cathodes
   
   In QMK parlance, this is ROW2COL
*/
#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x6F, 0xD2, 0x03, 0xC4, 0x16, 0xAF, 0x61, 0x27}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
