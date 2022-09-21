#include "App.h"
#define GREEN_CASE 1
#define YELLOW_CASE 2
#define RED_CASE 3
#define TOGGLE_CASE 4
uint8 flag = 0 ;
void App_Start () {
	if(gtick == 0 ) {
			LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
			LED_OFF(NORMAL_YELLOW_PIN,NORMAL_PORT ) ;
			LED_ON(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
			flag = GREEN_CASE ;
			}
			else if(gtick == (5*NUMBER_OF_TICKS_FOR_SECOND)) {
		     LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
		     LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
		      LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		      flag = YELLOW_CASE ;

			}
			else if (gtick == (10*NUMBER_OF_TICKS_FOR_SECOND)) {
		    LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
		    LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
		    LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		    flag =  TOGGLE_CASE ;
			}
		    else if (gtick == (11*NUMBER_OF_TICKS_FOR_SECOND)){
		    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		    	flag =  TOGGLE_CASE ;
		    }
		    else if (gtick == (12*NUMBER_OF_TICKS_FOR_SECOND)){
		    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		    	flag =  TOGGLE_CASE ;
		    }
		    else if (gtick == (13*NUMBER_OF_TICKS_FOR_SECOND)){
		    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		    	flag =  TOGGLE_CASE ;
		    }
		    else if(gtick == (14*NUMBER_OF_TICKS_FOR_SECOND)){
		    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
		    	flag =  TOGGLE_CASE ;

		    }
			else if (gtick == (15*NUMBER_OF_TICKS_FOR_SECOND))  {
				LED_OFF(NORMAL_YELLOW_PIN,NORMAL_PORT ) ;
				 LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
				LED_ON(NORMAL_RED_PIN  ,NORMAL_PORT ) ;
				flag = RED_CASE ;
			}
			else if (gtick == (20*NUMBER_OF_TICKS_FOR_SECOND)) {
				LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
				LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
				LED_ON(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
				 flag = YELLOW_CASE ;


			}
			else if (gtick == (25*NUMBER_OF_TICKS_FOR_SECOND))  {
					 LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
					 LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
					 LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
					 flag =  TOGGLE_CASE ;
			}
		  else if (gtick == (26*NUMBER_OF_TICKS_FOR_SECOND)){
				    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
				    	flag =  TOGGLE_CASE ;
				    }
		 else if (gtick == (27*NUMBER_OF_TICKS_FOR_SECOND)){
				    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
				    	flag =  TOGGLE_CASE ;
				    }
	    else if(gtick == (28*NUMBER_OF_TICKS_FOR_SECOND)){
				    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
				    	flag =  TOGGLE_CASE ;

				    }
				    else if(gtick == (29*NUMBER_OF_TICKS_FOR_SECOND)){
				    	LED_TOGGLE(NORMAL_YELLOW_PIN ,NORMAL_PORT ) ;
				    	flag =  TOGGLE_CASE ;

				    }
				    else if (gtick == (30*NUMBER_OF_TICKS_FOR_SECOND)) {
				    	LED_OFF(NORMAL_RED_PIN,NORMAL_PORT ) ;
				    	LED_OFF(NORMAL_GREEN_PIN ,NORMAL_PORT ) ;
				    	LED_OFF(NORMAL_YELLOW_PIN,NORMAL_PORT ) ;
				    	gtick = 0  ;

				    }




}
void App_Init () {
	   TIMER0_INIT() ;
		LED_INIT(NORMAL_GREEN_PIN , NORMAL_PORT  ) ;
		LED_INIT(NORMAL_YELLOW_PIN , NORMAL_PORT  ) ;
		LED_INIT(NORMAL_RED_PIN   , NORMAL_PORT  ) ;
		LED_INIT(PEDESTRIAN_GREEN_PIN , PEDESTRIAN_PORT)  ;
		LED_INIT(PEDESTRIAN_RED_PIN , PEDESTRIAN_PORT)  ;
		LED_INIT(PEDESTRIAN_YELLOW_PIN , PEDESTRIAN_PORT)  ;
		BUTTON_Interupt ()  ;
}
