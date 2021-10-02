/*
 * DIO_CONFIG.h
 *
 * Created: 9/25/2021 9:04:31 PM
 *  Author: Ahmed Hisham
 */ 
#include "CPU_Configuration.h"

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

typedef enum
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
}DIO_PORT;

typedef enum
{
	PIN_0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7
}DIO_PIN;

typedef enum
{
	INPUT,
	OUTPUT
}DIO_DIR;



#endif /* DIO_CONFIG_H_ */