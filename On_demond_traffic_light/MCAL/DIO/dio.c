/*
 * dio.c
 *
 * Created: 9/6/2022 12:29:12 AM
 *  Author: Abdelrahman M Leithy
 */
#include "dio.h"

void PIN_DIRECTION (uint8 pin_num , uint8 port_num  , DIO_PIN_DIRECTION direction) {
	if((pin_num >= PIN_NUM)||(port_num >= PORT_NUM)) {
		// DO NOTHING error
	}
	else {
	switch (port_num) {
	case PORTA_ID  :
	if(direction == PIN_INPUT) {
    CLEAR_BIT(DDRA , pin_num) ;

	}
	else {
		SET_BIT(DDRA , pin_num) ;

	}
	break ;
	case PORTB_ID :
	if(direction == PIN_INPUT) {
		CLEAR_BIT (DDRB , pin_num) ;

	}
	else {
		SET_BIT(DDRB , pin_num) ;

	}
	break;
	case PORTC_ID :
	if(direction == PIN_INPUT) {
		CLEAR_BIT (DDRC , pin_num) ;

	}
	else {
		SET_BIT(DDRC , pin_num) ;

	}
	break;
	case PORTD_ID :
	if(direction == PIN_INPUT) {
		CLEAR_BIT (DDRD , pin_num) ;

	}
	else {
		SET_BIT(DDRD , pin_num) ;

	}
	break  ;


	}
}

}
void WRITE_PIN (uint8 pin_num , uint8 port_num , uint8 value )  {
	if((pin_num >= PIN_NUM)||(port_num >= PORT_NUM)) {
		// DO NOTHING ERROR
	}
	else {
switch (port_num) {
	case PORTA_ID  :
	if(value == LOGIC_LOW) {
		CLEAR_BIT (PORTA , pin_num) ;

	}
	else {
		SET_BIT(PORTA  , pin_num) ;

	}
	break ;
	case PORTB_ID :
		if(value == LOGIC_LOW) {
			CLEAR_BIT (PORTB , pin_num) ;

		}
		else {
			SET_BIT(PORTB  , pin_num) ;

		}
	break;
	case PORTC_ID :
			if(value == LOGIC_LOW) {
				CLEAR_BIT (PORTC , pin_num) ;

			}
			else {
				SET_BIT(PORTC  , pin_num) ;

			}
	break;
	case PORTD_ID :
	if(value == LOGIC_LOW) {
		CLEAR_BIT (PORTD , pin_num) ;

	}
	else {
		SET_BIT(PORTD , pin_num) ;

	}
	break  ;



}

	}

}
uint8 READ_PIN (uint8 pin_num , uint8 port_num ) {
	uint8 value = LOGIC_LOW  ;
	if((pin_num >= PIN_NUM)||(port_num >= PORT_NUM)) {
		// DO NOTHING error
	}
	else {
		switch(port_num) {
		case PORTA_ID :
		if(BIT_IS_SET(PINA , pin_num)) {
			value = LOGIC_HIGH ;
		}
		else {
			value = LOGIC_LOW ;

		}
		break;
		case PORTB_ID :
		if(BIT_IS_SET(PINB , pin_num)) {
			value = LOGIC_HIGH ;
		}
		else {
			value = LOGIC_LOW ;

		}
		break;
		case PORTC_ID :
		if(BIT_IS_SET(PINC , pin_num)) {
			value = LOGIC_HIGH ;
		}
		else {
			value = LOGIC_LOW ;

		}
		break ;
		case PORTD_ID :
		if(BIT_IS_SET(PIND , pin_num)) {
			value = LOGIC_HIGH ;
		}
		else {
			value = LOGIC_LOW ;

		}
		break;



		}

	}
	return value ;
}
void PORT_DIRECTION (uint8 port_num , DIO_PORT_DIRECTION direction )  {
	if(port_num >= PORT_NUM){
  // error
	}

	else {
		switch(port_num) {
			case PORTA_ID :
			DDRA = direction  ;
			break ;
			case PORTB_ID :
			DDRB = direction  ;
			break ;
			case PORTC_ID :
			DDRC = direction  ;
			break ;
			case PORTD_ID :
			DDRD = direction  ;
			break ;


		}


	}
}
void WRITE_PORT (uint8 port_num  , uint8 value )  {
	if(port_num >= PORT_NUM){
  // error
	}

	else {
		switch (port_num) {
			case PORTA_ID :
			PORTA = value ;
			break ;
			case PORTB_ID :
			PORTB = value ;
			break ;
			case PORTC_ID :
			PORTC = value ;
			break ;
			case PORTD_ID :
			PORTD = value  ;
			break ;


		}
	}
}
uint8 READ_PORT(uint8 port_num)  {
	uint8 port_value = LOGIC_LOW ;
	if(port_num >= PORT_NUM){
		// DO_NOTHING ERROR
	}

	else {
		switch (port_num) {
			case PORTA_ID :
			port_value = PINA  ;
			break ;
			case PORTB_ID :
			port_value = PINB  ;
			break ;
			case PORTC_ID :
			port_value = PINC  ;
			break ;
			case PORTD_ID :
			port_value = PIND  ;
			break ;


	}
}
return port_value ;
}
