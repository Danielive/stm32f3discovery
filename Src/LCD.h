/*********************************************************************************************************
*
* File                : LCD.h
* Hardware Environment: 
* Build Environment   : RealView MDK-ARM  Version: 4.20
* Version             : V1.0
* By                  : 
*
*                                  (c) Copyright 2005-2011, WaveShare
*                                       http://www.waveshare.net
*                                          All Rights Reserved
*
*********************************************************************************************************/

#ifndef __GLCD_H 
#define __GLCD_H

/* Includes ------------------------------------------------------------------*/
#include <math.h>
//#include "stm32f30x.h"
#include "stm32f3xx_hal.h"

/* Private define ------------------------------------------------------------*/
#define USE_16BIT_PMP

/*********************************************************************
* Overview: Horizontal and vertical display resolution
*                  (from the glass datasheet).
*********************************************************************/
//#define DISP_HOR_RESOLUTION				320
//#define DISP_VER_RESOLUTION				240

#define DISP_ORIENTATION					0
//#define DISP_ORIENTATION					90
//#define DISP_ORIENTATION					180
//#define DISP_ORIENTATION					270

/* Private define ------------------------------------------------------------*/

#if  ( DISP_ORIENTATION == 90 ) || ( DISP_ORIENTATION == 270 )

#define  MAX_X  320
#define  MAX_Y  240   

#elif  ( DISP_ORIENTATION == 0 ) || ( DISP_ORIENTATION == 180 )

#define  MAX_X  240
#define  MAX_Y  320   

#endif

/*********************************************************************
* Overview: Horizontal synchronization timing in pixels
*                  (from the glass datasheet).
*********************************************************************/
//#define DISP_HOR_PULSE_WIDTH		20    /* 20 */
//#define DISP_HOR_BACK_PORCH			51	  /* 48	*/
//#define DISP_HOR_FRONT_PORCH		20	  /* 20 */

/*********************************************************************
* Overview: Vertical synchronization timing in lines
*                  (from the glass datasheet).
*********************************************************************/
//#define DISP_VER_PULSE_WIDTH		2	  /* 2 */
//#define DISP_VER_BACK_PORCH			12	  /* 16 */
//#define DISP_VER_FRONT_PORCH		4	  /* 4 */

 	/* PC.1(WR), PC.2(RD) , PC.6(CS), PC.7(RS)*/
		/* PA.3(BL_PWM), PC.0(RST)*/

#define Set_Cs        GPIOB->BSRR = GPIO_PIN_8
#define Clr_Cs        GPIOB->BRR = GPIO_PIN_8

#define Set_Rs        GPIOB->BSRR = GPIO_PIN_9
#define Clr_Rs        GPIOB->BRR = GPIO_PIN_9

#define Set_nWr       GPIOB->BSRR = GPIO_PIN_10
#define Clr_nWr       GPIOB->BRR = GPIO_PIN_10

#define Set_nRd       GPIOB->BSRR = GPIO_PIN_11
#define Clr_nRd       GPIOB->BRR = GPIO_PIN_11

/* LCD color */
#define White          0xFFFF
#define Black          0x0000
#define Grey           0xF7DE
#define Blue           0x001F
#define Blue2          0x051F
#define Red            0xF800
#define Magenta        0xF81F
#define Green          0x07E0
#define Cyan           0x7FFF
#define Yellow         0xFFE0

#define RGB565CONVERT(red, green, blue) (int) (((red >> 3) << 11) | ((green >> 2) << 5) | (blue >> 3))

/* Private function prototypes -----------------------------------------------*/
void LCD_Initializtion(void);
void LCD_Clear(uint16_t Color);	
void LCD_SetPoint(uint16_t Xpos,uint16_t Ypos,uint16_t point);
void PutChar( uint16_t Xpos, uint16_t Ypos, char ASCI, uint16_t charColor, uint16_t bkColor );
void GUI_Text(uint16_t Xpos, uint16_t Ypos, char str[], uint16_t Color, uint16_t bkColor);
char *alphabet(char* str);
int convert(char* str);

void LCD_WriteIndex(uint16_t index);
void LCD_WriteData(uint16_t data);
uint16_t LCD_ReadData(void);
uint16_t LCD_ReadReg(uint16_t LCD_Reg);
void LCD_WriteReg(uint16_t LCD_Reg,uint16_t LCD_RegValue);
static void LCD_SetCursor( uint16_t Xpos, uint16_t Ypos );
void delay_ms(uint16_t ms);

#endif 

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

