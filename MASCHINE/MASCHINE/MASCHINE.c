/*
 * MASCHINE.c
 *
 * Created: 11.09.2014 01:18:13
 *  Author: joachim.ha
 */ 
#include <avr/io.h>			// include I/O definitions (port names, pin names, etc)
#include <avr/interrupt.h>	// include interrupt support
#include "avr/iom2560.h"
#include "global.h"		// include our global settings
#include <stdio.h>
#include <util/delay.h>
#include "Move.h"
#include "MA_EEPROM.h"
#include "Types.h"
#include "stdbool.h"
#include "ADC.h"
#include "dosierung.h"
#include "IO_DEF.h"
#include "uart.h"
#include "string.h"
#include "MASCH_GLOBAL.h"
#include "BT_INTERPRETER.h"
#include "timer_cus.h"

char test;
int laenge=0;


int main(void)
{
//initMASCHINE();
//init_timer();
//sbi(DDRA,1);

//test= uart_getstring();

while (1)
{
		
	/*
		cbi(DDRD, PD5);	
		_delay_ms(10000);
		sbi(DDRD, PD5);
		_delay_ms(10000);
	*/
				
move_test();
}





}



//ISR(INT0_vect)
//{
	//PORTC=0xff;
	//sbi(DDRC,3);
	////while(1);
//}

//void setup()
//{
	//cbi(DDRA,1);
	//// initialize the serial communication:
	//serial.init(0, 9600);
	//serial.setPacketHandler(handlePacket);
	//
	//// Initialize the send buffer that we will use to send data
	//send_buffer.init(30);
//}

	//DDRD = 0x00;
	//PORTD = 0xFF;
	//// Enable INT0 External Interrupt
	//EIMSK |= 1<<INT0;
	//EICRA = 0X0F; 
	//// Falling-Edge Triggered INT0 - This will depend on if you
	//// are using a pullup resistor or a pulldown resistor on your
	//// button and port
	//MCUCR |= 1<<ISC01;
	//MCUCR |= 1<<ISC00;
//
	//sei();
	//
	//
	//while (1)
	//{
		//
	//}
	//
	////setBit_Reg(O_SType_02);
	//
	////Rezept Arb;
	////BOOL init=false;
	//uint8_t R1;
	////if(1==1)
	////{
	////R1 |=(1<<3);
	////R1|=0b00001000;
	////DDRA = R1;
		////
	////}
////
    ////while(1)
    ////{
	////
	////startDos(3, 1000);
////
	////uint16_t adcval;
	//////ADC_Init();
	////
	////
	////
	////
	/////*while( 1 ) {
		////adcval = ADC_Read(1);	// Kanal 0
								////// mach was mit adcval
		////
	////adcval=adcval;
	////}*/
////
////
	////
	/////*	if (init==false)
		////{
			////schreibeTest();
			////init_EE();
			////init=true;
		////}
	////*/
		//////sbi(DDRD, PD4);
		//////	i=move(123, 123);
		//////	_delay_ms(200);
////
////
		//////leseStartAdr();
		//////Arb= sucheRezept(3);
////
////
		////
			////
		////
    ////}