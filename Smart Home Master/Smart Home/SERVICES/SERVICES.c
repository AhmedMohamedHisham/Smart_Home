/*
 * SERVICES.c
 *
 * Created: 9/27/2021 9:00:38 PM
 *  Author: Ahmed Hisham
 */ 
#include "SERVICES.h"
#include "SPI.h"
#include "UART.h"

void SMART_ROOM_APP_Init(void)
{
	UART_Init();
	SPI_M_Init();
}