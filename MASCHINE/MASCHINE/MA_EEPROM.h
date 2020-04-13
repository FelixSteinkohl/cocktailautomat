/*
 * MA_EEPROM.h
 *
 * Created: 14.09.2014 22:28:49
 *  Author: joachim.ha
 */ 

#include "avr/io.h"
#include "avr/eeprom.h"
#include "Types.h"

#define EEMEM __attribute__ ((section (".eeprom")))
#ifndef MA_EEPROM_H_
#define MA_EEPROM_H_



#define EE_S_ADR_01L 0x000 // Pointer Startadresse Rezept


Rezept T_Rezept[20];
uint16_t Adresse=0;
void leseStartAdr(void)
{
	//S_Adr_01 = eeprom_read_word(EE_S_ADR_01L);
	//TODO Verf.
}

void schreibeStartAdr(uint8_t Nr)
{
	//S_Adr_01=0x4142;
	eeprom_write_word( EE_S_ADR_01L,  (Nr));
	//TODO Verf.
}

Rezept sucheRezept(int Nr)
{
	Rezept T_Rezept_2;
	
	T_Rezept_2 = T_Rezept[Nr];
	return T_Rezept_2;			
	 
}

void init_EE(void)
{	
	Adresse = (EE_S_ADR_01L);
	uint16_t *PO=&T_Rezept[0].Pos[0];
	eeprom_read_block(PO,Adresse,1600);
}

void schreibeTest(void)
{
	for (int t=1600;t>0;t--)
	{
		eeprom_update_byte((EE_S_ADR_01L,t), 0x3);
	}
}

#endif /* MA_EEPROM_H_ */