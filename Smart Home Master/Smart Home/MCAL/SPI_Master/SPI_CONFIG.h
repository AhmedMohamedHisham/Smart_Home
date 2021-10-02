/*
 * SPI_CONFIG.h
 *
 * Created: 9/26/2021 5:07:01 PM
 *  Author: Ahmed Hisham
 */ 
#include "CPU_Configuration.h"


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#define CS_PORT		PORT_A
#define CS_PIN		PIN_0

#define MOSI_PORT	PORT_B
#define MOSI_PIN	PIN_5

#define MISO_PORT	PORT_B
#define MISO_PIN	PIN_6

#define SCK_PORT	PORT_B
#define SCK_PIN		PIN_7

#define SLAVE	0
#define MASTER	1

#define SPI_MODE MASTER

#endif /* SPI_CONFIG_H_ */