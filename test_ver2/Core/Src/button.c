/*
 * button.c
 *
 *  Created on: Oct 24, 2022
 *      Author: ntdat
 */

#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

int TimeForKeyPress = 200;

void subKeyProcess1(){
	button1_flag = 1;
}
int isButton1PRESS(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess2(){
	button2_flag = 1;
}

int isButton2PRESS(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess3(){
	button3_flag = 1;
}

int isButton3PRESS(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}


void getKeyInput(){
	//BUTTON1
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESS_STATE){
				//TODO
				subKeyProcess1();
				TimeForKeyPress = 200;
			}
		}else{
				TimeForKeyPress --;
				if(TimeForKeyPress == 0){
					KeyReg3 = NORMAL_STATE;
				}
		}
	}
	//BUTTON2
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
	if((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6)){
		if(KeyReg7 != KeyReg6){
			KeyReg7 = KeyReg6;
			if(KeyReg6 == PRESS_STATE){
				//TODO
				subKeyProcess2();
				TimeForKeyPress = 200;
			}
		}else{
				TimeForKeyPress --;
				if(TimeForKeyPress == 0){
					KeyReg7 = NORMAL_STATE;
				}
		}
	}
	// BUTTON3
	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;
	KeyReg10 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
	if((KeyReg8 == KeyReg9) && (KeyReg10 == KeyReg9)){
		if(KeyReg11 != KeyReg10){
			KeyReg11 = KeyReg10;
			if(KeyReg10 == PRESS_STATE){
				//TODO
				subKeyProcess3();
				TimeForKeyPress = 200;
			}
		}else{
				TimeForKeyPress --;
				if(TimeForKeyPress == 0){
					KeyReg11 = NORMAL_STATE;
				}
		}
	}
}
