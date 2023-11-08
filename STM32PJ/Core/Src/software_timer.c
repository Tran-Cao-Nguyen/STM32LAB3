/*
 * software_timer.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */
#include "software_timer.h"

int timer1_flag = 0;
int counter1 = 0;

void setTimer1(int duration)
{
	counter1 = duration;
	timer1_flag = 0;
}

void timerRun()
{
	if (counter1 > 0)
	{
		counter1--;
		if(counter1 <= 0)
		{
			timer1_flag = 1;
		}
	}
}
