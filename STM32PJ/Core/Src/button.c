/*
 * button.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */


#include "button.h"

int button1_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;

// Trạng thái ổn định trước đó
int KeyReg3 = NORMAL_STATE;
int TimerForKeyPressed = 200;

int isButton1Pressed()
{
	if (button1_flag == 1)
	{
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess()
{
	button1_flag = 0;
}

void getKeyInput()
{
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2))
	{
		if (KeyReg3 != KeyReg2)
		{
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE)
			{
				//TODO
				subKeyProcess();
				TimerForKeyPressed = 200;
			}
		}
		else
		{
			TimerForKeyPressed--;
			if (TimerForKeyPressed <= 0)
			{
				//TODO
				KeyReg3 = NORMAL_STATE;
			}

		}
	}
}
