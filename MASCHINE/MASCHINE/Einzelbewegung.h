/*
 * Einzelbewegung.h
 *
 * Created: 17.04.2015 18:57:59
 *  Author: joachim.ha
 */ 
#include "IO_DEF.h"

#ifndef EINZELBEWEGUNG_H_
#define EINZELBEWEGUNG_H_

void einzelbewegung(BYTE TNr, BYTE CNr, int time)
{
	switch (TNr)
	{
		case 0:		//
			switch (CNr)
			{
				case 0:		//
				//unsigned int timer_akt=sekunde;
				unsigned int timer_max=sekunde+time;
				
				do 
				{
					//Ansteuerung
					if (sekunde>timer_max)
					{
						//Error
						break;
					}
				} while (/*!Endlage*/);
				
				break;
				case 1:
				
				break;
				case 2:
				
				break;
				default:	//Error Commandnummer
				
				break;
			}
		break;
		
		case 1:		//
		
		break;
		case 2:		//
		
		break;
		case 3:		//
		
		break;
		default:	//Error Teilnehmernummer
		
		break;
	}
}





#endif /* EINZELBEWEGUNG_H_ */