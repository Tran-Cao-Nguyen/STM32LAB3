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

#define MAN_RED 11
#define MAN_GREEN 12
#define MAN_AMBER 13

extern int redDuration;
extern int greenDuration;
extern int amberDuration;

extern int redCounter;
extern int greenCounter;
extern int amberCounter;

extern int road1;
extern int road2;

extern int mode;


extern int status;

#endif /* INC_GLOBAL_H_ */
