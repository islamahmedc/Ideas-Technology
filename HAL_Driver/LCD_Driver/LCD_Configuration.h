/*
 * LCD_Configuration.h
 *
 *  Created on: Jul 10, 2018
 *      Author: Islam Ahmed
 */

#ifndef LCD_CONFIGURATION_H_
#define LCD_CONFIGURATION_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "Platform_Types.h"

/********************************************************************************
*********************************************************************************
***** Functions ProtoTypes                  							    *****
*********************************************************************************
********************************************************************************/

/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidLcdInit
[Description] : This function is to initialize and start LCD
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidLcdInit(void);

/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidSendCommand
[Description] : This function is to send commands to LCD
[Args] :
[in] : Takes 8-bit command
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidSendCommand(uint8 cpy_u8Command);

/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidWriteData
[Description] : This function is to send Data to LCD to be displayed
[Args] :
[in] : Takes 8-bit data (single character)
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidWriteData(uint8 cpy_u8Data);

/* ------------------------------------------------------------------------------
[Function Name] : LCD_Send_A_String
[Description] :  convert string to series of characters and send it to be displayed
[Args] :
[in] : Takes string max 16 character for 16*2 LCD
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_Send_A_String(uint8 *StringOfCharacters);

/* ------------------------------------------------------------------------------
[Function Name] : LCD_Send_An_Integer
[Description] :  convert integers to series of characters and send it to be displayed
[Args] :
[in] : Takes integers max value = 255
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_Send_An_Integer(uint8 cpy_u8Integer);

#endif /* LCD_CONFIGURATION_H_ */
