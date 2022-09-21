/*
 * dio.h
 *  file : DIO Driver for AVR Atmega32
 * Created: 9/6/2022 12:28:58 AM
 *  Author: Abdelrahman M Leithy
 */


#ifndef DIO_H_
#define DIO_H_
/******************** INCLUDE FILES *******************************/
#include "std_types.h"
#include "common_macros.h"
#include <avr/io.h>
/******************** DEFINES ************************************/
#define PORT_NUM   4
#define PIN_NUM    8
/***************** PORT DEFINES *********************************/
#define PORTA_ID      0
#define PORTB_ID      1
#define PORTC_ID      2
#define PORTD_ID      3
/***************** PIN DEFINES **********************************/
#define PIN0_ID                0
#define PIN1_ID                1
#define PIN2_ID                2
#define PIN3_ID                3
#define PIN4_ID                4
#define PIN5_ID                5
#define PIN6_ID                6
#define PIN7_ID                7
/******************** TYPES DECLERATIONS **********************/

typedef enum {

	PIN_INPUT , PIN_OUTPUT

	} DIO_PIN_DIRECTION ;
/******************** TYPES DECLERATIONS **********************/
typedef enum {

	PORT_INPUT , PORT_OUTPUT = 0xFF

} DIO_PORT_DIRECTION ;

/************ FUNCTIONS PROTOTYPE *****************************/
void PIN_DIRECTION (uint8 pin_num , uint8 port_num  , DIO_PIN_DIRECTION direction) ;
void WRITE_PIN (uint8 pin_num , uint8 port_num , uint8 value ) ;
uint8 READ_PIN (uint8 pin_num , uint8 port_num ) ;
void PORT_DIRECTION (uint8 port_num , DIO_PORT_DIRECTION direction ) ;
void WRITE_PORT (uint8 port_num  , uint8 value ) ;
uint8 READ_PORT(uint8 port_num) ;
#endif /* DIO_H_ */
