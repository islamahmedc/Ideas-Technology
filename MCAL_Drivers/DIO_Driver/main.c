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
#define F_CPU 8000000

/********************************************************************************
***** Main Function               										    *****
********************************************************************************/
void main (void){
	//Set direction of PIN A1 to be output
	DIO_voidSetDirection(DIO_u8PinA1,DIO_u8PinOp);

	while(1){
		//make PINA1 High (5v) for 1 sec
		DIO_voidWritePIN(DIO_u8PinA1,DIO_u8HIGH);
		_delay_ms(1000);

		//make PINA1 Low (0v) for 1 sec
		DIO_voidWritePIN(DIO_u8PinA1,DIO_u8LOW);
		_delay_ms(1000);
	}
}
