/*
 *  pslash - a lightweight framebuffer splashscreen for embedded devices.
 *
 *  Copyright (c) 2012 sleep(5) ltd
 *  Author: Tomas Frydrych <tomas@sleepfive.com>
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *
 */

#ifndef _HAVE_PSPLASH_COLORS_H
#define _HAVE_PSPLASH_COLORS_H

/* This is the overall background color */
//#define PSPLASH_BACKGROUND_COLOR 0xec,0xec,0xe1
#define PSPLASH_BACKGROUND_COLOR 0x0,0x0,0x0

/* This is the color of any text output */
//#define PSPLASH_TEXT_COLOR 0x6d,0x6d,0x70
#define PSPLASH_TEXT_COLOR 0xff,0x6e,0x33

/* This is the color of the progress bar indicator */
//#define PSPLASH_BAR_COLOR 0x6d,0x6d,0x70
#define PSPLASH_BAR_COLOR 0xff,0x6e,0x33

/* This is the color of the progress bar background */
//#define PSPLASH_BAR_BACKGROUND_COLOR 0xec,0xec,0xe1
#define PSPLASH_BAR_BACKGROUND_COLOR 0x0,0x0,0x0

#endif
