#pragma once

#include "common.h"
#include "ui.h"
#include "touchcal.h"


// special key ids
enum {
    KEY_DUMMY   = 0x80,
    KEY_BKSPC   = 0x81,
    KEY_INSERT  = 0x82,
    KEY_ENTER   = 0x83,
    KEY_CAPS    = 0x84,
    KEY_SPECIAL = 0x85,
    KEY_NUMPAD  = 0x86,
    KEY_ALPHA   = 0x87,
    KEY_LEFT    = 0x88,
    KEY_RIGHT   = 0x89,
    KEY_ESCAPE  = 0x8A,
    KEY_SWITCH  = 0x8B,
    KEY_UNICODE = 0x8C,
    KEY_TXTBOX  = 0xFF
};

// special key strings
#define SWKBD_KEYSTR "", "DEL", "INS", "SUBMIT", "CAPS", "#$@", "123", "ABC", "←", "→", "ESC", "SWITCH", "U+"

#define COLOR_SWKBD_NORMAL  COLOR_GREY
#define COLOR_SWKBD_PRESSED COLOR_LIGHTGREY
#define COLOR_SWKBD_BOX     COLOR_DARKGREY
#define COLOR_SWKBD_CHARS   COLOR_BLACK
#define COLOR_SWKBD_ENTER   COLOR_TINTEDBLUE
#define COLOR_SWKBD_CAPS    COLOR_TINTEDYELLOW

#define SWKBD_TEXTBOX_WIDTH 240
#define SWKBD_STDKEY_WIDTH  18
#define SWKBD_STDKEY_HEIGHT 20
#define SWKDB_KEY_SPACING   1

#define SWKBD_KEYS_ALPHABET \
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '+', '-', KEY_BKSPC, \
    'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '&', KEY_ENTER, \
    'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', '(', ')', '[', ']', \
    'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '_', '#', '!', \
    KEY_CAPS, ' ', KEY_NUMPAD, KEY_SPECIAL, KEY_LEFT, KEY_RIGHT

#define SWKBD_KEYS_SPECIAL \
    '(', ')', '{', '}', '[', ']', \
    '.', ',', '?', '!', '`', '\'', \
    '^', '*', '+', '-', '_', '=', \
    '@', '#', '$', '%', '&', '~', \
    KEY_ALPHA, ' ', KEY_BKSPC

#define SWKBD_KEYS_NUMPAD \
    '7', '8', '9', 'F', 'E', \
    '4', '5', '6', 'D', 'C', \
    '3', '2', '1', 'B', 'A', \
    '0', '.', '_', KEY_LEFT, KEY_RIGHT, \
    KEY_ALPHA, KEY_UNICODE, ' ', KEY_BKSPC

// offset, num of keys in row, width of special keys (...), 0
#define SWKBD_LAYOUT_ALPHABET \
    13, 32, 0, \
    12, 51, 0, \
    13, 0, \
    12, 0, \
    6, 32, 123, 32, 32, 18, 18, 0, \
    0

#define SWKBD_LAYOUT_SPECIAL \
    6, 0, \
    6, 0, \
    6, 0, \
    6, 0, \
    3, 32, 46, 32, 0, \
    0

#define SWKBD_LAYOUT_NUMPAD \
    5, 0, \
    5, 0, \
    5, 0, \
    5, 18, 18, 0, \
    4, 20, 20, 31, 20, 0, \
    0


#define ShowKeyboardOrPrompt (TouchIsCalibrated() ? ShowKeyboard : ShowStringPrompt)
bool ShowKeyboard(char* inputstr, u32 max_size, const char *format, ...);
