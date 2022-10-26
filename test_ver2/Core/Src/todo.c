/*
 * todo.c
 *
 *  Created on: Oct 26, 2022
 *      Author: ntdat
 */


#include "todo.h"

float value = 0.5;
int temp = 0;

int state_MODE1 = 0;

int counter1;
void todoMODE1(){

	switch (state_MODE1){
		case 0 :
			ledOFF();
			if(timer1_flag == 1){
				state_MODE1 = 1;
				counter1 = 5;
				setTimer2(100);
				setTimer1(5000);
			}
			break;
		case 1:
			ledredON();
			display7SEG1(counter1);
			display7SEG2(counter1);
			display7SEG3(counter1);
			display7SEG4(counter1);
			if(timer2_flag == 1){
				counter1--;
				setTimer2(100);
			}
			if(timer1_flag == 1){
				state_MODE1 = 2;
				counter1 = 3;
				setTimer2(100);
				setTimer1(3000);
			}
			break;
		case 2:
			ledgreenON();
			display7SEG1(counter1);
			display7SEG2(counter1);
			display7SEG3(counter1);
			display7SEG4(counter1);
			if(timer2_flag == 1){
				counter1--;
				setTimer2(100);
			}
			if(timer1_flag == 1){
				state_MODE1 = 3;
				counter1 = 2;
				setTimer2(100);
				setTimer1(2000);
			}
			break;
		case 3:
			ledyellowON();
			display7SEG1(counter1);
			display7SEG2(counter1);
			display7SEG3(counter1);
			display7SEG4(counter1);
			if(timer2_flag == 1){
				counter1--;
				setTimer2(100);
			}
			if(timer1_flag == 1){
				state_MODE1 = 1;
				counter1 = 5;
				setTimer2(100);
				setTimer1(5000);
			}
			break;

		default:
			break;

	}
}

void todoMODE2(){
	display7SEG1(0);
	display7SEG2(2);
	display7SEG3(temp/10);
	display7SEG4(temp%10);
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
	display7SEG1(0);
	display7SEG2(3);
	display7SEG3(temp/10);
	display7SEG4(temp%10);
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
	display7SEG1(0);
	display7SEG2(4);
	display7SEG3(temp/10);
	display7SEG4(temp%10);
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
