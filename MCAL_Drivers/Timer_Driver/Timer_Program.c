/*
 * Timer_Program.c
 *
 *  Created on: Jul 9, 2018
 *      Author: Islam Ahmed
 */

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "avr/interrupt.h"
#include "avr/delay.h"
#include "DIO_Configurations.h"
#include "DIO_Interfacing.h"
#include "Timer_Configuration.h"
#include "Timer_Interfacing.h"
#include "utilites.h"
#define F_CPU 8000000

/********************************************************************************
***** Global variables                   								    *****
********************************************************************************/
volatile uint8 counter=0;

/********************************************************************************
***** Functions Definitions                								    *****
********************************************************************************/

/* ------------------------------------------------------------------------------
[Function Name] : Timer_voidInit
[Description] : This function is to initialize TIMER0 with 1024 Prescalar
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void Timer_voidInit(void){

	//Enable Global Interrupt
	SET_BIT(SREG,I);

	//Select 1024 Prescalar
	SET_TWO_BITS(TCCR0,CS00,CS02);
	CLR_BIT(TCCR0,CS01);

	//Select Normal mode overflow - non-PWM Mode - OC0 disconnected
	CLR_BIT(TCCR0,COM00);
	CLR_BIT(TCCR0,COM01);

	//Select Normal mode overflow - Waveform Generation Mode
	CLR_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);

	//Select non-PWM mode in Force Output Compare
	SET_BIT(TCCR0,FOC0);

	//Enable Overflow Interrupt
	SET_BIT(TIMSK,TOIE0);
}

/* ------------------------------------------------------------------------------
[Function Name] : Timer Overflow ISR
[Description] : This function is to turn LED on for every second
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
ISR(TIMER0_OVF_vect){

	counter++;
	//Every 32 interrupt happens = 1 second on prescalar 1024
	if(counter==32)
	{
		//LED turns on for 1 second
		DIO_voidWritePIN(DIO_u8PinA0,DIO_u8HIGH);
		_delay_ms(1000);
		counter=0;
	}
}

