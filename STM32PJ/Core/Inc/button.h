/*
 * button.h
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"


#define NO_OF_BUTTONS 3
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


void initButton();
int isButtonPressed();
void getKeyInput();



#endif /* INC_BUTTON_H_ */
