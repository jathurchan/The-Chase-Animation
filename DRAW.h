/*
   DRAW.h
   VERSION DU 08/03/2021

*/
#include "Board_GLCD.h"
#include "stm32f7xx_hal.h"

#define SCREEN_COLOR_WHITE			0xFFFF
#define SCREEN_COLOR_BLACK			0x0000
#define SCREEN_COLOR_RED			0xF800
#define SCREEN_COLOR_GREEN			0x07E0
#define SCREEN_COLOR_GREEN2		0xB723
#define SCREEN_COLOR_BLUE			0x001F
#define SCREEN_COLOR_BLUE2			0x051D
#define SCREEN_COLOR_YELLOW		0xFFE0
#define SCREEN_COLOR_ORANGE		0xFBE4
#define SCREEN_COLOR_CYAN			0x07FF
#define SCREEN_COLOR_MAGENTA		0xA254
#define SCREEN_COLOR_GRAY			0x7BEF //1111 0111 1101 1110
#define SCREEN_COLOR_BROWN			0xBBCA

void DRAW_Init(void);
void DRAW_FilledRectangle(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1) ;
void DRAW_Disp1LED(int n, int val);

