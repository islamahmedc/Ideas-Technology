/*
 * DIO_Configurations.h
 *
 *  Created on: Jul 7, 2018
 *      Author: Islam Ahmed
 */

#ifndef DIO_CONFIGURATIONS_H_
#define DIO_CONFIGURATIONS_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "DIO_Private.h"

/********************************************************************************
*********************************************************************************
***** Functions ProtoTypes                  							    *****
*********************************************************************************
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
void DIO_voidSetDirection(uint8 Copy_u8PinNum, uint8 Copy_u8PinValue );

/* ------------------------------------------------------------------------------
[Function Name] : DIO_voidWritePIN
[Description] : This function is to set the volt of the chosen pin (High or Low)
[Args] :
[in] : The number of pin & logic value ( high 5v ) or ( Low 0v )
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_voidWritePIN(uint8 Copy_u8PinNum, uint8 Copy_u8PinValue);

/* ------------------------------------------------------------------------------
[Function Name] : DIO_u8ReadPIN
[Description] : This function is to read the digital value of the chosen pin
[Args] :
[in] : The number of pin
[out] : N/A
[in/out] : N/A
[Returns] : the value of the pin (High = 1) or (Low = 0)
------------------------------------------------------------------------------ */
uint8 DIO_u8ReadPIN(uint8 Copy_u8PinNum);


#endif /* DIO_CONFIGURATIONS_H_ */
