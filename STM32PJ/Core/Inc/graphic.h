/*
 * graphic.h
 *
 *  Created on: Nov 8, 2023
 *      Author: CAO NGUYEN
 */

#ifndef INC_GRAPHIC_H_
#define INC_GRAPHIC_H_

#include "main.h"
#include "global.h"

enum LED
{
	RED,
	RED2,
	GREEN,
	GREEN2,
	AMBER,
	AMBER2,
};

extern int led_buffer[4];

void display7SEG(int num);
void update7SEG(int index);
void updateLedBuffer();
void clearAllLed();
void turnOnLed(enum LED led);



#endif /* INC_GRAPHIC_H_ */
