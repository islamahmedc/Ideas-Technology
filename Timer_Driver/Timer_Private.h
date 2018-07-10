/*
 * Timer_Private.h
 *
 *  Created on: Jul 9, 2018
 *      Author: Islam Ahmed
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "Platform_Types.h"

/********************************************************************************
***** Memory Mapped Registers definitions                  				    *****
********************************************************************************/

#define SREG   *((volatile uint8 *)0x5F)		//AVR Status Register
#define TCCR0  *((volatile uint8 *)0x53)		//Timer/Counter Control Register
#define TIMSK  *((volatile uint8 *)0x59)		//Timer/Counter Interrupt Mask Register

#endif /* TIMER_PRIVATE_H_ */
