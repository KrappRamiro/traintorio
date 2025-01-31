#ifndef oled_images
#define oled_images
#include "Arduino.h"
// 'check', 40x40px
const unsigned char bitmap_check[] PROGMEM = {

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00,
	0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
	0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00,
	0x07, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x1f,
	0xf0, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0,
	0x78, 0x00, 0x00, 0xff, 0x80, 0x7c, 0x00, 0x01, 0xff, 0x00, 0xfe, 0x00, 0x03, 0xfe, 0x00, 0xfe,
	0x00, 0x03, 0xfe, 0x00, 0xff, 0x00, 0x07, 0xfc, 0x00, 0xff, 0x80, 0x0f, 0xf8, 0x00, 0x7f, 0xc0,
	0x1f, 0xf0, 0x00, 0x7f, 0xc0, 0x1f, 0xf0, 0x00, 0x3f, 0xe0, 0x3f, 0xe0, 0x00, 0x1f, 0xf0, 0x7f,
	0xc0, 0x00, 0x0f, 0xf0, 0xff, 0x80, 0x00, 0x0f, 0xf8, 0xff, 0x80, 0x00, 0x07, 0xfd, 0xff, 0x00,
	0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00,
	0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00,
	0x3f, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'check-2', 80x40px
const unsigned char bitmap_check_2 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0x80, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x1f, 
	0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0f, 0xe0, 0x00, 0x3f, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x0f, 0xe0, 0x00, 0x3f, 0xe0, 0x00, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x7f, 0xc0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 
	0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xfe, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x07, 0xfc, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0x8f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xdf, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
	0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


// 'cross', 40x40px
const unsigned char bitmap_cross[] PROGMEM = {
	0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xff,
	0xf0, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xfe,
	0x00, 0x7f, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 0x7f, 0xff, 0xc3,
	0xff, 0xfe, 0x3f, 0xff, 0xe7, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff,
	0xf0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0x80,
	0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00,
	0x1f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x7f,
	0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff,
	0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff,
	0xf8, 0x3f, 0xff, 0xe7, 0xff, 0xfc, 0x7f, 0xff, 0xc3, 0xff, 0xfe, 0xff, 0xff, 0x81, 0xff, 0xff,
	0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff,
	0xf8, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x07, 0xff, 0xff, 0xc0,
	0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x01, 0xff
};

// 'cross-2', 80x40px
const unsigned char bitmap_cross_2 [] PROGMEM = {
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 
	0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xf8, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x3f, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 
	0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x01, 0xff, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xff, 0xc0, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x07, 
	0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0xf8, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x3f, 0xf8, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
	0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
	0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 
	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0xfc, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x1f, 0xfc, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xe0, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x03, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0x80, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x00, 0x00, 
	0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x0f, 0xfc, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x1f, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 
	0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00
};

#endif