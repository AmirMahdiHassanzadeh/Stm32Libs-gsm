#include "main.h"
#include "Led_Buzzer.h"


void Buzzer(int delay_on,int delay_off)
{
	HAL_GPIO_WritePin(Buzzer_GPIO_Port,Buzzer_Pin,GPIO_PIN_SET);
	HAL_Delay(delay_on);
	HAL_GPIO_WritePin(Buzzer_GPIO_Port,Buzzer_Pin,GPIO_PIN_RESET);
	HAL_Delay(delay_off);
}
void flasher(int j,int delay_on, int delay_off)
{
	for(int i = 1 ; i <= j ; i++ )
	{
		HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
		HAL_Delay(delay_on);
		HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
		HAL_Delay(delay_off);
	}
}
