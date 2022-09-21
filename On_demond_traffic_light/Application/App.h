/*
 * App.h
 *
 *  Created on: Sep 8, 2022
 *      Author: Abdelrahman M Leihty
 */

#ifndef APPLICATION_APP_H_
#define APPLICATION_APP_H_
#include "../MCAL/Timer/timer.h"
#include <avr/interrupt.h>
#include "../ECUAL/LED/led.h"
#include "../ECUAL/BUTTON/button.h"
extern uint8 flag  ;
void App_Start () ;
void App_Init () ;

#endif /* APPLICATION_APP_H_ */
