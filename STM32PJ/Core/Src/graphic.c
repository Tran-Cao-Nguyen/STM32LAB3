/*
 * graphic.c
 *
 *  Created on: Nov 8, 2023
 *      Author: CAO NGUYEN
 */
#include "graphic.h"


void display7SEG(int num)
{
	if(num == 0)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 0);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 1);
	}
	if(num == 1)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 1);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 1);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 1);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 1);
	}
	if(num == 2)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 1);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 0);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 1);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 3)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 1);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 4)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 1);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 1);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 5)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 1);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 6)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 1);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 0);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 7)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 1);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 1);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 1);
	}
	if(num == 8)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 0);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
	if(num == 9)
	{
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, 0);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, 0);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, 0);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, 0);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, 1);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, 0);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, 0);
	}
}



void clearAllLed()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
	HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 1);
	HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
}


void turnOnLed(enum LED led)
{
	switch (led)
	{
		case RED:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 1);
			break;
		case RED2:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 1);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
			HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 1);
			break;
		case GREEN2:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 0);
			HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 1);
			break;
		case AMBER:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 0);
			break;
		case AMBER2:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 0);
			break;
		default:
			break;
	}
}
