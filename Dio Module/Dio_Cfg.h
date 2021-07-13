/*
 * Dio_Cfg.h
 *
 * Created: 7/13/2021 7:54:56 PM
 *  Author: Ahmed Nabil
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "ATMega32_Registers.h"

#define DIO_USED_PINS_NUM		2

/* DIO Configured Port ID's  */
#define DioConf_LED_PORT_NUM                PORT_C /* PORTC */
#define DioConf_BUTTON_PORT_NUM             PORT_D /* PORTD */

/* DIO Configured Channel ID's */
#define DioConf_LED_PIN_NUM					PIN_5 /* Pin 5 in PORTC */
#define DioConf_BUTTON_PIN_NUM				PIN_2 /* Pin 2 in PORTD */

/* Channel Index in the array of structures in Dio_Cfg.c */
#define DioConf_LED_PIN_ID_INDEX        0
#define DioConf_BUTTON_PIN_ID_INDEX     1

#endif /* DIO_CFG_H_ */