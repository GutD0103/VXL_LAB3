/*
 * display.c
 *
 *  Created on: Oct 26, 2022
 *      Author: ntdat
 */

#include "display.h"
#include "main.h"
#define MAX_LED  4
int led_buffer [MAX_LED];
void ledOFF(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port,LED_RED_X_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port,LED_YELLOW_X_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port,LED_GREEN_X_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port,LED_RED_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port,LED_YELLOW_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port,LED_GREEN_Y_Pin, SET);
}
void ledON(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port,LED_RED_X_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port,LED_YELLOW_X_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port,LED_GREEN_X_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port,LED_RED_Y_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port,LED_YELLOW_Y_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port,LED_GREEN_Y_Pin, RESET);
}
void ledredON_x(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port,LED_RED_X_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port,LED_YELLOW_X_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port,LED_GREEN_X_Pin, SET);
}
void ledgreenON_x(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port,LED_RED_X_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port,LED_YELLOW_X_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port,LED_GREEN_X_Pin, RESET);
}
void ledyellowON_x(){
	HAL_GPIO_WritePin(LED_RED_X_GPIO_Port,LED_RED_X_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_X_GPIO_Port,LED_YELLOW_X_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_X_GPIO_Port,LED_GREEN_X_Pin, SET);
}
void ledredON_y(){
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port,LED_RED_Y_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port,LED_YELLOW_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port,LED_GREEN_Y_Pin, SET);
}
void ledgreenON_y(){
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port,LED_RED_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port,LED_YELLOW_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port,LED_GREEN_Y_Pin, RESET);
}
void ledyellowON_y(){
	HAL_GPIO_WritePin(LED_RED_Y_GPIO_Port,LED_RED_Y_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_Y_GPIO_Port,LED_YELLOW_Y_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_Y_GPIO_Port,LED_GREEN_Y_Pin, SET);
}
void ledredON(){
	ledredON_x();
	ledredON_y();
}
void ledgreenON(){
	ledgreenON_x();
	ledgreenON_y();
}
void ledyellowON(){
	ledyellowON_x();
	ledyellowON_y();
}
void update7SEG ( int index ) {
	switch ( index ) {
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			display7SEG(led_buffer[0]);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, SET);
			break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			display7SEG(led_buffer[1]);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			break ;
		 case 2:
			// Display the third 7 SEG with led_buffer [2]
			display7SEG(led_buffer[2]);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			display7SEG(led_buffer[3]);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,  SET);
			break ;
		default :
			break;
 }
}

void updateClockBuffer (int index, int value)
{
	led_buffer[index] = value;

};

void display7SEG(int num){
	switch(num) {
	  case 0:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 1:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 2:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,SET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 3:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 4:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,SET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	  	break;
	  case 5:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,SET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 6:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,SET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 7:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,SET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,SET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,SET) ;
	    break;
	  case 8:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  case 9:
		  HAL_GPIO_WritePin ( A_GPIO_Port , A_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( B_GPIO_Port , B_Pin ,RESET );
		  HAL_GPIO_WritePin ( C_GPIO_Port , C_Pin ,RESET) ;
		  HAL_GPIO_WritePin ( D_GPIO_Port , D_Pin ,RESET );
		  HAL_GPIO_WritePin ( E_GPIO_Port , E_Pin ,SET) ;
		  HAL_GPIO_WritePin ( F_GPIO_Port , F_Pin ,RESET );
		  HAL_GPIO_WritePin ( G_GPIO_Port , G_Pin ,RESET) ;
	    break;
	  default:
		break;

	}
}
