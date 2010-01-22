/*
 * File      : arial16font.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006 - 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2010-01-21     Bernard      first version
 */
#include <rtgui/font.h>

#ifdef RTGUI_USING_FONT16
const unsigned char arial16_font[]=
{
    /*---char:   ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: ! ---*/
    0x00,0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,
    /*---char: " ---*/
    0x00,0x00,0x00,0x48,0x48,0x48,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: # ---*/
    0x00,0x00,0x00,0x11,0x11,0x11,0x22,0xff,0x22,0x22,0x22,0xff,0x44,0x44,0x44,0x00,
    /*---char: $ ---*/
    0x00,0x00,0x08,0x1e,0x29,0x49,0x48,0x48,0x38,0x0e,0x09,0x09,0x49,0x2a,0x1c,0x08,
    /*---char: % ---*/
    0x00,0x00,0x00,0x38,0x44,0x44,0x45,0x45,0x39,0x02,0x02,0x04,0x04,0x08,0x08,0x00,
    /*---char: & ---*/
    0x00,0x00,0x00,0x1c,0x22,0x22,0x22,0x14,0x18,0x28,0x44,0x42,0x41,0x22,0x1c,0x00,
    /*---char: ' ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: ( ---*/
    0x00,0x00,0x00,0x10,0x20,0x20,0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x20,0x20,
    /*---char: ) ---*/
    0x00,0x00,0x00,0x40,0x20,0x20,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x20,
    /*---char: * ---*/
    0x00,0x00,0x00,0x20,0xf8,0x20,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: + ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x7f,0x08,0x08,0x08,0x00,0x00,0x00,
    /*---char: , ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,
    /*---char: - ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0x00,0x00,0x00,
    /*---char: . ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,
    /*---char: / ---*/
    0x00,0x00,0x00,0x10,0x10,0x20,0x20,0x20,0x20,0x40,0x40,0x40,0x40,0x80,0x80,0x00,
    /*---char: 0 ---*/
    0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x22,0x1c,0x00,
    /*---char: 1 ---*/
    0x00,0x00,0x00,0x04,0x0c,0x14,0x24,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,
    /*---char: 2 ---*/
    0x00,0x00,0x00,0x1e,0x22,0x41,0x01,0x01,0x02,0x02,0x04,0x08,0x10,0x20,0x7f,0x00,
    /*---char: 3 ---*/
    0x00,0x00,0x00,0x1c,0x22,0x42,0x02,0x06,0x1c,0x02,0x01,0x01,0x41,0x62,0x1c,0x00,
    /*---char: 4 ---*/
    0x00,0x00,0x00,0x02,0x06,0x0a,0x12,0x12,0x22,0x42,0x82,0xff,0x02,0x02,0x02,0x00,
    /*---char: 5 ---*/
    0x00,0x00,0x00,0x3f,0x20,0x20,0x40,0x7c,0x42,0x01,0x01,0x01,0x41,0x22,0x1c,0x00,
    /*---char: 6 ---*/
    0x00,0x00,0x00,0x1c,0x22,0x41,0x40,0x5c,0x62,0x41,0x41,0x41,0x41,0x22,0x1c,0x00,
    /*---char: 7 ---*/
    0x00,0x00,0x00,0x7f,0x02,0x02,0x04,0x04,0x08,0x08,0x08,0x08,0x10,0x10,0x10,0x00,
    /*---char: 8 ---*/
    0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x22,0x1c,0x22,0x41,0x41,0x41,0x22,0x1c,0x00,
    /*---char: 9 ---*/
    0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x41,0x41,0x23,0x1d,0x01,0x41,0x22,0x1c,0x00,
    /*---char: : ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,
    /*---char: ; ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,
    /*---char: < ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0e,0x30,0x40,0x30,0x0e,0x01,0x00,0x00,0x00,
    /*---char: = ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x00,0x00,0x00,0x7f,0x00,0x00,0x00,0x00,
    /*---char: > ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x38,0x06,0x01,0x06,0x38,0x40,0x00,0x00,0x00,
    /*---char: ? ---*/
    0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x01,0x02,0x04,0x08,0x08,0x08,0x00,0x08,0x00,
    /*---char: @ ---*/
    0x00,0x00,0x00,0x03,0x0c,0x10,0x21,0x22,0x44,0x48,0x48,0x48,0x48,0x44,0x23,0x10,
    /*---char: A ---*/
    0x00,0x00,0x00,0x04,0x0a,0x0a,0x0a,0x11,0x11,0x11,0x3f,0x20,0x20,0x40,0x40,0x00,
    /*---char: B ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0x7f,0x00,
    /*---char: C ---*/
    0x00,0x00,0x00,0x0f,0x10,0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x20,0x10,0x0f,0x00,
    /*---char: D ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7f,0x00,
    /*---char: E ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0x7f,0x00,
    /*---char: F ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: G ---*/
    0x00,0x00,0x00,0x0f,0x10,0x20,0x40,0x40,0x40,0x43,0x40,0x40,0x20,0x10,0x0f,0x00,
    /*---char: H ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: I ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: J ---*/
    0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x42,0x42,0x42,0x3c,0x00,
    /*---char: K ---*/
    0x00,0x00,0x00,0x40,0x40,0x41,0x42,0x44,0x4c,0x54,0x62,0x41,0x41,0x40,0x40,0x00,
    /*---char: L ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7f,0x00,
    /*---char: M ---*/
    0x00,0x00,0x00,0x40,0x60,0x60,0x50,0x50,0x48,0x48,0x45,0x45,0x45,0x42,0x42,0x00,
    /*---char: N ---*/
    0x00,0x00,0x00,0x40,0x60,0x50,0x50,0x48,0x44,0x44,0x42,0x41,0x41,0x40,0x40,0x00,
    /*---char: O ---*/
    0x00,0x00,0x00,0x0f,0x10,0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x20,0x10,0x0f,0x00,
    /*---char: P ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: Q ---*/
    0x00,0x00,0x00,0x0f,0x10,0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x23,0x10,0x0f,0x00,
    /*---char: R ---*/
    0x00,0x00,0x00,0x7f,0x40,0x40,0x40,0x40,0x40,0x7f,0x42,0x41,0x41,0x40,0x40,0x00,
    /*---char: S ---*/
    0x00,0x00,0x00,0x1f,0x20,0x40,0x40,0x20,0x1c,0x03,0x00,0x00,0x40,0x20,0x1f,0x00,
    /*---char: T ---*/
    0x00,0x00,0x00,0xff,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,
    /*---char: U ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x20,0x1f,0x00,
    /*---char: V ---*/
    0x00,0x00,0x00,0x40,0x40,0x20,0x20,0x20,0x11,0x11,0x11,0x0a,0x0a,0x04,0x04,0x00,
    /*---char: W ---*/
    0x00,0x00,0x00,0x81,0x82,0x42,0x42,0x44,0x44,0x24,0x28,0x28,0x28,0x10,0x10,0x00,
    /*---char: X ---*/
    0x00,0x00,0x00,0x40,0x20,0x11,0x11,0x0a,0x04,0x0a,0x11,0x11,0x20,0x40,0x80,0x00,
    /*---char: Y ---*/
    0x00,0x00,0x00,0x80,0x41,0x41,0x22,0x14,0x14,0x08,0x08,0x08,0x08,0x08,0x08,0x00,
    /*---char: Z ---*/
    0x00,0x00,0x00,0x7f,0x01,0x02,0x02,0x04,0x08,0x08,0x10,0x20,0x20,0x40,0xff,0x00,
    /*---char: [ ---*/
    0x00,0x00,0x00,0x70,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
    /*---char: \ ---*/
    0x00,0x00,0x00,0x80,0x80,0x40,0x40,0x40,0x40,0x20,0x20,0x20,0x20,0x10,0x10,0x00,
    /*---char: ] ---*/
    0x00,0x00,0x00,0xe0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    /*---char: ^ ---*/
    0x00,0x00,0x00,0x10,0x28,0x28,0x44,0x44,0x82,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: _ ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: ` ---*/
    0x00,0x00,0x00,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /*---char: a ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x21,0x41,0x07,0x39,0x41,0x41,0x43,0x3d,0x00,
    /*---char: b ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x5c,0x62,0x41,0x41,0x41,0x41,0x41,0x62,0x5c,0x00,
    /*---char: c ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x22,0x40,0x40,0x40,0x40,0x40,0x22,0x1c,0x00,
    /*---char: d ---*/
    0x00,0x00,0x00,0x01,0x01,0x01,0x1d,0x23,0x41,0x41,0x41,0x41,0x41,0x23,0x1d,0x00,
    /*---char: e ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x7f,0x40,0x41,0x22,0x1c,0x00,
    /*---char: f ---*/
    0x00,0x00,0x00,0x30,0x40,0x40,0xf0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: g ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1d,0x23,0x41,0x41,0x41,0x41,0x41,0x23,0x1d,0x01,
    /*---char: h ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x5c,0x62,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x00,
    /*---char: i ---*/
    0x00,0x00,0x00,0x40,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: j ---*/
    0x00,0x00,0x00,0x40,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
    /*---char: k ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x41,0x42,0x44,0x48,0x58,0x64,0x44,0x42,0x41,0x00,
    /*---char: l ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: m ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x63,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x00,
    /*---char: n ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x62,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x00,
    /*---char: o ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x22,0x41,0x41,0x41,0x41,0x41,0x22,0x1c,0x00,
    /*---char: p ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x62,0x41,0x41,0x41,0x41,0x41,0x62,0x5c,0x40,
    /*---char: q ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x1d,0x23,0x41,0x41,0x41,0x41,0x41,0x23,0x1d,0x01,
    /*---char: r ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x60,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,
    /*---char: s ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x40,0x40,0x3c,0x02,0x02,0x42,0x3c,0x00,
    /*---char: t ---*/
    0x00,0x00,0x00,0x00,0x40,0x40,0xf0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x70,0x00,
    /*---char: u ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x46,0x3a,0x00,
    /*---char: v ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x00,
    /*---char: w ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x84,0x4a,0x4a,0x51,0x51,0x51,0x20,0x20,0x00,
    /*---char: x ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x44,0x28,0x28,0x10,0x28,0x28,0x44,0x82,0x00,
    /*---char: y ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x82,0x84,0x44,0x44,0x28,0x28,0x28,0x10,0x10,
    /*---char: z ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x04,0x08,0x08,0x10,0x20,0x20,0x40,0xfe,0x00,
    /*---char: { ---*/
    0x00,0x00,0x00,0x18,0x20,0x20,0x20,0x20,0x20,0x20,0xc0,0x20,0x20,0x20,0x20,0x20,
    /*---char: | ---*/
    0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
    /*---char: } ---*/
    0x00,0x00,0x00,0xc0,0x20,0x20,0x20,0x20,0x20,0x20,0x18,0x20,0x20,0x20,0x20,0x20,
    /*---char: ~ ---*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x71,0x8e,0x00,0x00,0x00,0x00,0x00,0x00
};

struct rtgui_font_bitmap arial16 =
{
	(const rt_uint8_t*)arial16_font, 		/* bmp */
	8, 					/* width */
	16, 				/* height */
	32,					/* first char */
	127					/* last char */
};

struct rtgui_font rtgui_font_arial16 =
{
	"arial", 			/* family */
	16, 				/* height */
	1, 					/* refer count */
	&bmp_font_engine, 	/* font engine */
	&arial16,			/* font private data */
};
#endif