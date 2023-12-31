/*
 * software_timer.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */
#include "software_timer.h"

int timer1_flag = 0;
int counter1 = 0;

int timer2_flag = 0;
int counter2 = 0;

int timer3_flag = 0;
int counter3 = 0;

void setTimer1(int duration)
{
	counter1 = duration / TICK;
	timer1_flag = 0;
}

void setTimer2(int duration)
{
	counter2 = duration / TICK;
	timer2_flag = 0;
}

void setTimer3(int duration)
{
	counter3 = duration / TICK;
	timer3_flag = 0;
}


void timerRun()
{
	if (counter1 >= 0)
	{
		counter1--;
		if(counter1 <= 0)
		{
			timer1_flag = 1;
		}
	}

	if (counter2 >= 0)
	{
		counter2--;
		if (counter2 <= 0)
		{
			timer2_flag = 1;
		}
	}
	if (counter3 >= 0)
	{
		counter3--;
		if (counter3 <= 0)
		{
			timer3_flag = 1;
		}
	}
}
