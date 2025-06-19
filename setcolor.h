#ifndef _SETCOLOR_H
#define _SETCOLOR_H

#include <stdio.h>
#include <string.h>

// planes

short fg = 30;
short bg = 40;

// variations

short bright = 60;
short normal = 0;

// colors

/*
 * theses colors may not display as named, although uncommon.
 * these are only the standard/general names
 */

short black = 0;
short red = 1;
short green = 2;
short yellow = 3;
short blue = 4;
short magenta = 5;
short cyan = 6;
short white = 7;

/*
 * this function takes in arguments as shown below
 * setcolor(<plane>, <variaton>, <color>);
 * plane can be fg or bg
 * variation can be bright or normal
 * color can be anthing in the "colors" section
 */

void setcolor(short plane, short variation, short color) {
	/*
	* checking if the arguments are correct or not
	* WILL be implemented in later releases
	*/

	printf("\033[%dm", (plane+variation+color));
}

void resetcolors() { printf("\033[0m"); }

// thank me later ;)

#define setcolour setcolor
#define resetcolours resetcolors

#endif // setcolor.h
