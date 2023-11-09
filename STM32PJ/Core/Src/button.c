/*
 * button.c
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */


#include "button.h"

int buttonLastStage[NO_OF_BUTTONS];
int buttonDebounce0[NO_OF_BUTTONS];
int buttonDebounce1[NO_OF_BUTTONS];
int buttonDebounce2[NO_OF_BUTTONS];
int button_flag[NO_OF_BUTTONS];
int TimerForKeyPressed[NO_OF_BUTTONS];


void Init()
{
	for (int i = 0; i < NO_OF_BUTTONS; i++)
	{
		buttonDebounce0[i] = NORMAL_STATE;
		buttonDebounce1[i] = NORMAL_STATE;
		buttonDebounce2[i] = NORMAL_STATE;
		buttonLastStage[i] = NORMAL_STATE;
		button_flag[i] = 0;
		TimerForKeyPressed[i] = 200;
	}
}


int isButtonPressed(int idx)
{
	if (button_flag[idx] == 1)
	{
		button_flag[idx] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int idx)
{
	button_flag[idx] = 1;

}

void getKeyInput()
{
	for (int i = 0; i < NO_OF_BUTTONS; i++)
	{
		buttonDebounce0[i] = buttonDebounce1[i];
		buttonDebounce1[i] = buttonDebounce2[i];
		switch(i)
		{
			case 0:
				buttonDebounce2[i] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
				break;
			case 1:
				buttonDebounce2[i] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
				break;
			case 2:
				buttonDebounce2[i] = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
				break;
			default:
				break;
		}
		if (buttonDebounce0[i] == buttonDebounce1[i] && buttonDebounce1[i] == buttonDebounce2[i])
		{
			if (buttonLastStage[i] != buttonDebounce2[i])
			{
				buttonLastStage[i] = buttonDebounce2[i];
				if (buttonDebounce2[i] == PRESSED_STATE)
				{
					//TODO
					subKeyProcess(i);
					TimerForKeyPressed[i] = 200;
				}
				else
				{
					buttonLastStage[i] = NORMAL_STATE;
				}
			}
		}

	}
}
