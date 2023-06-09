/*
 * led.h
 *
 * Created: 2/17/2023 3:19:00 PM
 *  Author: ncm
 */

#ifndef LED_H_
#define LED_H_

/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  led.h
 *         Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../MCAL/DIO/dio.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	LED_GREEN,
	LED_YELLOW,
	LED_RED,
	LED_BLUE,
	BUZZER
} Led_t;

typedef enum
{
	LED_ACTIVE_LOW,
	LED_ACTIVE_HIGH,
} LED_Active_State_t;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void led_viInit(void);
void led_viOn(Led_t ledx);
void led_viOff(Led_t ledx);
void led_viToggle(Led_t ledx);

#endif /* LED_H_ */

/**********************************************************************************************************************
 *  END OF FILE: LED_H_.h
 *********************************************************************************************************************/
