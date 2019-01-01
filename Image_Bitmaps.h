/*********************************************************************
This is a library for pxt-calliope-oled-ssd1306

Written by BCo  
BSD license, check license.txt for more information
All text above must be included in any redistribution.
*********************************************************************/

/*
 *  Created by BCo 27.12.2018 for use in pxt-calliope-oled-ssd1306
 */
 

// 'smiley_smile_bw_50x50', 50x50px

static unsigned char  smiley_happy[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xc0, 0xff, 0xff
0x00, 0x00, 0x3f, 0xff, 0xc0, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0xff, 0xf0, 0x1f, 0xfe
0x03, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xff, 0xc1, 0xff, 0xc0, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f
0xc0, 0xff, 0x07, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xc0, 0xfc
0x3f, 0xff, 0xff, 0xff, 0x1f, 0xc0, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xc0, 0xf8, 0xff, 0xff
0xff, 0xff, 0x87, 0xc0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc0, 0xf1, 0xff, 0xff, 0xff, 0xff
0xe3, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0
0xc7, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xc7, 0xff, 0x0f, 0xf8, 0x7f, 0xf8, 0xc0, 0xc7, 0xff
0x07, 0xf8, 0x3f, 0xf8, 0xc0, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0xc0, 0x8f, 0xff, 0x07, 0xf8
0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0x40, 0x8f, 0xff, 0xdf, 0xfe, 0xff, 0xfc
0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f
0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff
0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff
0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0
0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0x8f, 0xfc, 0xff, 0xf1, 0xc0, 0xe3, 0xff
0x87, 0xf8, 0xff, 0xf1, 0xc0, 0xe3, 0xff, 0xc1, 0xe0, 0xff, 0xe1, 0xc0, 0xf1, 0xff, 0xe0, 0x01
0xff, 0xe3, 0xc0, 0xf0, 0xff, 0xf0, 0x07, 0xff, 0xc3, 0xc0, 0xf8, 0xff, 0xfe, 0x3f, 0xff, 0x87
0xc0, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xfc, 0x3f, 0xff, 0xff, 0xfe, 0x1f, 0xc0, 0xfe
0x1f, 0xff, 0xff, 0xfc, 0x3f, 0xc0, 0xff, 0x07, 0xff, 0xff, 0xf8, 0x7f, 0xc0, 0xff, 0xc3, 0xff
0xff, 0xe0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0xff, 0x81, 0xff, 0xc0, 0xff, 0xf0, 0x1f, 0xfe, 0x03
0xff, 0xc0, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xc0
0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};


// 'smiley_hmpf_bw_50x50', 50x50px

static unsigned char  smiley_neutral[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xc0, 0xff, 0xff
0x00, 0x00, 0x3f, 0xff, 0xc0, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0xff, 0xf0, 0x1f, 0xfe
0x03, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0xff, 0xc1, 0xff, 0xc0, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f
0xc0, 0xff, 0x07, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 0xfe, 0x1f, 0xff, 0xff, 0xfe, 0x1f, 0xc0, 0xfc
0x3f, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xc0, 0xf8, 0xff, 0xff
0xff, 0xff, 0xc7, 0xc0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc0, 0xf1, 0xff, 0xff, 0xff, 0xff
0xe3, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0
0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0x8f, 0xfc, 0x7f, 0xf8, 0xc0, 0xc7, 0xff
0x07, 0xf8, 0x3f, 0xf8, 0xc0, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x07, 0xf8
0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0x40, 0x8f, 0xff, 0xdf, 0xfe, 0xff, 0xfc
0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f
0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff
0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff
0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0
0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0x80, 0x00, 0xff, 0xf8, 0xc0, 0xe3, 0xff
0x80, 0x00, 0x7f, 0xf1, 0xc0, 0xe3, 0xff, 0xc0, 0x00, 0xff, 0xf1, 0xc0, 0xf1, 0xff, 0xff, 0xff
0xff, 0xe3, 0xc0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xc7
0xc0, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0x87, 0xc0, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xfe
0x1f, 0xff, 0xff, 0xfe, 0x1f, 0xc0, 0xff, 0x07, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 0xff, 0x83, 0xff
0xff, 0xf0, 0x7f, 0xc0, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xf0, 0x3f, 0xff, 0x03
0xff, 0xc0, 0xff, 0xfc, 0x00, 0xc0, 0x0f, 0xff, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xff, 0xc0
0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};


// 'smiley_sad_bw_50x50', 50x50px

static unsigned char  smiley_sad[] = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xc0, 0xff, 0xff
0x00, 0x00, 0x3f, 0xff, 0xc0, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0xff, 0xf0, 0x1f, 0xfe
0x03, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0xff, 0xc1, 0xff, 0xc0, 0xff, 0xc1, 0xff, 0xff, 0xf0, 0x7f
0xc0, 0xff, 0x07, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 0xfe, 0x0f, 0xff, 0xff, 0xfe, 0x1f, 0xc0, 0xfe
0x3f, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xc0, 0xf8, 0x7f, 0xff
0xff, 0xff, 0xc7, 0xc0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc0, 0xf1, 0xff, 0xff, 0xff, 0xff
0xe3, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xc0
0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0x8f, 0xfc, 0x7f, 0xf8, 0xc0, 0xc7, 0xff
0x07, 0xf8, 0x3f, 0xfc, 0xc0, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x07, 0xf8
0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x07, 0xf8, 0x3f, 0xfc, 0x40, 0x8f, 0xff, 0x8f, 0xfc, 0x7f, 0xfc
0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f
0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x8f, 0xff, 0xff
0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x8f, 0xff, 0xff, 0xff, 0xff
0xfc, 0x40, 0x8f, 0xff, 0xf8, 0x07, 0xff, 0xfc, 0x40, 0xc7, 0xff, 0xe0, 0x03, 0xff, 0xfc, 0x40
0xc7, 0xff, 0xc0, 0x00, 0xff, 0xf8, 0xc0, 0xc7, 0xff, 0x87, 0xf0, 0xff, 0xf8, 0xc0, 0xe3, 0xff
0x8f, 0xfc, 0x7f, 0xf0, 0xc0, 0xe3, 0xff, 0xdf, 0xfe, 0xff, 0xf1, 0xc0, 0xf1, 0xff, 0xff, 0xff
0xff, 0xe1, 0xc0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xc7
0xc0, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0x87, 0xc0, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xfe
0x1f, 0xff, 0xff, 0xfe, 0x1f, 0xc0, 0xff, 0x0f, 0xff, 0xff, 0xfc, 0x3f, 0xc0, 0xff, 0x83, 0xff
0xff, 0xf0, 0x7f, 0xc0, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xf0, 0x3f, 0xff, 0x03
0xff, 0xc0, 0xff, 0xf8, 0x01, 0xe0, 0x07, 0xff, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xff, 0xc0
0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};