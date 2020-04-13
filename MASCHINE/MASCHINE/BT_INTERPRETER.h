/*
 * BT_INTERPRETER.h
 *
 * Created: 19.06.2015 17:42:23
 *  Author: joachim.ha
 */ 


#ifndef BT_INTERPRETER_H_
#define BT_INTERPRETER_H_

void BT_interpr(char *Telegram)
{
	switch (Telegram[0])
	{
		case 'M':		//Einzelbewegung
		
		break;
		
		case 'A':		//Auftrag
		
		break;
		case 'P':		//Parameter
		
		break;
		case 'R':		//Rezept
		
		break;
		default:	//Error Telegram
		
		break;
	}
}


#endif /* BT_INTERPRETER_H_ */