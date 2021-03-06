/*
 * ADC_Interfacing.h
 *
 *  Created on: Jul 8, 2018
 *      Author: Islam Ahmed
 */

#ifndef ADC_INTERFACING_H_
#define ADC_INTERFACING_H_

/********************************************************************************
***** Registers Pins definitions                 				            *****
********************************************************************************/
//ADMUX PINs
#define MUX0  0
#define MUX1  1
#define MUX2  2
#define MUX3  3
#define MUX4  4
#define ADLAR 5
#define REFS0 6
#define REFS1 7

//ADCSRA PINs
#define ADPS0 0
#define ADPS1 1
#define ADPS2 2
#define ADIE  3
#define ADIF  4
#define ADATE 5
#define ADSC  6
#define ADEN  7

//SFIOR PINs
#define ADTS0 5
#define ADTS1 6
#define ADTS2 7

#endif /* ADC_INTERFACING_H_ */
