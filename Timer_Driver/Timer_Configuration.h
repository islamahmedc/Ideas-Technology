/*
 * Timer_Configuration.h
 *
 *  Created on: Jul 9, 2018
 *      Author: Islam Ahmed
 */

#ifndef TIMER_CONFIGURATION_H_
#define TIMER_CONFIGURATION_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "Timer_Private.h"
#include "avr/interrupt.h"

/********************************************************************************
*********************************************************************************
***** Functions ProtoTypes                  							    *****
*********************************************************************************
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
void Timer_voidInit(void);

/* ------------------------------------------------------------------------------
[Function Name] : Timer Overflow ISR
[Description] : This function is to turn LED on for every second
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
ISR(TIMER0_OVF_vect);

#endif /* TIMER_CONFIGURATION_H_ */
