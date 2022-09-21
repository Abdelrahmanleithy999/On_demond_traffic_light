/*
 * timer.h
 *
 * Created: 9/6/2022 12:29:39 AM
 *  Author: Abdelrahman M leithy
 */


#ifndef TIMER_H_
#define TIMER_H_
#include "std_types.h"
#include "common_macros.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU   1000000UL
#define NUMBER_OF_TICKS_FOR_SECOND  4
extern uint8 gtick  ;
void TIMER0_STOP () ;
void TIMER0_INIT () ;
void Timer1_Delay_FIVE_sec() ;
void Timer1_Delay_One_sec();


#endif /* TIMER_H_ */
