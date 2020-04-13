/*
 * MASCH_GLOBAL.h
 *
 * Created: 19.06.2015 16:42:57
 *  Author: joachim.ha
 */ 

#include "uart.h"
#include "MA_EEPROM.h"

#ifndef MASCH_GLOBAL_H_
#define MASCH_GLOBAL_H_


int initMASCHINE()
{
	init_EE();
	uart_init();
}

#endif /* MASCH_GLOBAL_H_ */