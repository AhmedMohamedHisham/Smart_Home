/*
 * LED_0.c
 *
 * Created: 9/25/2021 8:28:18 PM
 *  Author: Ahmed Hisham
 */
 
#include "LED_0.h"
#include "DIO.h"

void LED_0_Init(void)
{
	set_dir (LED_0_PORT , LED_0_PIN , OUTPUT);
}

void LED_0_ON(void)
{
	set(LED_0_PORT , LED_0_PIN);
}

void LED_0_OFF(void)
{
	clr(LED_0_PORT , LED_0_PIN);
}

void LED_0_TGL(void)
{
	tgl(LED_0_PORT , LED_0_PIN);
}