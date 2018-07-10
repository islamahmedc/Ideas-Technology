/*
 * ADC_Private.h
 *
 *  Created on: Jul 7, 2018
 *      Author: Islam Ahmed
 */

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "Platform_Types.h"

/********************************************************************************
***** Memory Mapped Registers definitions                  				    *****
********************************************************************************/
#define ADMUX  *((volatile uint8*) 0x27) 		// ADC Multiplexer Selection Register
#define ADCSRA *((volatile uint8*) 0x26) 		// ADC Control and Status Register A
#define SFIOR  *((volatile uint8*) 0x50)		// Special FunctionIO Register
#define ADCL   *((volatile uint8*) 0x24) 		// ADC Data Register Low Byte
#define ADCH   *((volatile uint8*) 0x25) 		// ADC Data Register High Byte

#endif /* ADC_PRIVATE_H_ */
