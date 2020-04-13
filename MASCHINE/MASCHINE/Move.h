/*
 * Move.h
 *
 * Created: 12.09.2014 04:38:30
 *  Author: joachim.ha
 */ 


#ifndef MOVE_H_
#define MOVE_H_





#endif /* MOVE_H_ */

/*
 * Move.c
 *
 * Created: 12.09.2014 03:46:16
 *  Author: joachim.ha
 */ 

#include <avr/io.h>			// include I/O definitions (port names, pin names, etc)
#include <avr/interrupt.h>	// include interrupt support
#include "avr/iom2560.h"
#include "global.h"		
#include <stdio.h>
#include <util/delay.h>


int test_min=-1000, test_max=1000, test_aktPos=0;
double const test_speed=500;
double const test_speed_anl=750;
BOOL test_direction=0;
int temp22=0;

void move_init()
{
	
	
	
	
}

int move (int POS, int SPEED)
{
	for (int i = POS;i>=0;i--)
	{
		
		//Direction ergänzen
		sbi(DDRD, PD1);
		for (int j=1; j<=100; j++)
			{_delay_ms(10);}//*SPEED
		cbi(DDRD, PD1);
	}
	
	return 0;
}

void move_test ()
{		
	
	while(1)
	{
		
	sbi(DDRD, PD5);	//LED
	sbi(DDRD, PD0);//Direct
	sbi(DDRD, PD1);//Step
		//Richtungsänderung
		if (test_aktPos<test_min)
		{
			test_direction = 1;
			sbi(PORTD,PD0);
			
		}
		else if (test_aktPos>test_max)
		{
			test_direction = 0;
			cbi(PORTD,PD0);
			
		}
		
		
		if (test_aktPos==test_min)
		{
			temp22=0;
			
		}
		else if (test_aktPos==test_max)
		{
			temp22=0;
			
		}
		
		//_delay_ms(test_speed);//*SPEED	
		if (temp22<200)
		{
			_delay_us(test_speed_anl);
			temp22++;
		}
		
		_delay_us(test_speed);
		
		sbi(PORTD, PD1);
//		sbi(DDRD, PD5);		//LED
		sbi(PORTD, PD5);	//LED
		//	_delay_ms(test_speed);//*SPEED		
		
		
		
		
			if (temp22<200)
			{
				_delay_us(test_speed_anl);
				temp22++;
			}
		_delay_us(test_speed);
		
			
		cbi(PORTD, PD1);
		//cbi(DDRD, PD5);
		cbi(PORTD, PD5);	
		
	
		
		
		
		
		if (test_direction==1)
		{
			test_aktPos++;
			
		}
		else if (test_direction==0)
		{
			test_aktPos--;
			
		}
	}
}

