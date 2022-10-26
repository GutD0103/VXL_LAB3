/*
 * fsm_automatic.c
 *
 *  Created on: Oct 24, 2022
 *      Author: ntdat
 */

#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(status){
		case INIT:
					ledON();
					display7SEG1(8);
					display7SEG2(8);
					display7SEG3(8);
					display7SEG4(8);
					if(isButton1PRESS() == 1){
						status = MODE_1;
						value = 0.5;
						setTimer1(500);
					}
					break;
		case MODE_1:
					todoMODE1();
					if(isButton1PRESS() == 1){
						status = MODE_2;
						value = 0.5;
						temp = 0;
						setTimer1(500);
					}
					break;
		case MODE_2:
					todoMODE2();
					if(isButton1PRESS() == 1){
						status = MODE_3;
						value = 0.5;
						temp = 0;
						setTimer1(500);
					}
					break;
		case MODE_3:
					todoMODE3();
					if(isButton1PRESS() == 1){
						status = MODE_4;
						value = 0.5;
						temp = 0;
						setTimer1(500);
					}
					break;
		case MODE_4:
					todoMODE4();
					if(isButton1PRESS() == 1){
						status = MODE_1;
						state_MODE1 = 0;
					}
					break;
		default:
					break;
	}
};
