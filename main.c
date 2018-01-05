/*
 *  main.c
 *  This is a main code which:
 *  flash led from right to left then back as 2 leds from left to right
 *  then back as 3 leds to left and etc until all leds are on
 *
 *  Created on: 1/1/2018
 *      Author: Asmaa
 */
#include<util/delay.h>
#include"STDTYPES.h"
#include"DIO.h"

int main(void)
{
	u8 i,j;
	DDRA=0xFF;
	PORTA=0x00;

	while(1)
	{
		PORTA=0x01;
		j=7;
		while(PORTA!=0XFF)
		{
			for(i=0;i<j;i++)
			{
				_delay_ms(400);
				PORTA<<=1;
			}
			PORTA>>=1;
			PORTA|=0X80;
			for(i=0;i<j-1;i++)
			{
				_delay_ms(400);
				PORTA>>=1;
			}
			PORTA<<=1;
			PORTA|=0x01;

			j--;
		}

	}
	return 0;
}

