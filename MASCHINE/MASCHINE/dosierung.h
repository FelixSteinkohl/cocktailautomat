/*
 * dosierung.h
 *
 * Created: 13.11.2014 03:13:43
 *  Author: joachim.ha
 */ 

#include "avr/io.h"
#include "avr/eeprom.h"
#include "Types.h"
#include <util/delay.h>
#include "IO_DEF.h"

#ifndef DOSIERUNG_H_
#define DOSIERUNG_H_

int messDos(long i)
{
	uint16_t adcval;
	ADC_Init();
	adcval = ADC_Read(1);
	if (adcval==i)
	{
		return 1;
	}
}
void startDos(int Art, uint8_t Dos)
	{
		int Mess=0;
		
		switch (Art)
		{
			case 1: 
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_01);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_01);
			break;
			
			case 2:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_02);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_02);			
			break;
			
			case 3:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_03);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_03);
			break;
			
			case 4:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_04);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_04);
			break;
			
			case 5:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_05);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_05);
			break;
			
			case 6:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_06);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_06);
			break;
			
			case 7:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_07);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_07);
			break;
						
			case 8:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_08);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_08);
			break;
						
			case 9:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_09);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_09);
			break;
					
			case 10:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_10);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_10);
			break;
					
			case 11:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_11);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_11);
			break;
					
			case 12:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_12);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_12);
			break;
					
			case 13:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_13);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_13);
			break;
					
			case 14:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_14);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_14);
			break;
					
			case 15:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_15);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_15);
			break;
					
			case 16:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_16);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_16);
			break;
					
			case 17:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_17);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_17);
			break;
					
			case 18:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_18);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_18);
			break;
					
			case 19:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_19);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_19);
			break;
					
			case 20:
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
			{
				setBit_Reg(O_SType_20);
				Mess=messDos(Dos);
			}
			resetBit_Reg(O_SType_20);
			break;
				
			
			default://Fehlermeldung einfg
			/* Your code here */
			break;
		}
	
	
		
		if (Art<=7)			//RegisterA
		{
			for (int j=0; j<1000|Mess==Dos/*|Dosiermenge erreicht*/;j++)
				{
					setBit_Reg(O_SType_18);
					Mess=messDos(Dos);
				}
		}
		
		if (Art>7 && Art<15)	//RegisterB 
		{
			for (int j=0; j<1000|Mess==1/*|Dosiermenge erreicht*/;j++)
			{
				sbi(DDRB,Art-8);
				Mess=messDos(Dos);
			}			
		}
			
		if (Art>15 && Art<19)	//RegisterC
		{
			for (int j=0; j<1000|Mess==1/*|Dosiermenge erreicht*/;j++)
			{
				sbi(DDRC,Art-16);
				Mess=messDos(Dos);
			}
		}					
		
		cbi(DDRA,Art);
		cbi(DDRB,Art-8);
		cbi(DDRC,Art-16);
	}
void holBecher()
	{
		sbi(DDRD,0);//Vakuumkomressor EIN
		while (1/*Becherholzylinder nicht oben*/)
		{
			sbi(DDRD,2);//Becher-Zylinder AUF
		}
		cbi(DDRD,2);
		while (1/*Becherholzylinder nicht unten*/)
		{
			sbi(DDRD,3);//Becher-Zylinder AB
		}
		cbi(DDRD,3);
		
		
	}


#endif /* DOSIERUNG_H_ */