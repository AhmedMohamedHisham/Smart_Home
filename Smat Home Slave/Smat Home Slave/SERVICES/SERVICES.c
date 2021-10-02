/*
 * SERVICES.c
 *
 * Created: 9/27/2021 9:00:38 PM
 *  Author: Ahmed Hisham
 */ 
#include "SERVICES.h"
#include "LED_0.h"
#include "LED_2.h"
#include "SPI.h"

void SMART_ROOM_APP_Init(void)
{
	LED_0_Init();
	LED_2_Init();
	SPI_S_Init();
}