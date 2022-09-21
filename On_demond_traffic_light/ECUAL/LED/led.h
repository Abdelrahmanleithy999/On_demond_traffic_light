/*
 * led.h
 *
 * Created: 9/6/2022 12:27:45 AM
 *  Author: Abdelrahman M leithy
 */


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/dio.h"
#define NORMAL_GREEN_PIN   PIN0_ID
#define NORMAL_RED_PIN   PIN2_ID
#define NORMAL_YELLOW_PIN   PIN1_ID
#define NORMAL_PORT       PORTA_ID
#define PEDESTRIAN_PORT  PORTB_ID
#define PEDESTRIAN_GREEN_PIN  PIN0_ID
#define PEDESTRIAN_RED_PIN  PIN2_ID
#define PEDESTRIAN_YELLOW_PIN  PIN1_ID
void LED_OFF (uint8 pin_num , uint8 port_num ) ;
void LED_ON (uint8 pin_num , uint8 port_num ) ;
void LED_TOGGLE (uint8 pin_num , uint8 port_num)  ;
void LED_INIT(uint8 pin_num , uint8 port_num)  ;
#endif /* LED_H_ */
