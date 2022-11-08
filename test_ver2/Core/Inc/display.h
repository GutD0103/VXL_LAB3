/*
 * display.h
 *
 *  Created on: Oct 26, 2022
 *      Author: ntdat
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "main.h"
#define MAX_LED 4

void ledON();
void ledOFF();

void ledredON_x();
void ledgreenON_x();
void ledyellowON_x();

void ledredON_y();
void ledgreenON_y();
void ledyellowON_y();

void ledredON();
void ledgreenON();
void ledyellowON();

void display7SEG(int num);
void update7SEG ( int index ) ;
void updateClockBuffer (int index, int value);


#endif /* INC_DISPLAY_H_ */
