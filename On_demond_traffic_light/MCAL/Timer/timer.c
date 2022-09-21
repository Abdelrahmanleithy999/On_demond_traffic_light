/*
 * timer.c
 *
 * Created: 9/6/2022 12:29:25 AM
 *  Author: EGYPT_LAPTOP
 */
#include "timer.h"

uint8 gtick = 0 ;
ISR(TIMER0_OVF_vect)
{
	gtick++;

}

void TIMER0_STOP (){
	CLEAR_BIT(TCCR0 , CS00) ;
	CLEAR_BIT(TCCR0 , CS01) ;
	CLEAR_BIT(TCCR0 , CS02) ;
}
void TIMER0_INIT (){

	TCNT0 = 0 ;  // INITIAL VALUE = 0
	// NON - PWM MODE
    TIMSK |= (1<<TOIE0); // Enable Timer0 Overflow Interrupt
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);
	// ENABLE OVERFLOW INTERRUPT
	sei() ;
}
void TIMER1_STOP (){

	CLEAR_BIT (TCCR1B , CS12) ;
	CLEAR_BIT (TCCR1B , CS11) ;
	CLEAR_BIT (TCCR1B , CS10) ;

}
void Timer1_Delay_FIVE_sec() {
	TCNT1 = 0xB3B4 ;  // INITIAL VALUE = 65536-19532 = 46004
	TCCR1A = 0 ;
	TCCR1B = 0x04 ;
    //SET_BIT(TCCR1B , CS12) ;
    while ((TIFR&(1<<TOV1))==0);
    TCCR1B = 0 ;
    SET_BIT(TIFR , TOV1) ;
}
void Timer1_Delay_One_sec() {
	TCNT1 = 0xF0B7 ;  // INITIAL VALUE = 65536-19532 = 46004
		TCCR1A = 0 ;
		TCCR1B = 0x04 ;
	    //SET_BIT(TCCR1B , CS12) ;
	    while ((TIFR&(1<<TOV1))==0);
	    TCCR1B = 0 ;
	    SET_BIT(TIFR , TOV1) ;

}
