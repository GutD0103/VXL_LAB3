/*
 * button.h
 *
 *  Created on: Oct 24, 2022
 *      Author: ntdat
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESS_STATE GPIO_PIN_RESET

#include "main.h"

int isButton1PRESS();
int isButton2PRESS();
int isButton3PRESS();
void getKeyInput();

#endif /* INC_BUTTON_H_ */
