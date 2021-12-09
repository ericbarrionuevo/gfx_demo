#ifndef Bm437_EpsonMGA_FON_HPP
#define Bm437_EpsonMGA_FON_HPP
#include <stdint.h>
#include <gfx_font.hpp>

#ifndef PROGMEM
	#define PROGMEM
#endif

static const uint8_t Bm437_EpsonMGA_FON_char_data[] PROGMEM = {
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x7E, 0x81, 0xA5, 0x81, 0xBD, 0x81, 0x7E, 0x00, 0x08, 0x00, 0x7E, 0xFF, 0x99
	, 0xFF, 0x81, 0xC3, 0x7E, 0x00, 0x08, 0x00, 0x00, 0x6C, 0xFE, 0xFE, 0x7C, 0x38, 0x10, 0x00, 0x08, 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x10, 0x00
	, 0x08, 0x00, 0x38, 0x38, 0xFE, 0xFE, 0xFE, 0x10, 0x7C, 0x00, 0x08, 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x10, 0x38, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38
	, 0x7C, 0x7C, 0x38, 0x00, 0x00, 0x08, 0x00, 0xFF, 0xFF, 0xC7, 0x83, 0x83, 0xC7, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x78, 0xCC, 0x84, 0x84, 0xCC, 0x78, 0x00
	, 0x08, 0x00, 0xFF, 0xC3, 0x99, 0xBD, 0xBD, 0x99, 0xC3, 0xFF, 0x08, 0x00, 0x3E, 0x06, 0x7A, 0xDA, 0xD8, 0xD8, 0x70, 0x00, 0x08, 0x00, 0x78, 0xCC, 0xCC
	, 0x78, 0x30, 0xFC, 0x30, 0x00, 0x08, 0x00, 0x30, 0x28, 0x24, 0x24, 0x68, 0xE0, 0xC0, 0x00, 0x08, 0x00, 0x0E, 0x72, 0x4E, 0x72, 0x46, 0xC6, 0xC0, 0x00
	, 0x08, 0x00, 0x10, 0x54, 0x38, 0xC6, 0x38, 0x54, 0x10, 0x00, 0x08, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0C, 0x3C
	, 0xFC, 0x3C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0x30, 0x78, 0xFC, 0x30, 0x30, 0xFC, 0x78, 0x30, 0x08, 0x00, 0x6C, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x6C, 0x00
	, 0x08, 0x00, 0x7F, 0xDB, 0xDB, 0x7B, 0x1B, 0x1B, 0x1B, 0x00, 0x08, 0x00, 0x78, 0xC0, 0x78, 0xCC, 0x78, 0x0C, 0x78, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00
	, 0x00, 0x00, 0x7C, 0x7C, 0x00, 0x08, 0x00, 0x30, 0x78, 0xFC, 0x30, 0xFC, 0x78, 0x30, 0xFC, 0x08, 0x00, 0x30, 0x78, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x00
	, 0x08, 0x00, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x78, 0x30, 0x00, 0x08, 0x00, 0x00, 0x08, 0x0C, 0xFE, 0x0C, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x60
	, 0xFE, 0x60, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFC, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24, 0x66, 0xFF, 0x66, 0x24, 0x00, 0x00
	, 0x08, 0x00, 0x10, 0x10, 0x38, 0x38, 0x7C, 0x7C, 0xFE, 0x00, 0x08, 0x00, 0xFE, 0x7C, 0x7C, 0x38, 0x38, 0x10, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00
	, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x30, 0x00, 0x08, 0x00, 0xCC, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00
	, 0x08, 0x00, 0x6C, 0x6C, 0xFE, 0x6C, 0xFE, 0x6C, 0x6C, 0x00, 0x08, 0x00, 0x30, 0x7C, 0xC0, 0x78, 0x0C, 0xF8, 0x30, 0x00, 0x08, 0x00, 0xE6, 0xEE, 0x1C
	, 0x38, 0x70, 0xEE, 0xCE, 0x00, 0x08, 0x00, 0x38, 0x6C, 0x38, 0x70, 0xDA, 0xCC, 0x7A, 0x00, 0x08, 0x00, 0x18, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00
	, 0x08, 0x00, 0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00, 0x08, 0x00, 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00, 0x08, 0x00, 0x10, 0xD6, 0x7C
	, 0x38, 0x7C, 0xD6, 0x10, 0x00, 0x08, 0x00, 0x00, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x60
	, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x08, 0x00, 0x04, 0x0C, 0x18
	, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xCE, 0xD6, 0xE6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x30, 0xF0, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00
	, 0x08, 0x00, 0x7C, 0xC6, 0x06, 0x1C, 0x70, 0xC6, 0xFE, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0x06, 0x3C, 0x06, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x1C, 0x3C, 0x6C
	, 0xCC, 0xFE, 0x0C, 0x0C, 0x00, 0x08, 0x00, 0xFE, 0xC0, 0xFC, 0x06, 0x06, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x3C, 0x60, 0xC0, 0xFC, 0xC6, 0xC6, 0x7C, 0x00
	, 0x08, 0x00, 0xFE, 0xC6, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xC6, 0x7C, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xC6
	, 0x7E, 0x06, 0x0C, 0x78, 0x00, 0x08, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00, 0x08, 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x30, 0x60
	, 0x08, 0x00, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x00, 0x08, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x08, 0x00, 0x60, 0x30, 0x18
	, 0x0C, 0x18, 0x30, 0x60, 0x00, 0x08, 0x00, 0x78, 0xCC, 0x0C, 0x18, 0x30, 0x00, 0x30, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xDE, 0xDE, 0xDE, 0xC0, 0x7C, 0x00
	, 0x08, 0x00, 0x38, 0x6C, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0xFC, 0x66, 0x66, 0x7C, 0x66, 0x66, 0xFC, 0x00, 0x08, 0x00, 0x3C, 0x66, 0xC0
	, 0xC0, 0xC0, 0x66, 0x3C, 0x00, 0x08, 0x00, 0xF8, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0xF8, 0x00, 0x08, 0x00, 0xFE, 0x62, 0x68, 0x78, 0x68, 0x62, 0xFE, 0x00
	, 0x08, 0x00, 0xFE, 0x62, 0x68, 0x78, 0x68, 0x60, 0xF8, 0x00, 0x08, 0x00, 0x3C, 0x66, 0xC0, 0xDE, 0xC6, 0x66, 0x3A, 0x00, 0x08, 0x00, 0xC6, 0xC6, 0xC6
	, 0xFE, 0xC6, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0x3E, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00
	, 0x08, 0x00, 0xE6, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0xE6, 0x00, 0x08, 0x00, 0xF8, 0x60, 0x60, 0x60, 0x62, 0x62, 0xFE, 0x00, 0x08, 0x00, 0xC6, 0xEE, 0xFE
	, 0xD6, 0xC6, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0x38, 0x6C, 0xC6, 0xC6, 0xC6, 0x6C, 0x38, 0x00
	, 0x08, 0x00, 0xFC, 0x66, 0x66, 0x7C, 0x60, 0x60, 0xF8, 0x00, 0x08, 0x00, 0x38, 0x6C, 0xC6, 0xC6, 0x6C, 0x38, 0x0C, 0x06, 0x08, 0x00, 0xFC, 0x66, 0x66
	, 0x7C, 0x6C, 0x66, 0xF6, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xC0, 0x7C, 0x06, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0xFC, 0xB4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00
	, 0x08, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x08, 0x00, 0xC6, 0xC6, 0xC6
	, 0xD6, 0xFE, 0xFE, 0x6C, 0x00, 0x08, 0x00, 0xC6, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0xC2, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x3C, 0x00
	, 0x08, 0x00, 0xFC, 0x8C, 0x18, 0x30, 0x60, 0xC4, 0xFC, 0x00, 0x08, 0x00, 0x7C, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7C, 0x00, 0x08, 0x00, 0x80, 0xC0, 0x60
	, 0x30, 0x18, 0x0C, 0x04, 0x00, 0x08, 0x00, 0x7C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x7C, 0x00, 0x08, 0x00, 0x30, 0x78, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x08, 0x00, 0x60, 0x60, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x78
	, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x08, 0x00, 0xE0, 0x60, 0x7C, 0x66, 0x66, 0x66, 0xDC, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7C, 0xC0, 0xC0, 0xC0, 0x7C, 0x00
	, 0x08, 0x00, 0x1C, 0x0C, 0x7C, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xFE, 0xC0, 0x7C, 0x00, 0x08, 0x00, 0x1E, 0x30, 0xFC
	, 0x30, 0x30, 0x30, 0xFC, 0x00, 0x08, 0x00, 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0x78, 0x08, 0x00, 0xE0, 0x60, 0x7C, 0x66, 0x66, 0x66, 0xE6, 0x00
	, 0x08, 0x00, 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0x0C, 0x00, 0x3C, 0x0C, 0x0C, 0x0C, 0xCC, 0x78, 0x08, 0x00, 0xE0, 0x60, 0x66
	, 0x6C, 0x78, 0x6C, 0xE6, 0x00, 0x08, 0x00, 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0x00, 0x00, 0xCC, 0xFE, 0xFE, 0xD6, 0xC6, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x00, 0x00, 0xDC
	, 0x66, 0x66, 0x7C, 0x60, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0x3E, 0x08, 0x00, 0x00, 0x00, 0xEC, 0x76, 0x60, 0x60, 0xF8, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0x7C, 0xC0, 0xFE, 0x06, 0xFC, 0x00, 0x08, 0x00, 0x60, 0x60, 0xFC, 0x60, 0x60, 0x66, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0xCC
	, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0xC6, 0xD6, 0xFE, 0xFE, 0x6C, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0xCC, 0x78, 0x30, 0x78, 0xCC, 0x00, 0x08, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x7C, 0x08, 0x00, 0x00, 0x00, 0xFC
	, 0x98, 0x30, 0x64, 0xFC, 0x00, 0x08, 0x00, 0x1C, 0x30, 0x30, 0xE0, 0x30, 0x30, 0x1C, 0x00, 0x08, 0x00, 0x30, 0x30, 0x30, 0x00, 0x30, 0x30, 0x30, 0x00
	, 0x08, 0x00, 0xE0, 0x30, 0x30, 0x1C, 0x30, 0x30, 0xE0, 0x00, 0x08, 0x00, 0x72, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x38, 0x38
	, 0x6C, 0x6C, 0xC6, 0xFE, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xC0, 0xC0, 0xC6, 0x7C, 0x18, 0x78, 0x08, 0x00, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00
	, 0x08, 0x00, 0x0C, 0x18, 0x7C, 0xC6, 0xFE, 0xC0, 0x7C, 0x00, 0x08, 0x00, 0x7E, 0xC3, 0x38, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x6C, 0x00, 0x78
	, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x60, 0x30, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x30, 0x30, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0x3E, 0x60, 0x60, 0x3E, 0x0C, 0x3C, 0x08, 0x00, 0x7E, 0xC3, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00, 0x08, 0x00, 0xC6, 0x00, 0x7C
	, 0xC6, 0xFE, 0xC0, 0x7C, 0x00, 0x08, 0x00, 0x60, 0x30, 0x7C, 0xC6, 0xFE, 0xC0, 0x7C, 0x00, 0x08, 0x00, 0xD8, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00
	, 0x08, 0x00, 0x78, 0xCC, 0x00, 0x70, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0x60, 0x30, 0x00, 0x70, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0xC6, 0x38, 0x6C
	, 0xC6, 0xFE, 0xC6, 0xC6, 0x00, 0x08, 0x00, 0x38, 0x6C, 0x38, 0x6C, 0xC6, 0xFE, 0xC6, 0x00, 0x08, 0x00, 0x0C, 0x18, 0xFE, 0x62, 0x78, 0x62, 0xFE, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0xEC, 0x1A, 0x7E, 0xD8, 0xEE, 0x00, 0x08, 0x00, 0x3E, 0x6C, 0xCC, 0xCE, 0xFC, 0xCC, 0xCE, 0x00, 0x08, 0x00, 0x38, 0x6C, 0x00
	, 0x7C, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0xC6, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x60, 0x30, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0x00
	, 0x08, 0x00, 0x78, 0xCC, 0x00, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x60, 0x30, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x08, 0x00, 0xC6, 0x00, 0xC6
	, 0xC6, 0xC6, 0x7E, 0x06, 0x7C, 0x08, 0x00, 0x82, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0xC6, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00
	, 0x08, 0x00, 0x00, 0x18, 0x7E, 0xD8, 0xD8, 0x7E, 0x18, 0x00, 0x08, 0x00, 0x3C, 0x66, 0x60, 0xF8, 0x60, 0x60, 0xFE, 0x00, 0x08, 0x00, 0x84, 0xCC, 0x78
	, 0xFC, 0x30, 0xFC, 0x30, 0x00, 0x08, 0x00, 0xF0, 0xD8, 0xD8, 0xF6, 0xCF, 0xC6, 0xC7, 0x00, 0x08, 0x00, 0x1C, 0x30, 0xFC, 0x30, 0x30, 0x30, 0xE0, 0x00
	, 0x08, 0x00, 0x0C, 0x18, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x18, 0x30, 0x00, 0x70, 0x30, 0x30, 0x78, 0x00, 0x08, 0x00, 0x0C, 0x18, 0x7C
	, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x08, 0x00, 0x18, 0x30, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00, 0x08, 0x00, 0x72, 0x9C, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x00
	, 0x08, 0x00, 0x72, 0x9C, 0x00, 0xE6, 0xF6, 0xDE, 0xCE, 0x00, 0x08, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00, 0xFE, 0x00, 0x08, 0x00, 0x7C, 0xC6, 0xC6
	, 0xC6, 0x7C, 0x00, 0xFE, 0x00, 0x08, 0x00, 0x30, 0x00, 0x30, 0x60, 0xC0, 0xCC, 0x78, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xC0, 0xC0, 0x00, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0C, 0x0C, 0x00, 0x00, 0x08, 0x00, 0xE6, 0x6C, 0x7C, 0x76, 0x66, 0xCC, 0x1E, 0x00, 0x08, 0x00, 0xE6, 0x6C, 0x7A
	, 0x76, 0x6E, 0xDE, 0x06, 0x00, 0x08, 0x00, 0x30, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x00, 0x08, 0x00, 0x12, 0x36, 0x6C, 0xD8, 0x6C, 0x36, 0x12, 0x00
	, 0x08, 0x00, 0x90, 0xD8, 0x6C, 0x36, 0x6C, 0xD8, 0x90, 0x00, 0x08, 0x00, 0x22, 0x00, 0x88, 0x00, 0x22, 0x00, 0x88, 0x00, 0x08, 0x00, 0x22, 0x88, 0x22
	, 0x88, 0x22, 0x88, 0x22, 0x88, 0x08, 0x00, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x08, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10
	, 0x08, 0x00, 0x10, 0x10, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x10, 0x10, 0xF0, 0x10, 0xF0, 0x10, 0x10, 0x10, 0x08, 0x00, 0x28, 0x28, 0x28
	, 0xE8, 0x28, 0x28, 0x28, 0x28, 0x08, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x28, 0x28, 0x28, 0x28, 0x08, 0x00, 0x00, 0x00, 0xF0, 0x10, 0xF0, 0x10, 0x10, 0x10
	, 0x08, 0x00, 0x28, 0x28, 0xE8, 0x08, 0xE8, 0x28, 0x28, 0x28, 0x08, 0x00, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x08, 0x00, 0x00, 0x00, 0xF8
	, 0x08, 0xE8, 0x28, 0x28, 0x28, 0x08, 0x00, 0x28, 0x28, 0xE8, 0x08, 0xF8, 0x00, 0x00, 0x00, 0x08, 0x00, 0x28, 0x28, 0x28, 0xF8, 0x00, 0x00, 0x00, 0x00
	, 0x08, 0x00, 0x10, 0x10, 0xF0, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x10, 0x10, 0x10
	, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x10, 0x10, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x10, 0x10, 0x10, 0x10
	, 0x08, 0x00, 0x10, 0x10, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x10, 0x10
	, 0xFF, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x10, 0x10, 0x1F, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x00, 0x28, 0x28, 0x28, 0x2F, 0x28, 0x28, 0x28, 0x28
	, 0x08, 0x00, 0x28, 0x28, 0x2F, 0x20, 0x3F, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x2F, 0x28, 0x28, 0x28, 0x08, 0x00, 0x28, 0x28, 0xEF
	, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xEF, 0x28, 0x28, 0x28, 0x08, 0x00, 0x28, 0x28, 0x2F, 0x20, 0x2F, 0x28, 0x28, 0x28
	, 0x08, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x00, 0x28, 0x28, 0xEF, 0x00, 0xEF, 0x28, 0x28, 0x28, 0x08, 0x00, 0x10, 0x10, 0xFF
	, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x00, 0x28, 0x28, 0x28, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x10, 0x10, 0x10
	, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x28, 0x28, 0x28, 0x28, 0x08, 0x00, 0x28, 0x28, 0x28, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x10, 0x1F
	, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x28, 0x28, 0x28, 0x28
	, 0x08, 0x00, 0x28, 0x28, 0x28, 0xFF, 0x28, 0x28, 0x28, 0x28, 0x08, 0x00, 0x10, 0x10, 0xFF, 0x10, 0xFF, 0x10, 0x10, 0x10, 0x08, 0x00, 0x10, 0x10, 0x10
	, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
	, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x08, 0x00, 0x0F, 0x0F, 0x0F
	, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x08, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3A, 0x6C, 0xCC, 0xCC, 0x76, 0x00
	, 0x08, 0x00, 0x78, 0xCC, 0xCC, 0xD8, 0xCC, 0xCC, 0xD8, 0xC0, 0x08, 0x00, 0xFE, 0x62, 0x62, 0x60, 0x60, 0x60, 0xF8, 0x00, 0x08, 0x00, 0x00, 0x00, 0xFE
	, 0x6C, 0x6C, 0x6C, 0xCE, 0x00, 0x08, 0x00, 0xFE, 0xC6, 0x60, 0x30, 0x60, 0xC6, 0xFE, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7E, 0xD8, 0xD8, 0xD8, 0x70, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xF6, 0xC0, 0xC0, 0x08, 0x00, 0x00, 0x00, 0x7E, 0x98, 0x18, 0x18, 0x1C, 0x00, 0x08, 0x00, 0xFC, 0x30, 0xFC
	, 0xB4, 0xFC, 0x30, 0xFC, 0x00, 0x08, 0x00, 0x78, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0x78, 0x00, 0x08, 0x00, 0x38, 0x6C, 0xC6, 0xC6, 0x6C, 0x6C, 0xEE, 0x00
	, 0x08, 0x00, 0x3C, 0x60, 0x30, 0x78, 0xCC, 0xCC, 0x78, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6C, 0x92, 0x92, 0x6C, 0x00, 0x00, 0x08, 0x00, 0x00, 0x06, 0x7C
	, 0xDE, 0xD6, 0xF6, 0x7C, 0xC0, 0x08, 0x00, 0x3C, 0x60, 0xC0, 0xFC, 0xC0, 0x60, 0x3C, 0x00, 0x08, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x00
	, 0x08, 0x00, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x00, 0x08, 0x00, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0xFC, 0x00, 0x08, 0x00, 0xE0, 0x38, 0x0E
	, 0x38, 0xE0, 0x00, 0xFE, 0x00, 0x08, 0x00, 0x0E, 0x38, 0xE0, 0x38, 0x0E, 0x00, 0xFE, 0x00, 0x08, 0x00, 0x0E, 0x1B, 0x1B, 0x18, 0x18, 0x18, 0x18, 0x18
	, 0x08, 0x00, 0x18, 0x18, 0x18, 0x18, 0xD8, 0xD8, 0x70, 0x00, 0x08, 0x00, 0x30, 0x30, 0x00, 0xFC, 0x00, 0x30, 0x30, 0x00, 0x08, 0x00, 0x00, 0x72, 0x9C
	, 0x00, 0x72, 0x9C, 0x00, 0x00, 0x08, 0x00, 0x30, 0x48, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x30, 0x78, 0x30, 0x00, 0x00, 0x00
	, 0x08, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0E, 0x08, 0x08, 0x68, 0xB8, 0x18, 0x08, 0x00, 0x08, 0x00, 0xB0, 0x48, 0x48
	, 0x48, 0x48, 0x00, 0x00, 0x00, 0x08, 0x00, 0x70, 0x88, 0x30, 0x40, 0xF8, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00
	};

static const ::gfx::font Bm437_EpsonMGA_FON(
	8,
	8,
	6,
	7,
	::gfx::point16(96, 96),
	'\0',
	'\xFF',
	'\0',
	' ',
	{ 0, 0, 0 },
	400,
	255,
	0,
	0,
	Bm437_EpsonMGA_FON_char_data);

#endif // Bm437_EpsonMGA_FON_HPP
