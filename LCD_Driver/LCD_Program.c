/*
 * LCD_Program.c
 *
 *  Created on: Jul 10, 2018
 *      Author: Islam Ahmed
 */

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include <stdlib.h>
#include "avr/delay.h"
#include "DIO_Configurations.h"
#include "DIO_Interfacing.h"
#include "LCD_Configuration.h"
#include "LCD_Interfacing.h"
#include "utilites.h"
#define F_CPU 8000000

/********************************************************************************
***** Functions Definitions                								    *****
********************************************************************************/
/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidLcdInit
[Description] : This function is to initialize and start LCD according to datasheet
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidLcdInit(void){

	//Set all of PORTA and PORTC PINs to be output
	DDRC=0xFF;
	DDRA=0xFF;
	_delay_ms(50);

	// 8-bit initialization 2 lines
	LCD_voidSendCommand(0b00111000);
	_delay_us(50);

	// Display on - Cursor on - blinking off
	LCD_voidSendCommand(0x0E);
	_delay_us(50);

	// Display clear
	LCD_voidSendCommand(0x01);
	_delay_ms(5);

	// Entry Mode Set
	LCD_voidSendCommand(0b00000110);
	_delay_ms(1);

}

/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidSendCommand
[Description] : This function is to send commands to LCD
[Args] :
[in] : Takes 8-bit command
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidSendCommand(uint8 cpy_u8Command){

	//Disable
	CLR_BIT(PORTA,LCD_EN);

	//Send commands
	PORTC=cpy_u8Command;

	// RS = 0 --> instruction register
	CLR_BIT(PORTA,LCD_RS);

	// RW = 0 --> write
	CLR_BIT(PORTA,LCD_RW);

	//Enable pulse
	SET_BIT(PORTA,LCD_EN);      // Enable
	_delay_us(1);
	CLR_BIT(PORTA,LCD_EN);   	// disable
	_delay_us(1);

}

/* ------------------------------------------------------------------------------
[Function Name] : LCD_voidWriteData
[Description] : This function is to send Data to LCD to be displayed
[Args] :
[in] : Takes 8-bit data (single character)
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_voidWriteData(uint8 cpy_u8Data){

	//Disable
	CLR_BIT(PORTA,LCD_EN);

	//Send Data
	PORTC=cpy_u8Data;

	// RS = 1 --> data register
	SET_BIT(PORTA,LCD_RS);

	// RW = 0 --> write
	CLR_BIT(PORTA,LCD_RW);

	//Enable pulse
	SET_BIT(PORTA,LCD_EN);      // Enable
	_delay_us(1);
	CLR_BIT(PORTA,LCD_EN);   	// disable
	_delay_us(1);

}

/* ------------------------------------------------------------------------------
[Function Name] : LCD_Send_A_String
[Description] :  convert string to series of characters and send it to be displayed
[Args] :
[in] : Takes string max 16 character for 16*2 LCD
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_Send_A_String(char *StringOfCharacters){

	//convert string to series of characters and send it to be displayed
	while(*StringOfCharacters > 0)
	{
		LCD_voidWriteData(*StringOfCharacters++);
	}
}

/* ------------------------------------------------------------------------------
[Function Name] : LCD_Send_An_Integer
[Description] :  convert integers to series of characters and send it to be displayed
[Args] :
[in] : Takes integers max value = 255
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void LCD_Send_An_Integer(uint8 cpy_u8Integer){

	uint8 Buffer[4];
	//convert integers to series of characters and send it to be displayed
	itoa(cpy_u8Integer,Buffer,10);
	LCD_Send_A_String(Buffer);
}
