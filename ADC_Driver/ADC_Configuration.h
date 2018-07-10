/*
 * ADC_Configuration.h
 *
 *  Created on: Jul 8, 2018
 *      Author: Islam Ahmed
 */

#ifndef ADC_CONFIGURATION_H_
#define ADC_CONFIGURATION_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "ADC_Private.h"

/********************************************************************************
*********************************************************************************
***** Functions ProtoTypes                  							    *****
*********************************************************************************
********************************************************************************/

/* ------------------------------------------------------------------------------
[Function Name] : ADC_voidInit
[Description] : This function is to initialize ADC Registers
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void ADC_voidInit(void);

/* ------------------------------------------------------------------------------
[Function Name] : ADC_u8StartAndGet
[Description] : This function is to start ADC conversion and get results.
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : This function Returns the Result of ADC conversion
------------------------------------------------------------------------------ */
uint8 ADC_u8StartAndGet(void);

#endif /* ADC_CONFIGURATION_H_ */
