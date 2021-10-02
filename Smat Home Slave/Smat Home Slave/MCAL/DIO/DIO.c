/*
 * DIO.c
 *
 * Created: 9/25/2021 8:49:27 PM
 *  Author: Ahmed Hisham
 */ 
#include "DIO.h"

void set_dir (uint8_t port , uint8_t pin , uint8_t dir)
{
	switch (dir)
	{
		case INPUT:
		switch(port)
		{
			case PORT_A:
			clr_bit(DDRA, pin);
			break;
			case PORT_B:
			clr_bit(DDRB, pin);
			break;
			case PORT_C:
			clr_bit(DDRC, pin);
			break;
			case PORT_D:
			clr_bit(DDRD, pin);
			break;
		}
		break;
		case OUTPUT:
		switch(port)
		{
			case PORT_A:
			set_bit (DDRA , pin);
			break;
			case PORT_B:
			set_bit (DDRB , pin);
			break;
			case PORT_C:
			set_bit (DDRC , pin);
			break;
			case PORT_D:
			set_bit (DDRD , pin);
			break;
		}
		break;
	}
}

void set (uint8_t port , uint8_t pin)
{
	switch(port)
	{
		case PORT_A:
		set_bit (PORTA , pin);
		break;
		case PORT_B:
		set_bit (PORTB , pin);
		break;
		case PORT_C:
		set_bit (PORTC , pin);
		break;
		case PORT_D:
		set_bit (PORTD , pin);
		break;
	}
}

void clr (uint8_t port , uint8_t pin)
{
	switch(port)
	{
		case PORT_A:
		clr_bit (PORTA , pin);
		break;
		case PORT_B:
		clr_bit (PORTB , pin);
		break;
		case PORT_C:
		clr_bit (PORTC , pin);
		break;
		case PORT_D:
		clr_bit (PORTD , pin);
		break;
	}
}

void tgl (uint8_t port , uint8_t pin)
{
	switch(port)
	{
		case PORT_A:
		tgl_bit (PORTA , pin);
		break;
		case PORT_B:
		tgl_bit (PORTB , pin);
		break;
		case PORT_C:
		tgl_bit (PORTC , pin);
		break;
		case PORT_D:
		tgl_bit (PORTD , pin);
		break;
	}
}

uint8_t get (uint8_t port , uint8_t pin)
{
	switch(port)
	{
		case PORT_A:
		return get_bit (PINA , pin);
		break;
		case PORT_B:
		return get_bit (PINB , pin);
		break;
		case PORT_C:
		return get_bit (PINC , pin);
		break;
		case PORT_D:
		return get_bit (PIND , pin);
		break;
	}
	return 2;//Failure Case
}