/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2023
 *      Author: CAO NGUYEN
 */


#include "fsm_manual.h"

void fsm_manual_run()
{
	switch (status)
	{

		case MAN_RED:

			blinkingLed(RED);
			updateLedBuffer(mode, redDuration);
			if (isButtonPressed(0))
			{
				status = MAN_AMBER;
				mode = 3;
			}
			break;
		case MAN_AMBER:
			blinkingLed(AMBER);
			updateLedBuffer(mode, amberDuration);
			if (isButtonPressed(0))
			{
				status = MAN_GREEN;
				mode = 4;
			}
			break;
		case MAN_GREEN:
			blinkingLed(GREEN);
			updateLedBuffer(mode, greenDuration);
			if (isButtonPressed(0))
			{
				status = RED_GREEN;
				mode = 1;
			}
			break;
		default:
			break;
	}
}
