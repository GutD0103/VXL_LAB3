/*
 * todo.c
 *
 *  Created on: Oct 26, 2022
 *      Author: ntdat
 */


#include "todo.h"

float value = 0.5;
int temp = 0;
int blink = 10;

int state_MODE1_x = 0;
int state_MODE1_y = 0;
int state_MODE2 = 0;
int state_MODE3 = 0;
int state_MODE4 = 0;
int counter_x;
int counter_y;
void todoMODE1(){
	if(timer1_flag == 1){
		counter_x--;
		counter_y--;
		setTimer1(1000);
	}
	switch (state_MODE1_x){
		case 0 :
			if(timer1_flag == 1){
				counter_x = 5;
				state_MODE1_x = 1;
			}
			break;
		case 1:
			ledredON_x();
			updateClockBuffer(2, counter_x);
			if(counter_x == 0){
				counter_x = 3;
				state_MODE1_x = 2;
			}
			break;
		case 2:
			ledgreenON_x();
			updateClockBuffer(2,counter_x );
			if(counter_x == 0){
				counter_x = 2;
				state_MODE1_x = 3;
			}
			break;
		case 3:
			ledyellowON_x();
			updateClockBuffer(2, counter_x);
			if(counter_x == 0){
				counter_x = 5;
				state_MODE1_x = 1;
			}
			break;
		default:
			break;

	}
	switch (state_MODE1_y){
		case 0 :
			if(timer1_flag == 1){
				counter_y = 3;
				state_MODE1_y = 2;
			}
			break;
		case 1:
			ledredON_y();
			updateClockBuffer(3, counter_y);
			if(counter_y == 0){
				counter_y = 3;
				state_MODE1_y = 2;
			}
			break;
		case 2:
			ledgreenON_y();
			updateClockBuffer(3, counter_y);
			if(counter_y == 0){
				counter_y = 2;
				state_MODE1_y = 3;
			}
			break;
		case 3:
			ledyellowON_y();
			updateClockBuffer(3, counter_y );
			if(counter_y == 0){
				counter_y = 5;
				state_MODE1_y = 1;
			}
			break;
		default:
			break;

	}
}

void todoMODE2(){
	updateClockBuffer(2, temp/10);
	updateClockBuffer(3, temp%10);
	if(timer1_flag == 1){
		ledredON();
		setTimer2(5);
		setTimer1(value*1000);
	}
	if(timer2_flag == 1){
		ledOFF();
	}
	if(isButton2PRESS() == 1){
		temp ++;
		if(temp >= 100){
			temp = 1;
		}
	}
	if(isButton3PRESS() == 1){
		value = temp;
	}
}

void todoMODE3(){
	updateClockBuffer(2, temp/10);
	updateClockBuffer(3, temp%10);
	if(timer1_flag == 1){
		ledyellowON();
		setTimer2(5);
		setTimer1(value*1000);
	}
	if(timer2_flag == 1){
		ledOFF();
	}
	if(isButton2PRESS() == 1){
		temp ++;
		if(temp >= 100){
			temp = 1;
		}
	}
	if(isButton3PRESS() == 1){
		value = temp;
	}
}

void todoMODE4(){
	updateClockBuffer(2, temp/10);
	updateClockBuffer(3, temp%10);
	if(timer1_flag == 1){
		ledgreenON();
		setTimer2(5);
		setTimer1(value*1000);
	}
	if(timer2_flag == 1){
		ledOFF();
	}
	if(isButton2PRESS() == 1){
		temp ++;
		if(temp >= 100){
			temp = 1;
		}
	}
	if(isButton3PRESS() == 1){
		value = temp;
	}
}
