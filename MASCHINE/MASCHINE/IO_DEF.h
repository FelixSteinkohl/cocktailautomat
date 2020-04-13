/*
 * IO_DEF.h
 *
 * Created: 05.03.2015 16:00:57
 *  Author: joachim.ha
 */ 

#include "OutputShiftReg.h"

#ifndef IO_DEF_H_
#define IO_DEF_H_

#define Anz_R 5 //Anzahl der Kaskadierten FIFOs 

//******************IO Def**************************
//1. Stelle = Nummer Register 2. Stelle = Bitnummer
//**************************************************
#define O_SType_01		10
#define O_SType_02		11
#define O_SType_03		12
#define O_SType_04		13
#define O_SType_05		14
#define O_SType_06		15
#define O_SType_07		16
#define O_SType_08		17
#define O_SType_09		20
#define O_SType_10		21
#define O_SType_11		22
#define O_SType_12		23
#define O_SType_13		24
#define O_SType_14		25
#define O_SType_15		26
#define O_SType_16		27
#define O_SType_17		30
#define O_SType_18		31
#define O_SType_19		32
#define O_SType_20		33
#define O_Wasserp_01	34
#define O_Wasserp_02	35
#define O_Wasserp_03	36
#define O_Wasserp_04	37
#define O_VKompress		40
#define O_VVentil		41
#define O_Kompress		42
#define O_ZylBDeckel_ab	43
#define O_ZylCockMix_ab	44
#define O_ZylRohZuck_ab	45
#define O_CockMix		46
#define O_EisCrush		47
#define O_Freig24V		50
#define O_FreigATX_01	51
#define O_FreigATX_02	52
#define O_FreigATX_03	53
#define O_Res54			54
#define O_Res55			55
#define O_Res56			56
#define O_Res57			57



 /* IO_DEF_H_ */


uint8_t Reg[Anz_R];

void setBit_Reg (int i)
{
	int BitNum = i, RegNum=0;
	
	while (BitNum>10) //Separieren von Register- und Bitnummer
	{
		RegNum+=1;
		BitNum-=10;
	}

	Reg[RegNum]|=(1<<BitNum);
	
	HC595Init();
	for(uint8_t i=0;i<=Anz_R;i++)
	{
	HC595Write(Reg[i]);	//Write the data to HC595
	Wait();						//Wait
	}
}

void resetBit_Reg (int i)
{
	int BitNum = i, RegNum=0;
	
	while (BitNum>=10) //Separieren von Register- und Bitnummer
	{
		RegNum+=1;
		BitNum-=10;
	}
	
	Reg[RegNum]&=~(1<<BitNum);
	
	HC595Init();
	for(uint8_t i=0;i<Anz_R;i++)
	{
		HC595Write(Reg[i]);	//Write the data to HC595
		Wait();						//Wait
	}
}

#endif