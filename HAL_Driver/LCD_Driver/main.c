/*
 * main.c
 *
 *  Created on: Jul 7, 2018
 *      Author: hp
 */

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "avr/delay.h"
#include "DIO_Configurations.h"
#include "DIO_Interfacing.h"
#include "LCD_Configuration.h"
#include "LCD_Interfacing.h"
#define F_CPU 8000000

/********************************************************************************
***** Main Function               										    *****
********************************************************************************/
void main (void){

	//LCD Initialization
	LCD_voidLcdInit();
	_delay_ms(1000);

	//Send String
	LCD_Send_A_String("IdeasTech");
	_delay_ms(1000);

	//Send Integer
	LCD_Send_An_Integer(101);
	_delay_ms(1000);
}
