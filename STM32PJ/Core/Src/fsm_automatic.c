/*
 * fsm_automatic.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */


#include "fsm_automatic.h"


void fsm_automatic_run(){
	switch (status)
	{
		case INIT:
			clearAllLed();
			status = RED_GREEN;
			setTimer1(GREEN_DURATION);
			break;
		case RED_GREEN:
			turnOnLed(RED);
			turnOnLed(GREEN2);
			if (timer1_flag == 1)
			{
				status = RED_AMBER;
				setTimer1(AMBER_DURATION);
			}
			break;
		case RED_AMBER:
			turnOnLed(AMBER2);
			if (timer1_flag == 1)
			{
				status = GREEN_RED;
				setTimer1(GREEN_DURATION);
			}
			break;
		case GREEN_RED:
			turnOnLed(GREEN);
			turnOnLed(RED2);
			if (timer1_flag == 1)
			{
				status = AMBER_RED;
				setTimer1(AMBER_DURATION);
			}
			break;
		case AMBER_RED:
			turnOnLed(AMBER);
			if (timer1_flag == 1)
			{
				status = RED_GREEN;
				setTimer1(GREEN_DURATION);
			}
			break;
		default:
			break;
	}
}
