/*
 * ADC_Program.c
 *
 *  Created on: Jul 8, 2018
 *      Author: Islam Ahmed
 */

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "ADC_Private.h"
#include "ADC_Configuration.h"
#include "ADC_Interfacing.h"
#include "utilites.h"

/********************************************************************************
***** Functions Definitions                								    *****
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
void ADC_voidInit(void){

	//Select ADC0 Channel
	CLR_LOW_NIBLE(ADMUX);
	CLR_BIT(ADMUX,MUX4);

	//select Left adjust
	SET_BIT(ADMUX,ADLAR);

	//select Internal 2.56V Voltage Reference
	SET_TWO_BITS(ADMUX,REFS1,REFS0);

	//select Division Factor (XTL/128)}
	SET_THREE_BITS(ADCSRA,ADPS2,ADPS1,ADPS0);

	//ADC Interrupt Disable (Polling Mode)
	CLR_BIT(ADCSRA,ADIE);

	//ADC Interrupt Flag Cleared
	SET_BIT(ADCSRA,ADIF);

	//ADC Auto Trigger Disable
	CLR_BIT(ADCSRA,ADATE);

	//Stop Conversion
	CLR_BIT(ADCSRA,ADSC);

	//ADC Enable
	SET_BIT(ADCSRA,ADEN);

}

/* ------------------------------------------------------------------------------
[Function Name] : ADC_u8StartAndGet
[Description] : This function is to start ADC conversion and get results.
[Args] :
[in] : N/A
[out] : N/A
[in/out] : N/A
[Returns] : This function Returns the Result of ADC conversion
------------------------------------------------------------------------------ */
uint8 ADC_u8StartAndGet(void){

	//Start Conversion
	SET_BIT(ADCSRA,ADSC);

	//Polling mode
	while( (GET_BIT(ADCSRA,ADIF))==0 );

	//Return Result
	return ADCH;;
}
