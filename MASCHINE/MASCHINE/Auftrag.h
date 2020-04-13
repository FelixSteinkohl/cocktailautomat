/*
 * Auftrag.h
 *
 * Created: 15.04.2015 17:03:40
 *  Author: joachim.ha
 */ 
#include "avr/io.h"
#include "avr/eeprom.h"
#include "Types.h"
#include "MA_EEPROM.h"
#include "Move.h"

#ifndef AUFTRAG_H_
#define AUFTRAG_H_



Void auftrag (int Nr)
{
	uint16_t t_Pos;
	uint8_t t_Dos, t_Art;
	
	for (int i=0, i<19,i++)
	{
		t_Pos = T_Rezept[Nr].Pos[i];	
		t_Dos = T_Rezept[Nr].Dos[i];
		t_Art = T_Rezept[Nr].Art[i],
		
		if (t_Pos>0)
		{
			move(t_Pos,100);//Speed anpassen
			startDos(t_Art,t_Dos);			
		}
		

		
		
	}
		
}



#endif /* AUFTRAG_H_ */