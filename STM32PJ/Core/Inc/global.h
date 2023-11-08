/*
 * global.h
 *
 *  Created on: Nov 7, 2023
 *      Author: CAO NGUYEN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "software_timer.h"
#include "graphic.h"

#define INIT 0
#define RED_GREEN 1
#define RED_AMBER 2
#define GREEN_RED 3
#define AMBER_RED 4

#define GREEN_DURATION 300
#define AMBER_DURATION 200

extern int status;

#endif /* INC_GLOBAL_H_ */
