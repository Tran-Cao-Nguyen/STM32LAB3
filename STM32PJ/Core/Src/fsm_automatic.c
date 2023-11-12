/*
 * fsm_automatic.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */


#include "fsm_automatic.h"

void fsm_init()
{
	redCounter = redDuration;
	greenCounter = greenDuration;
	amberCounter = amberDuration;
	mode = 1;
}

void fsm_automatic_run(){
	if (isButtonPressed(0))
	{
		clearAllLed();
		status = MAN_RED;
		mode = 2;
	}
	switch (status)
	{
		case INIT:
			clearAllLed();
			status = RED_GREEN;
			fsm_init();

			break;
		case RED_GREEN:

			turnOnLed(RED);
			turnOnLed(GREEN2);

			road1 = redCounter;
			road2 = greenCounter;

			redCounter--;
			greenCounter--;


			if (greenCounter <= 0)
			{
				status = RED_AMBER;
				amberCounter = amberDuration;
			}
			break;
		case RED_AMBER:
			turnOnLed(AMBER2);

			road1 = redCounter;
			road2 = amberCounter;

			redCounter--;
			amberCounter--;

			if (redCounter <= 0)
			{
				status = GREEN_RED;

				redCounter = redDuration;
				greenCounter = greenDuration;

			}
			break;
		case GREEN_RED:
			turnOnLed(GREEN);
			turnOnLed(RED2);

			road1 = greenCounter;
			road2 = redCounter;

			redCounter--;
			greenCounter--;

			if (greenCounter <= 0)
			{
				status = AMBER_RED;
				amberCounter = amberDuration;

			}
			break;
		case AMBER_RED:
			turnOnLed(AMBER);

			road1 = amberCounter;
			road2 = redCounter;

			redCounter--;
			amberCounter--;

			if (redCounter <= 0)
			{
				status = RED_GREEN;

				redCounter = redDuration;
				greenCounter = greenDuration;

			}
			break;
		default:
			break;
	}

}
