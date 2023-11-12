/*
 * graphic.c
 *
 *  Created on: Nov 8, 2023
 *      Author: CAO NGUYEN
 */
#include "graphic.h"

int led_buffer[4] = {0, 0, 0, 0};

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


void update7SEG ( int index ){
	switch ( index ){
	case 0:
		// Display the first 7 SEG with led_buffer [0]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[0]);
		break ;
	case 1:
		// Display the second 7 SEG with led_buffer [1]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[1]);
		break ;
	case 2:
		// Display the third 7 SEG with led_buffer [2]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		display7SEG(led_buffer[2]);
		break ;
	case 3:
		// Display the forth 7 SEG with led_buffer [3]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
		display7SEG(led_buffer[3]);
		break ;
	default :
		break ;
	}
}

void updateLedBuffer(int value1, int value2)
{
	led_buffer[0] = value1 / 10;
	led_buffer[1] = value1 % 10;
	led_buffer[2] = value2 / 10;
	led_buffer[3] = value2 % 10;
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
void blinkingLed(enum LED led)
{
	switch (led)
	{
		case RED:
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 1);

			HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 1);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
			HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
			HAL_GPIO_WritePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin, 1);

			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
			HAL_GPIO_WritePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin, 1);
			break;
		case AMBER:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
			HAL_GPIO_TogglePin(LED_AMBER_GPIO_Port, LED_AMBER_Pin);

			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_TogglePin(LED_AMBER2_GPIO_Port, LED_AMBER2_Pin);
			break;
		default:
			break;
		}
}
