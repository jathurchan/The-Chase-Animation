/*
   DRAW.c
   VERSION of 08/03/2021
*/

#include "DRAW.h"
#include "stm32f746_Discovery_conf.h"
//#include "stm32f7xx_hal.h"

/* to use this initialization the following files must be included:
"LAB_746_DISC.h"
GLCD libraries => have a look in :
Developer’s guide for STM32F746 Discovery Kit 
*/
void DRAW_Init(){
	// LAB_Init is in declared in "LAB_746_DISC.h"
	LAB_Init();
	GLCD_Initialize();
	GLCD_SetBackgroundColor(GLCD_COLOR_WHITE);
	GLCD_SetForegroundColor(GLCD_COLOR_BLACK);
	GLCD_ClearScreen();
}

// to draw a rectangle
void DRAW_FilledRectangle(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1) {
	for (; y0 <= y1; y0++) {
		GLCD_DrawHLine(x0,y0,x1-x0);
	}
}
/*
To draw a LED: Green or black rectangle at a given location
n is the location from 0 to 9
val : the color of the LED
      only the LSB is taken into account
      LSB(val) = 0 =>OFF => BLACK
      LSB(val) = 1 =>ON  => GREEN
*/
void DRAW_Disp1LED(int n, int val){
	int xo,yo,delta,color;
	
	if((val&1)==0)
		color=GLCD_COLOR_BLACK;
	else
		color=GLCD_COLOR_GREEN;
	
	if(n>9)
			return;
	
	delta=480/10;
	xo=n*delta;
	yo=0;
	GLCD_SetForegroundColor(color);
	DRAW_FilledRectangle(xo, yo, xo+delta, yo+100);
}







