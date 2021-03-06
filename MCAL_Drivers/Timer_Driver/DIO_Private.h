/*
 * DIO.h
 *
 *  Created on: Jul 7, 2018
 *      Author: Islam Ahmed
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "Platform_Types.h"

/********************************************************************************
***** Memory Mapped Registers definitions                  				    *****
********************************************************************************/

#define DDRA  *((volatile uint8 *)0x3A)				//PORTA Data Direction Register
#define PINA  *((volatile uint8 *)0x39)				//PORTA Input Pins Address
#define PORTA *((volatile uint8 *)0x3B)				//PORTA Data Register

#define DDRB  *((volatile uint8 *)0x37)				//PORTB Data Direction Register
#define PINB  *((volatile uint8 *)0x36)				//PORTB Input Pins Address
#define PORTB *((volatile uint8 *)0x38)				//PORTB Data Register

#define DDRC  *((volatile uint8 *)0x34)				//PORTC Data Direction Register
#define PINC  *((volatile uint8 *)0x33)				//PORTC Input Pins Address
#define PORTC *((volatile uint8 *)0x35)				//PORTC Data Register

#define DDRD  *((volatile uint8 *)0x31)				//PORTD Data Direction Register
#define PIND  *((volatile uint8 *)0x30)				//PORTD Input Pins Address
#define PORTD *((volatile uint8 *)0x32)				//PORTD Data Register

#endif /* DIO_PRIVATE_H_ */
