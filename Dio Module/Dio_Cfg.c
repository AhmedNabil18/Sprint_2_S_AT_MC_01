/*
 * Dio_Cfg.c
 *
 * Created: 7/13/2021 7:55:09 PM
 *  Author: Ahmed Nabil
 */ 

#include "Dio_Cfg.h"
#include "Dio.h"

const strDio_Config_t strDio_Pins[DIO_USED_PINS_NUM]=
{
	{DioConf_LED_PORT_NUM, DioConf_LED_PIN_NUM, DIO_PIN_DIR_OUTPUT, PIN_LOW},
	{DioConf_BUTTON_PORT_NUM, DioConf_BUTTON_PIN_NUM, DIO_PIN_DIR_INPUT, PIN_PDR}
};

/*
typedef struct
{
	uint8_t u8_PortNum;
	uint8_t u8_PinNum;
	enuDio_Direction_t u8_Direction;
	uint8_t u8_InitState; 
}strDio_Config_t;*/