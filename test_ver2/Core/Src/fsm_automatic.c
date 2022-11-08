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
					updateClockBuffer(0, 8);
					updateClockBuffer(1, 8);
					updateClockBuffer(2, 8);
					updateClockBuffer(3, 8);
					if(isButton1PRESS() == 1){
						state_MODE1_x = 1;
						state_MODE1_y = 2;
						counter_x = 5;
						counter_y = 3;
						updateClockBuffer(0, 0);
						updateClockBuffer(1, 1);
						setTimer1(1000);
						status = MODE_1;
					}
					break;
		case MODE_1:
					todoMODE1();
					if(isButton1PRESS() == 1){
						status = MODE_2;
						value = 0.5;
						temp = 0;
					    setTimer1(500);
						updateClockBuffer(0, 0);
					    updateClockBuffer(1, 2);
					}
					break;
		case MODE_2:
					todoMODE2();
					if(isButton1PRESS() == 1){
						status = MODE_3;
						value = 0.5;
						temp = 0;
					    setTimer1(500);
						updateClockBuffer(0, 0);
						updateClockBuffer(1, 3);
					}
					break;
		case MODE_3:
					todoMODE3();
					if(isButton1PRESS() == 1){
						status = MODE_4;
						value = 0.5;
						temp = 0;
					    setTimer1(500);
						updateClockBuffer(0, 0);
						updateClockBuffer(1, 4);
					}
					break;
		case MODE_4:
					todoMODE4();
					if(isButton1PRESS() == 1){
						state_MODE1_x = 1;
						state_MODE1_y = 2;
						counter_x = 5;
						counter_y = 3;
						updateClockBuffer(0, 0);
						updateClockBuffer(1, 1);
						setTimer1(1000);
						status = MODE_1;
					}
					break;
		default:
					break;
	}
};
