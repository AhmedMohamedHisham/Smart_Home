/*
 * UART.c
 *
 * Created: 9/25/2021 2:11:03 PM
 *  Author: Ahmed Hisham
 */ 
#include "UART.h"
#include "SPI.h"

void UART_Init(void)
{
	//Normal Asynchronous Speed
	clr_bit(UCSRA , U2X);
	//Disable Multi-processor Communication Mode
	clr_bit(UCSRA , MPCM);
	
	//RX Complete Interrupt Enable
	set_bit(UCSRB , RXCIE);
	//Receiver Enable
	set_bit(UCSRB , RXEN);
	
/*
	Enable Register Select
	Asynchronous Operation Mode
	Parity Mode Disabled
	Stop Bit (1-bit)
	Character Size (8-bit)
*/
	UCSRC |= (1<< URSEL) | (1<< UCSZ0) | (1<< UCSZ1);
	
	//Baud Rate (9600)
	UBRRL = 103;
	
	//Enable Global Interrupt
	set_bit(SREG , 7);
}

ISR (USART_RXC_vect)
{
	SPI_Send(UDR);
}