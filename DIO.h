/*
 *  DIO.h
 *  This is a file which defines addresses of the 3 DIO registers
 *  for each port (A,B,C,D)
 *  Created on: 30/12/2017
 *      Author: Asmaa
 */

#ifndef DIO_H_
#define DIO_H_

#define PORTA  *((u8*)0X3B)
#define DDRA  *((u8*)0X3A)
#define PINA  *((u8*)0X39)

#define PORTB  *((u8*)0X38)
#define DDRB  *((u8*)0X37)
#define PINB  *((u8*)0X36)

#define PORTC  *((u8*)0X35)
#define DDRC  *((u8*)0X34)
#define PINC  *((u8*)0X33)

#define PORTD  *((u8*)0X32)
#define DDRD  *((u8*)0X31)
#define PIND  *((u8*)0X30)


#endif /* DIO_H_ */
