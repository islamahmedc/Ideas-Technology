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
#include "ADC_Configuration.h"
#include "ADC_Interfacing.h"
#define F_CPU 8000000

/********************************************************************************
***** Main Function               										    *****
********************************************************************************/
void main (void){
	//ADC peripherals initialization
	ADC_voidInit();

	//Set all of PortB pins to be output
	DDRB=0xff;

	while(1){
		//the Result is shown on portB LEDs for 1 second
		PORTB=ADC_u8StartAndGet();
		_delay_ms(1000);
	}

}
