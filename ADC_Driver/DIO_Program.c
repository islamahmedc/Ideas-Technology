/*
 * DIO_Program.c
 *
 *  Created on: Jul 7, 2018
 *      Author: Islam Ahmed
 */


/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "DIO_Configurations.h"
#include "DIO_Interfacing.h"
#include "utilites.h"

/********************************************************************************
***** Functions Definitions                								    *****
********************************************************************************/

/* ------------------------------------------------------------------------------
[Function Name] : DIO_voidSetDirection
[Description] : This function is to set the direction of each pin input or output
[Args] :
[in] : The number of pin & the direction (Input or output)
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_voidSetDirection(uint8 Copy_u8PinNum, uint8 Copy_u8PinValue ){

	if( (Copy_u8PinNum>=0 && Copy_u8PinNum<=31) &&  (Copy_u8PinValue==0 || Copy_u8PinValue==1) )
		{
			/*  here is a switch case to specify which pin was passed to the function
			*	and assign the value to it
			*/
			if(Copy_u8PinNum/8==0)
			{
				ASSIGN_BIT(DDRA,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if(Copy_u8PinNum/8==1)
			{
				ASSIGN_BIT(DDRB,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if(Copy_u8PinNum/8==2)
			{
				ASSIGN_BIT(DDRC,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if(Copy_u8PinNum/8==3)
			{
				ASSIGN_BIT(DDRD,Copy_u8PinNum%8,Copy_u8PinValue);
			}
		}

}

/* ------------------------------------------------------------------------------
[Function Name] : DIO_voidWritePIN
[Description] : This function is to set the volt of the chosen pin (High or Low)
[Args] :
[in] : The number of pin & logic value ( high 5v ) or ( Low 0v )
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_voidWritePIN(uint8 Copy_u8PinNum, uint8 Copy_u8PinValue){

	if( (Copy_u8PinNum>=0 && Copy_u8PinNum<=31) &&  (Copy_u8PinValue==0 || Copy_u8PinValue==1) )
		{
			//the switch case to specify which pin was selected by the user
			if((Copy_u8PinNum/8)==0)
			{
				ASSIGN_BIT(PORTA,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if((Copy_u8PinNum/8)==1)
			{
				ASSIGN_BIT(PORTB,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if((Copy_u8PinNum)/8==2)
			{
				ASSIGN_BIT(PORTC,Copy_u8PinNum%8,Copy_u8PinValue);
			}
			if((Copy_u8PinNum/8)==3)
			{
				ASSIGN_BIT(PORTD,Copy_u8PinNum%8,Copy_u8PinValue);
			}
		}
}

/* ------------------------------------------------------------------------------
[Function Name] : DIO_u8ReadPIN
[Description] : This function is to read the digital value of the chosen pin
[Args] :
[in] : The number of pin
[out] : N/A
[in/out] : N/A
[Returns] : the value of the pin (High = 1) or (Low = 0)
------------------------------------------------------------------------------ */
uint8 DIO_u8ReadPIN(uint8 Copy_u8PinNum){
	//a u8 variable to store the read value and return it
	uint8 Local_u8ReturnValue;
	if( Copy_u8PinNum>=0 && Copy_u8PinNum<=31)
		{
			if(Copy_u8PinNum/8==0)
			{
				Local_u8ReturnValue=GET_BIT(PINA,Copy_u8PinNum%8);
			}
			if(Copy_u8PinNum/8==1)
			{
				Local_u8ReturnValue=GET_BIT(PINB,Copy_u8PinNum%8);
			}
			if(Copy_u8PinNum/8==2)
			{
				Local_u8ReturnValue=GET_BIT(PINC,Copy_u8PinNum%8);
			}
			if(Copy_u8PinNum/8==3)
			{
				Local_u8ReturnValue=GET_BIT(PIND,Copy_u8PinNum%8);
			}
		}

	//return the output of the selected pin
	return Local_u8ReturnValue;
}

