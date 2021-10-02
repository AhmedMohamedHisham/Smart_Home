/*
 * BIT_MATH.h
 *
 * Created: 9/25/2021 2:23:00 PM
 *  Author: Ahmed Hisham
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define set_bit(reg, bit)	reg |= (1 << bit)
#define clr_bit(reg, bit)	reg &= ~(1 << bit)
#define tgl_bit(reg, bit)	reg ^= (1 << bit)
#define get_bit(reg, bit)	((reg >> bit) & 1)


#endif /* BIT_MATH_H_ */