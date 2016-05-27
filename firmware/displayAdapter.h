#ifndef DISPLAYADAPTER_H
#define DISPLAYADAPTER_H

#include "global.h"
#include "util.h"


#define ON			1
#define OFF			0

#define INVERTED 1
#define NORMAL 0

// LCD geometry defines (change these definitions to adapt code/settings)
#define DISPLAY_XPIXELS			128		// pixel width of entire display
#define DISPLAY_YPIXELS			64		// pixel height of entire display

// from glcd

void displaySetDot(u08 x, u08 y);

//! clear a dot on the display (x is horiz 0:127, y is vert 0:63)
void displayClearDot(u08 x, u08 y);

//! draw line
void displayLine(u08 x1, u08 y1, u08 x2, u08 y2);

//! draw rectangle (coords????)
void displayRectangle(u08 x, u08 y, u08 a, u08 b);

void displayFillRectangle(u08 x, u08 y, u08 a, u08 b, u08 color);

//! draw circle of <radius> at <xcenter,ycenter>
void displayCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color);

//! write a standard ascii charater (values 20-127)
// to the display at current position
void displayWriteChar(unsigned char c, uint8_t inverted);

//! write a special graphic character/icon
// to the display at current position
void displayWriteCharGr(u08 grCharIndex);

// ***** Private Functions ***** (or depricated)
void displayPutStr(char *data, uint8_t inverted);

// from ks0108

// function prototypes
void displayInitHW(void);
void displayBusyWait(u08 controller);
void displayControlWrite(u08 controller, u08 data);
u08  displayControlRead(u08 controller);
void displayDataWrite(u08 data);
u08  displayDataRead(void);
void displaySetXAddress(u08 xAddr);
void displaySetYAddress(u08 yAddr);


//! Initialize the display, clear it, and prepare it for access
void displayInit(void);
//! Clear the display
void displayClearScreen(void);
//! Set display memory access point back to upper,left corner
void displayHome(void);
//! Set display memory access point to row [line] and column [col] assuming 5x7 font
void displayGotoChar(u08 line, u08 col);
//! Set display memory access point to [x] horizontal pixel and [y] vertical line
void displaySetAddress(u08 x, u08 yLine);
//! Set display memory access point to row [line] and column [col] assuming 5x7 font
void displayStartLine(u08 start);
//! Generic delay routine for timed display access
void displayDelay(u16 p);

#endif