/*
 * LED_2.c
 *
 * Created: 9/26/2021 4:49:17 PM
 *  Author: Ahmed Hisham
 */ 
#include "LED_2.h"
#include "DIO.h"

void LED_2_Init(void)
{
	set_dir (LED_2_PORT , LED_2_PIN , OUTPUT);
}

void LED_2_ON(void)
{
	set(LED_2_PORT , LED_2_PIN);
}

void LED_2_OFF(void)
{
	clr(LED_2_PORT , LED_2_PIN);
}

void LED_2_TGL(void)
{
	tgl(LED_2_PORT , LED_2_PIN);
}