#ifndef _FONTS_H_
#define _FONTS_H_

#include "nokia5110.h"

#ifdef LCD_NOKIA5110_USE_INVERSION
unsigned char FontAnsciiInver6X8[][6] = {
	/*
	*	软件:PCtoLCD2002
	*	设置:阳码-列行式-逆向取模-[字宽:12,字高:8]-字体:Terminal
	*/
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},/*" ",0*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xA0,0xFF,0xFF,0xFF},/*"!",1*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFC,0xFF,0xFC,0xFF,0xFF},/*""",2*/
/* (6 X 8 , Terminal )*/
{0xEB,0x80,0xEB,0x80,0xEB,0xFF},/*"#",3*/
/* (6 X 8 , Terminal )*/
{0xFF,0xB3,0x85,0xB0,0xCD,0xFF},/*"$",4*/
/* (6 X 8 , Terminal )*/
{0xFF,0x99,0xE9,0x97,0x99,0xFF},/*"%",5*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC7,0xB0,0xB2,0xCD,0xFF},/*"&",6*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xFF,0xFC,0xFF,0xFF},/*"'",7*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xC1,0xBE,0xFF,0xFF},/*"(",8*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xBE,0xC1,0xFF,0xFF},/*")",9*/
/* (6 X 8 , Terminal )*/
{0xFF,0xE3,0xC1,0xE3,0xFF,0xFF},/*"*",10*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0xC1,0xF7,0xFF,0xFF},/*"+",11*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xFF,0x9F,0xFF,0xFF},/*",",12*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0xF7,0xF7,0xF7,0xFF},/*"-",13*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xBF,0xFF,0xFF,0xFF},/*".",14*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBF,0xCF,0xF3,0xFC,0xFF},/*"/",15*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC1,0xBE,0xBE,0xC1,0xFF},/*"0",16*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBD,0x80,0xBF,0xFF,0xFF},/*"1",17*/
/* (6 X 8 , Terminal )*/
{0xFF,0x9D,0xAE,0xB6,0xB9,0xFF},/*"2",18*/
/* (6 X 8 , Terminal )*/
{0xFF,0xDD,0xB6,0xB6,0xC9,0xFF},/*"3",19*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC7,0xD9,0x80,0xDF,0xFF},/*"4",20*/
/* (6 X 8 , Terminal )*/
{0xFF,0xB0,0xB6,0xB6,0xCE,0xFF},/*"5",21*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC1,0xB6,0xB6,0xCD,0xFF},/*"6",22*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFC,0x8E,0xF6,0xF8,0xFF},/*"7",23*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC9,0xB6,0xB6,0xC9,0xFF},/*"8",24*/
/* (6 X 8 , Terminal )*/
{0xFF,0xD9,0xB6,0xB6,0xC1,0xFF},/*"9",25*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xDB,0xFF,0xFF,0xFF},/*":",26*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBF,0xDB,0xFF,0xFF,0xFF},/*";",27*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0xEB,0xDD,0xBE,0xFF},/*"<",28*/
/* (6 X 8 , Terminal )*/
{0xFF,0xEB,0xEB,0xEB,0xEB,0xFF},/*"=",29*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBE,0xDD,0xEB,0xF7,0xFF},/*">",30*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFD,0xAE,0xF6,0xF9,0xFF},/*"?",31*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF1,0x8E,0xB6,0x81,0xFF},/*"@",32*/
/* (6 X 8 , Terminal )*/
{0xFF,0x81,0xEE,0xEE,0x81,0xFF},/*"A",33*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xB6,0xB6,0xC9,0xFF},/*"B",34*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC1,0xBE,0xBE,0xDD,0xFF},/*"C",35*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xBE,0xBE,0xC1,0xFF},/*"D",36*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xB6,0xB6,0xBE,0xFF},/*"E",37*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF6,0xF6,0xFE,0xFF},/*"F",38*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC1,0xBE,0xB6,0xC5,0xFF},/*"G",39*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF7,0xF7,0x80,0xFF},/*"H",40*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBE,0x80,0xBE,0xFF,0xFF},/*"I",41*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xBF,0xBF,0xC0,0xFF},/*"J",42*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF7,0xEB,0x9C,0xFF},/*"K",43*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xBF,0xBF,0xBF,0xFF},/*"L",44*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF9,0xF9,0x80,0xFF},/*"M",45*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF9,0xE7,0x80,0xFF},/*"N",46*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xBE,0xBE,0x80,0xFF},/*"O",47*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF6,0xF6,0xF9,0xFF},/*"P",48*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC1,0xAE,0x9E,0x81,0xFF},/*"Q",49*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xE6,0xD6,0xB9,0xFF},/*"R",50*/
/* (6 X 8 , Terminal )*/
{0xFF,0xD9,0xB6,0xB6,0xCD,0xFF},/*"S",51*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFE,0x80,0xFE,0xFE,0xFF},/*"T",52*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC0,0xBF,0xBF,0xC0,0xFF},/*"U",53*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF0,0x8F,0x8F,0xF0,0xFF},/*"V",54*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xCF,0xCF,0x80,0xFF},/*"W",55*/
/* (6 X 8 , Terminal )*/
{0xFF,0x9C,0xE3,0xE3,0x9C,0xFF},/*"X",56*/
/* (6 X 8 , Terminal )*/
{0xFC,0xFB,0x87,0xFB,0xFC,0xFF},/*"Y",57*/
/* (6 X 8 , Terminal )*/
{0xFF,0x9E,0xA6,0xB2,0xBC,0xFF},/*"Z",58*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0x80,0xBE,0xFF,0xFF},/*"[",59*/
/* (6 X 8 , Terminal )*/
{0xFC,0xF3,0xCF,0xBF,0xFF,0xFF},/*"\",60*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xBE,0x80,0xFF,0xFF},/*"]",61*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFD,0xFE,0xFD,0xFF,0xFF},/*"^",62*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBF,0xBF,0xBF,0xBF,0xFF},/*"_",63*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0xFC,0xFF,0xFF,0xFF},/*"`",64*/
/* (6 X 8 , Terminal )*/
{0xFF,0xDF,0xA7,0xA7,0x87,0xFF},/*"a",65*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xB7,0xB7,0xCF,0xFF},/*"b",66*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xB7,0xB7,0xB7,0xFF},/*"c",67*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xB7,0xB7,0x80,0xFF},/*"d",68*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xA7,0xA7,0xEF,0xFF},/*"e",69*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0x83,0xF5,0xF7,0xFF},/*"f",70*/
/* (6 X 8 , Terminal )*/
{0xFF,0xEF,0x57,0x57,0x87,0xFF},/*"g",71*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xF7,0x87,0xFF,0xFF},/*"h",72*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0x8B,0xFF,0xFF,0xFF},/*"i",73*/
/* (6 X 8 , Terminal )*/
{0xFF,0x7F,0x7F,0x8B,0xFF,0xFF},/*"j",74*/
/* (6 X 8 , Terminal )*/
{0xFF,0x80,0xEF,0xD7,0xB7,0xFF},/*"k",75*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBF,0x80,0xBF,0xFF,0xFF},/*"l",76*/
/* (6 X 8 , Terminal )*/
{0xFF,0x87,0xF7,0x87,0x87,0xFF},/*"m",77*/
/* (6 X 8 , Terminal )*/
{0xFF,0x87,0xF7,0xF7,0x8F,0xFF},/*"n",78*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xB7,0xB7,0xCF,0xFF},/*"o",79*/
/* (6 X 8 , Terminal )*/
{0xFF,0x07,0xB7,0xB7,0xCF,0xFF},/*"p",80*/
/* (6 X 8 , Terminal )*/
{0xFF,0xCF,0xB7,0xB7,0x07,0xFF},/*"q",81*/
/* (6 X 8 , Terminal )*/
{0xFF,0x87,0xEF,0xF7,0xF7,0xFF},/*"r",82*/
/* (6 X 8 , Terminal )*/
{0xFF,0xAF,0xA7,0x97,0xD7,0xFF},/*"s",83*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0x83,0xB7,0xFF,0xFF},/*"t",84*/
/* (6 X 8 , Terminal )*/
{0xFF,0xC7,0xBF,0xBF,0x87,0xFF},/*"u",85*/
/* (6 X 8 , Terminal )*/
{0xFF,0xE7,0x9F,0x9F,0xE7,0xFF},/*"v",86*/
/* (6 X 8 , Terminal )*/
{0xE7,0x9F,0xC7,0x9F,0xE7,0xFF},/*"w",87*/
/* (6 X 8 , Terminal )*/
{0xFF,0xB7,0xCF,0xCF,0xB7,0xFF},/*"x",88*/
/* (6 X 8 , Terminal )*/
{0xFF,0xE7,0x5F,0x5F,0x87,0xFF},/*"y",89*/
/* (6 X 8 , Terminal )*/
{0xFF,0xB7,0x97,0xA7,0xB7,0xFF},/*"z",90*/
/* (6 X 8 , Terminal )*/
{0xFF,0xF7,0x88,0xBE,0xFF,0xFF},/*"{",91*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFF,0x80,0xFF,0xFF,0xFF},/*"|",92*/
/* (6 X 8 , Terminal )*/
{0xFF,0xBE,0x88,0xF7,0xFF,0xFF},/*"}",93*/
/* (6 X 8 , Terminal )*/
{0xFF,0xFD,0xFE,0xFD,0xFE,0xFF},/*"~",94*/
/* (6 X 8 , Terminal )*/
};
#endif	//#ifdef LCD_NOKIA5110_USE_INVERSION

