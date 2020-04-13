/*
 * timer_cus.h
 *
 * Created: 19.06.2015 20:28:37
 *  Author: joachim.ha
 */ 


#ifndef TIMER_CUS_H_
#define TIMER_CUS_H_

/* uC: Attiny2313 */
#include <avr/interrupt.h>	// include interrupt support
#include "avr/iom2560.h"
 
//Variablen für die Zeit
volatile unsigned int millisekunden;
volatile unsigned int sekunde;
volatile unsigned int minute;
volatile unsigned int stunde;
 
void init_timer(void)
{
  // Timer 0 konfigurieren
  TCCR0A = (1<<WGM01); // CTC Modus
  TCCR0B |= (1<<CS02); // Prescaler 8
  // ((16000000/256)/1000) = 625
  OCR0A = 625-1;
 
  // Compare Interrupt erlauben
  TIMSK0 |= (1<<OCIE0A);
 
  // Global Interrupts aktivieren
  sei();
 
 
}

/*Der Compare Interrupt Handler
wird aufgerufen, wenn
TCNT0 = OCR0A = 125-1
ist (125 Schritte), d.h. genau alle 1 ms
*/
ISR (TIMER0_COMPA_vect)
{
millisekunden++;
if(millisekunden == 1000)
{
sekunde++;
millisekunden = 0;
if(sekunde == 60)
{
minute++;
sekunde = 0;
}
if(minute == 60)
{
stunde++;
minute = 0;
}
if(stunde == 24)
{
stunde = 0;
}
}
}

#endif /* TIMER_CUS_H_ */