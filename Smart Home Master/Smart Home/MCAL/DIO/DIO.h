/*
 * DIO.h
 *
 * Created: 9/25/2021 8:49:15 PM
 *  Author: Ahmed Hisham
 */ 
#include "DIO_CONFIG.h"

#ifndef DIO_H_
#define DIO_H_

void set_dir (uint8_t port , uint8_t pin , uint8_t dir);
void set (uint8_t port , uint8_t pin);
void clr (uint8_t port , uint8_t pin);
void tgl (uint8_t port , uint8_t pin);
uint8_t get (uint8_t port , uint8_t pin);



#endif /* DIO_H_ */