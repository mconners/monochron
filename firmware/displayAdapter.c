#include "displayAdapter.h"
#include "ks0108.h"
#include "glcd.h"
#include "util.h"

// glcd

void displaySetDot(u08 x, u08 y)
{
	glcdSetDot(x,y);
}

//! clear a dot on the display (x is horiz 0:127, y is vert 0:63)
void displayClearDot(u08 x, u08 y)
{
	glcdClearDot(x,y);
}

//! draw line
void displayLine(u08 x1, u08 y1, u08 x2, u08 y2)
{
	glcdLine(x1,y1,x2,y2);
}

//! draw rectangle (coords????)
void displayRectangle(u08 x, u08 y, u08 a, u08 b)
{
	glcdRectangle(x,y,a,b);
}

void displayFillRectangle(u08 x, u08 y, u08 a, u08 b, u08 color)
{
	glcdFillRectangle(x,y,a,b,color);
}

//! draw circle of <radius> at <xcenter,ycenter>
void displayCircle(u08 xcenter, u08 ycenter, u08 radius, u08 color)
{
	glcdCircle(xcenter,ycenter,radius,color);
}

//! write a standard ascii charater (values 20-127)
// to the display at current position
void displayWriteChar(unsigned char c, uint8_t inverted)
{
	glcdWriteChar(c,inverted);
}

//! write a special graphic character/icon
// to the display at current position
void displayWriteCharGr(u08 grCharIndex)
{
	glcdWriteCharGr(grCharIndex);
}

// ***** Private Functions ***** (or depricated)
void displayPutStr(char *data, uint8_t inverted)
{
	glcdPutStr(data,inverted);
}

// ks0108

void displayInitHW(void)
{
	glcdInitHW();
}

void displayBusyWait(u08 controller)
{
	glcdBusyWait(controller);
}

void displayControlWrite(u08 controller, u08 data)
{
	glcdControlWrite(controller,data);
}

u08  displayControlRead(u08 controller)
{
	return glcdControlRead(controller);
}

void displayDataWrite(u08 data)
{
	glcdDataWrite(data);
}

u08  displayDataRead(void)
{
	return glcdDataRead();
}

void displaySetXAddress(u08 xAddr)
{
	glcdSetXAddress(xAddr);
}

void displaySetYAddress(u08 yAddr)
{
	glcdSetYAddress(yAddr);
}


//! Initialize the display, clear it, and prepare it for access
void displayInit(void)
{
	glcdInit();
}

//! Clear the display
void displayClearScreen(void)
{
	glcdClearScreen();
}

//! Set display memory access point back to upper,left corner
void displayHome(void)
{
	glcdHome();
}

//! Set display memory access point to row [line] and column [col] assuming 5x7 font
void displayGotoChar(u08 line, u08 col)
{
	glcdGotoChar(line,col);
}

//! Set display memory access point to [x] horizontal pixel and [y] vertical line
void displaySetAddress(u08 x, u08 yLine)
{
	glcdSetAddress(x,yLine);
}

//! Set display memory access point to row [line] and column [col] assuming 5x7 font
void displayStartLine(u08 start)
{
	glcdStartLine(start);
}

//! Generic delay routine for timed display access
void displayDelay(u16 p)
{
	glcdDelay(p);
}