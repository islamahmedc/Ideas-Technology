/*
 * Timer_Interfacing.h
 *
 *  Created on: Jul 9, 2018
 *      Author: Islam Ahmed
 */

#ifndef TIMER_INTERFACING_H_
#define TIMER_INTERFACING_H_

/********************************************************************************
***** Registers Pins definitions                 				            *****
********************************************************************************/

//SREG PINs
#define C	0 				//Carry Flag
#define Z	1				//Zero Flag
#define N 	2				//Negative Flag
#define V	3				//Two’s Complement Overflow Flag
#define S	4				//Sign Bit
#define H	5				//Half Carry Flag
#define T	6				//Bit Copy Storage
#define I	7				//Global Interrupt Enable

//TCCR0 PINs
#define CS00  0				//Clock Select
#define CS01  1				//Clock Select
#define CS02  2				//Clock Select
#define WGM01 3				//Waveform Generation Mode
#define COM00 4				//Compare Match Output Mode
#define COM01 5				//Compare Match Output Mode
#define WGM00 6				//Waveform Generation Mode
#define FOC0  7				//Waveform Generation Mode

//TIMSK PINs
#define TOIE0 0				//Timer/Counter0 Overflow Interrupt Enable
#define OCIE0 1				//Timer/Counter0 Output Compare Match Interrupt Enable


#endif /* TIMER_INTERFACING_H_ */
