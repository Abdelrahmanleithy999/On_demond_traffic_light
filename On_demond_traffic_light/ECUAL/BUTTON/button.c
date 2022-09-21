/*
 * button.c
 *
 * Created: 9/6/2022 12:28:36 AM
 *  Author: EGYPT_LAPTOP
 */

#include "button.h"
#define GREEN_CASE 1
#define YELLOW_CASE 2
#define RED_CASE 3
#define TOGGLE_CASE 4
#define NORMAL_GREEN_PIN   PIN0_ID
#define NORMAL_RED_PIN   PIN2_ID
#define NORMAL_YELLOW_PIN   PIN1_ID
#define NORMAL_PORT       PORTA_ID

 ISR(INT0_vect)
{
	 Timer1_Delay_One_sec() ;
	 if(READ_PIN(PIN2_ID , PORTD_ID)==1) {
		 cli() ;

	 }
	 else {
	if ((flag ==GREEN_CASE)||(flag ==YELLOW_CASE)||(flag ==TOGGLE_CASE)) {
     LED_OFF (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      Timer1_Delay_One_sec() ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_OFF(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      Timer1_Delay_One_sec() ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      Timer1_Delay_One_sec() ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_OFF(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      Timer1_Delay_One_sec() ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      Timer1_Delay_One_sec() ;
      LED_OFF (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
      LED_OFF(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
      LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
      LED_OFF(NORMAL_GREEN_PIN , NORMAL_PORT) ;
      LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
      LED_ON(NORMAL_RED_PIN , NORMAL_PORT) ;
      Timer1_Delay_FIVE_sec() ;
      LED_OFF(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
      LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
       gtick = 0 ;
	}
	else if (flag ==RED_CASE) {
		LED_OFF (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
		LED_ON(NORMAL_RED_PIN , NORMAL_PORT);
		LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
		Timer1_Delay_FIVE_sec() ;
		LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
		LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
		LED_OFF(NORMAL_RED_PIN , NORMAL_PORT) ;
		Timer1_Delay_One_sec() ;
		LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
		LED_OFF(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
	    LED_OFF(NORMAL_RED_PIN , NORMAL_PORT) ;
	    Timer1_Delay_One_sec() ;
	    LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
	    LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
	   LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
 	   LED_OFF(NORMAL_RED_PIN , NORMAL_PORT) ;
	   Timer1_Delay_One_sec() ;
	    LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
	   LED_OFF(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
		LED_OFF(NORMAL_RED_PIN , NORMAL_PORT) ;
		Timer1_Delay_One_sec() ;
		LED_ON(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
		LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		LED_ON(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
		LED_OFF(NORMAL_RED_PIN , NORMAL_PORT) ;
		Timer1_Delay_One_sec() ;
		LED_OFF(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT) ;
		LED_OFF(PEDESTRIAN_YELLOW_PIN ,PEDESTRIAN_PORT ) ;
		LED_ON (PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT) ;
		 gtick = 0 ;

	}

}
}
 void BUTTON_Interupt () {
	PIN_DIRECTION(PIN2_ID , PORTB_ID , PIN_INPUT) ;
	SET_BIT (GICR , INT0) ;
	MCUCR |= (1<<ISC00) | (1<<ISC01);   // Trigger INT0 with the raising edge
	sei() ;

}
