/*
 * led.c
 *
 * Created: 9/6/2022 12:27:10 AM
 *  Author: Abdelrahman M leithy
 */
#include "led.h"
void LED_INIT(uint8 pin_num , uint8 port_num)  {
PIN_DIRECTION(pin_num , port_num , PIN_OUTPUT) ;
WRITE_PIN(pin_num , port_num , LOGIC_LOW) ;
}
void LED_OFF (uint8 pin_num , uint8 port_num ) {
   WRITE_PIN(pin_num , port_num , LOGIC_LOW) ;
}
void LED_ON (uint8 pin_num , uint8 port_num ) {
	WRITE_PIN(pin_num , port_num , LOGIC_HIGH) ;

}
void LED_TOGGLE (uint8 pin_num , uint8 port_num)  {
	if((pin_num >=PIN_NUM)||(port_num >= PORT_NUM)) {
		//DO NOTHING
	}
	else {
	switch(port_num) {
		case PORTA_ID :
		TOGGLE_BIT(PORTA , pin_num) ;
		break ;
		case PORTB_ID :
		TOGGLE_BIT(PORTB , pin_num) ;
		break ;
		case PORTC_ID :
		TOGGLE_BIT(PORTC , pin_num) ;
		break ;
		case PORTD_ID :
		TOGGLE_BIT(PORTD , pin_num) ;
		break ;

	}
	}

}
