/*
 * main.c
 *
 *  Created on: Jul 7, 2018
 *      Author: Islam Ahmed
 */

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "avr/delay.h"
#include "DIO_Configurations.h"
#include "DIO_Interfacing.h"
#include "Timer_Configuration.h"
#include "Timer_Interfacing.h"
#define F_CPU 8000000

/********************************************************************************
***** Main Function               										    *****
********************************************************************************/
void main (void){
	//Timer0 peripherals initialization
	Timer_voidInit();

	//Set PIN A0 to be Output
	DIO_voidSetDirection(DIO_u8PinA0,DIO_u8PinOp);

	while(1){
		//LED turns off all time and turn on only every second by Interrupt
		DIO_voidWritePIN(DIO_u8PinA0,DIO_u8LOW);
	}

}