unsigned char FontsAnscii6X8[][6] ={
	/*
	* " !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
	*	软件:PCtoLCD2002
	*	设置:阴码-列行式-逆向取模-[字宽:12,字高:8]-字体:Terminal
	*/
{0x00,0x00,0x00,0x00,0x00,0x00},/*" ", [0]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x5F,0x00,0x00,0x00},/*"!", [1]*/
/* (6 X 8 , Terminal )*/
{0x00,0x03,0x00,0x03,0x00,0x00},/*""", [2]*/
/* (6 X 8 , Terminal )*/
{0x14,0x7F,0x14,0x7F,0x14,0x00},/*"#", [3]*/
/* (6 X 8 , Terminal )*/
{0x00,0x4C,0x7A,0x4F,0x32,0x00},/*"$", [4]*/
/* (6 X 8 , Terminal )*/
{0x00,0x66,0x16,0x68,0x66,0x00},/*"%", [5]*/
/* (6 X 8 , Terminal )*/
{0x00,0x38,0x4F,0x4D,0x32,0x00},/*"&", [6]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x00,0x03,0x00,0x00},/*"'", [7]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x3E,0x41,0x00,0x00},/*"(", [8]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x41,0x3E,0x00,0x00},/*")", [9]*/
/* (6 X 8 , Terminal )*/
{0x00,0x1C,0x3E,0x1C,0x00,0x00},/*"*", [10]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x3E,0x08,0x00,0x00},/*"+", [11]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x00,0x60,0x00,0x00},/*",", [12]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x08,0x08,0x08,0x00},/*"-", [13]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x40,0x00,0x00,0x00},/*".", [14]*/
/* (6 X 8 , Terminal )*/
{0x00,0x40,0x30,0x0C,0x03,0x00},/*"/", [15]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3E,0x41,0x41,0x3E,0x00},/*"0", [16]*/
/* (6 X 8 , Terminal )*/
{0x00,0x42,0x7F,0x40,0x00,0x00},/*"1", [17]*/
/* (6 X 8 , Terminal )*/
{0x00,0x62,0x51,0x49,0x46,0x00},/*"2", [18]*/
/* (6 X 8 , Terminal )*/
{0x00,0x22,0x49,0x49,0x36,0x00},/*"3", [19]*/
/* (6 X 8 , Terminal )*/
{0x00,0x38,0x26,0x7F,0x20,0x00},/*"4", [20]*/
/* (6 X 8 , Terminal )*/
{0x00,0x4F,0x49,0x49,0x31,0x00},/*"5", [21]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3E,0x49,0x49,0x32,0x00},/*"6", [22]*/
/* (6 X 8 , Terminal )*/
{0x00,0x03,0x71,0x09,0x07,0x00},/*"7", [23]*/
/* (6 X 8 , Terminal )*/
{0x00,0x36,0x49,0x49,0x36,0x00},/*"8", [24]*/
/* (6 X 8 , Terminal )*/
{0x00,0x26,0x49,0x49,0x3E,0x00},/*"9", [25]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x24,0x00,0x00,0x00},/*":", [26]*/
/* (6 X 8 , Terminal )*/
{0x00,0x40,0x24,0x00,0x00,0x00},/*";", [27]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x14,0x22,0x41,0x00},/*"<", [28]*/
/* (6 X 8 , Terminal )*/
{0x00,0x14,0x14,0x14,0x14,0x00},/*"=", [29]*/
/* (6 X 8 , Terminal )*/
{0x00,0x41,0x22,0x14,0x08,0x00},/*">", [30]*/
/* (6 X 8 , Terminal )*/
{0x00,0x02,0x51,0x09,0x06,0x00},/*"?", [31]*/
/* (6 X 8 , Terminal )*/
{0x00,0x0E,0x71,0x49,0x7E,0x00},/*"@", [32]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7E,0x11,0x11,0x7E,0x00},/*"A", [33]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x49,0x49,0x36,0x00},/*"B", [34]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3E,0x41,0x41,0x22,0x00},/*"C", [35]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x41,0x41,0x3E,0x00},/*"D", [36]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x49,0x49,0x41,0x00},/*"E", [37]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x09,0x09,0x01,0x00},/*"F", [38]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3E,0x41,0x49,0x3A,0x00},/*"G", [39]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x08,0x08,0x7F,0x00},/*"H", [40]*/
/* (6 X 8 , Terminal )*/
{0x00,0x41,0x7F,0x41,0x00,0x00},/*"I", [41]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x40,0x40,0x3F,0x00},/*"J", [42]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x08,0x14,0x63,0x00},/*"K", [43]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x40,0x40,0x40,0x00},/*"L", [44]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x06,0x06,0x7F,0x00},/*"M", [45]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x06,0x18,0x7F,0x00},/*"N", [46]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x41,0x41,0x7F,0x00},/*"O", [47]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x09,0x09,0x06,0x00},/*"P", [48]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3E,0x51,0x61,0x7E,0x00},/*"Q", [49]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x19,0x29,0x46,0x00},/*"R", [50]*/
/* (6 X 8 , Terminal )*/
{0x00,0x26,0x49,0x49,0x32,0x00},/*"S", [51]*/
/* (6 X 8 , Terminal )*/
{0x00,0x01,0x7F,0x01,0x01,0x00},/*"T", [52]*/
/* (6 X 8 , Terminal )*/
{0x00,0x3F,0x40,0x40,0x3F,0x00},/*"U", [53]*/
/* (6 X 8 , Terminal )*/
{0x00,0x0F,0x70,0x70,0x0F,0x00},/*"V", [54]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x30,0x30,0x7F,0x00},/*"W", [55]*/
/* (6 X 8 , Terminal )*/
{0x00,0x63,0x1C,0x1C,0x63,0x00},/*"X", [56]*/
/* (6 X 8 , Terminal )*/
{0x03,0x04,0x78,0x04,0x03,0x00},/*"Y", [57]*/
/* (6 X 8 , Terminal )*/
{0x00,0x61,0x59,0x4D,0x43,0x00},/*"Z", [58]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x7F,0x41,0x00,0x00},/*"[", [59]*/
/* (6 X 8 , Terminal )*/
{0x03,0x0C,0x30,0x40,0x00,0x00},/*"\", [60]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x41,0x7F,0x00,0x00},/*"]", [61]*/
/* (6 X 8 , Terminal )*/
{0x00,0x02,0x01,0x02,0x00,0x00},/*"^", [62]*/
/* (6 X 8 , Terminal )*/
{0x00,0x40,0x40,0x40,0x40,0x00},/*"_", [63]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x03,0x00,0x00,0x00},/*"`", [64]*/
/* (6 X 8 , Terminal )*/
{0x00,0x20,0x58,0x58,0x78,0x00},/*"a", [65]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x48,0x48,0x30,0x00},/*"b", [66]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x48,0x48,0x48,0x00},/*"c", [67]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x48,0x48,0x7F,0x00},/*"d", [68]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x58,0x58,0x10,0x00},/*"e", [69]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x7C,0x0A,0x08,0x00},/*"f", [70]*/
/* (6 X 8 , Terminal )*/
{0x00,0x10,0xA8,0xA8,0x78,0x00},/*"g", [71]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x08,0x78,0x00,0x00},/*"h", [72]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x74,0x00,0x00,0x00},/*"i", [73]*/
/* (6 X 8 , Terminal )*/
{0x00,0x80,0x80,0x74,0x00,0x00},/*"j", [74]*/
/* (6 X 8 , Terminal )*/
{0x00,0x7F,0x10,0x28,0x48,0x00},/*"k", [75]*/
/* (6 X 8 , Terminal )*/
{0x00,0x40,0x7F,0x40,0x00,0x00},/*"l", [76]*/
/* (6 X 8 , Terminal )*/
{0x00,0x78,0x08,0x78,0x78,0x00},/*"m", [77]*/
/* (6 X 8 , Terminal )*/
{0x00,0x78,0x08,0x08,0x70,0x00},/*"n", [78]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x48,0x48,0x30,0x00},/*"o", [79]*/
/* (6 X 8 , Terminal )*/
{0x00,0xF8,0x48,0x48,0x30,0x00},/*"p", [80]*/
/* (6 X 8 , Terminal )*/
{0x00,0x30,0x48,0x48,0xF8,0x00},/*"q", [81]*/
/* (6 X 8 , Terminal )*/
{0x00,0x78,0x10,0x08,0x08,0x00},/*"r", [82]*/
/* (6 X 8 , Terminal )*/
{0x00,0x50,0x58,0x68,0x28,0x00},/*"s", [83]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x7C,0x48,0x00,0x00},/*"t", [84]*/
/* (6 X 8 , Terminal )*/
{0x00,0x38,0x40,0x40,0x78,0x00},/*"u", [85]*/
/* (6 X 8 , Terminal )*/
{0x00,0x18,0x60,0x60,0x18,0x00},/*"v", [86]*/
/* (6 X 8 , Terminal )*/
{0x18,0x60,0x38,0x60,0x18,0x00},/*"w", [87]*/
/* (6 X 8 , Terminal )*/
{0x00,0x48,0x30,0x30,0x48,0x00},/*"x", [88]*/
/* (6 X 8 , Terminal )*/
{0x00,0x18,0xA0,0xA0,0x78,0x00},/*"y", [89]*/
/* (6 X 8 , Terminal )*/
{0x00,0x48,0x68,0x58,0x48,0x00},/*"z", [90]*/
/* (6 X 8 , Terminal )*/
{0x00,0x08,0x77,0x41,0x00,0x00},/*"{", [91]*/
/* (6 X 8 , Terminal )*/
{0x00,0x00,0x7F,0x00,0x00,0x00},/*"|", [92]*/
/* (6 X 8 , Terminal )*/
{0x00,0x41,0x77,0x08,0x00,0x00},/*"}", [93]*/
/* (6 X 8 , Terminal )*/
{0x00,0x02,0x01,0x02,0x01,0x00},/*"~", [94]*/
/* (6 X 8 , Terminal )*/

{0x00,0x3e,0x1C,0x08,0x08,0x00},/*"·",[95]*/
};

