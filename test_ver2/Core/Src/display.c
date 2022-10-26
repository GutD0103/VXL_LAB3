/*
 * display.c
 *
 *  Created on: Oct 26, 2022
 *      Author: ntdat
 */

#include "display.h"
#include "main.h"

void ledOFF(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, SET);
}
void ledON(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, RESET);
}
void ledredON(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, SET);
}
void ledgreenON(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, RESET);
}
void ledyellowON(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, SET);
}

void display7SEG1(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( SEG1_A_GPIO_Port , SEG1_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_B_GPIO_Port , SEG1_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_C_GPIO_Port , SEG1_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG1_D_GPIO_Port , SEG1_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_E_GPIO_Port , SEG1_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG1_F_GPIO_Port , SEG1_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG1_G_GPIO_Port , SEG1_G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}


void display7SEG2(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( SEG2_A_GPIO_Port , SEG2_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_B_GPIO_Port , SEG2_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_C_GPIO_Port , SEG2_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG2_D_GPIO_Port , SEG2_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_E_GPIO_Port , SEG2_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG2_F_GPIO_Port , SEG2_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG2_G_GPIO_Port , SEG2_G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}
void display7SEG3(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( SEG3_A_GPIO_Port , SEG3_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_B_GPIO_Port , SEG3_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_C_GPIO_Port , SEG3_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG3_D_GPIO_Port , SEG3_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_E_GPIO_Port , SEG3_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG3_F_GPIO_Port , SEG3_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG3_G_GPIO_Port , SEG3_G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}
void display7SEG4(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,SET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( SEG4_A_GPIO_Port , SEG4_A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_B_GPIO_Port , SEG4_B_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_C_GPIO_Port , SEG4_C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( SEG4_D_GPIO_Port , SEG4_D_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_E_GPIO_Port , SEG4_E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( SEG4_F_GPIO_Port , SEG4_F_Pin ,RESET );
		  HAL_GPIO_WritePin ( SEG4_G_GPIO_Port , SEG4_G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}

