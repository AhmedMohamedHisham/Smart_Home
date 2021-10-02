/*
 * SPI.c
 *
 * Created: 9/25/2021 3:25:11 PM
 *  Author: Ahmed Hisham
 */ 
#include "SPI.h"
#include "DIO.h"

void SPI_M_Init(void)
{
	#if SPI_MODE == MASTER
		//PIN Directions
		// set CS pin as output
		set_dir(CS_PORT , CS_PIN , OUTPUT);
		// set MOSI pin as output
		set_dir(MOSI_PORT , MOSI_PIN , OUTPUT);
		// set MISO pin as input
		set_dir(MISO_PORT , MISO_PIN , INPUT);
		// set SCK pin as output
		set_dir(SCK_PORT , SCK_PIN , OUTPUT);

		//SPI Clock Rate (F_CPU/128)
		set_bit(SPCR , SPR1);
		set_bit(SPCR , SPR0);
		//SPI Mode 0
		//Clock Phase (Leading Edge: Sample & Trailing Edge: Setup)
		clr_bit(SPCR , CPHA);
		//Clock Polarity (Leading Edge: Rising & Trailing Edge: Falling)
		clr_bit(SPCR , CPOL);
		//Master Select
		set_bit(SPCR , MSTR);
		//Data Order (LSB of the data word is transmitted first)
		set_bit(SPCR , DORD);
		//SPI Enable
		set_bit(SPCR , SPE);
	#elif SPI_MODE == SLAVE
		//PIN Directions
		// set SS pin as input
		set_dir(CS_PORT , CS_PIN , INPUT);
		// set MOSI pin as input
		set_dir(MOSI_PORT , MOSI_PIN , INPUT);
		// set MISO pin as output
		set_dir(MISO_PORT , MISO_PIN , OUTPUT);
		// set SCK pin as input
		set_dir(SCK_PORT , SCK_PIN , INPUT);
		
		//Enable Global Interrupt
		set_bit(SREG , 7);
		
		//SPI Clock Rate (F_CPU/128)
		set_bit(SPCR , SPR1);
		set_bit(SPCR , SPR0);
		//SPI Mode 0
		//Clock Phase (Leading Edge: Sample & Trailing Edge: Setup)
		clr_bit(SPCR , CPHA);
		//Clock Polarity (Leading Edge: Rising & Trailing Edge: Falling)
		clr_bit(SPCR , CPOL);
		//Master Select
		clr_bit(SPCR , MSTR);
		//Data Order (LSB of the data word is transmitted first)
		set_bit(SPCR , DORD);
		//SPI Enable
		set_bit(SPCR , SPE);
		//SPI Interrupt Enable
		set_bit(SPCR , SPIE);
	#endif
}

void SPI_Send(uint8_t data)
{
	SPDR = data;
	while ( !get_bit(SPSR , SPIF) );
}