unsigned char FontsChinese12X12[][24] = {
{0x10,0xDE,0x10,0xFF,0x12,0x92,0xF9,0x0D,0xEB,0x09,0xF9,0x00,0x09,0x08,0x04,0x02,0x01,0x00,0x09,0x04,0x03,0x04,0x09,0x00},/*"频", [0]*/
/* (12 X 12 , Terminal )*/
{0x02,0x8A,0x52,0x9A,0xD6,0xB3,0xD2,0x8A,0x52,0x8A,0x02,0x00,0x02,0x02,0x02,0x02,0x02,0x0F,0x02,0x02,0x02,0x02,0x02,0x00},/*"率", [1]*/
/* (12 X 12 , Terminal )*/
{0x00,0xC0,0x40,0x40,0x40,0x7F,0x48,0x48,0x48,0xC8,0x08,0x00,0x00,0x0F,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0F,0x00,0x00},/*"占", [2]*/
/* (12 X 12 , Terminal )*/
{0x0C,0xA4,0x94,0x8C,0x85,0x86,0x84,0x8C,0x94,0xA4,0x0C,0x00,0x08,0x08,0x08,0x08,0x08,0x0F,0x08,0x08,0x08,0x08,0x08,0x00},/*"空", [3]*/
/* (12 X 12 , Terminal )*/
{0x00,0xFF,0x10,0x10,0x10,0x00,0xFF,0x20,0x10,0x08,0x04,0x00,0x00,0x0F,0x04,0x02,0x01,0x00,0x07,0x08,0x08,0x08,0x0E,0x00},/*"比", [4]*/
/* (12 X 12 , Terminal )*/
};


#endif //_FONTS_H_
