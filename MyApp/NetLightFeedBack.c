#include "AllLib.h"

extern  TIM_HandleTypeDef htim17;

struct netLight_t
{
	char timeNetLightReseter;
	char timeNetLightReseter_flag;
	uint16_t faling;
	uint16_t rising;
}netLight;


void netLightFlagsBeforMainLoop(void)
{
	while(1)
	{
		HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
		HAL_Delay(100);
		if(netLight.timeNetLightReseter_flag == 1 )break;
	}
	
}


void netLightTimingState (void)
{
	static char state=0;
	if(netLight.timeNetLightReseter_flag==0)netLight.timeNetLightReseter++;
	if(netLight.timeNetLightReseter >30 )netLight.timeNetLightReseter=0;
	if(netLight.timeNetLightReseter_flag==2)
	{
		switch (state)
		{
			case 0 : 
				HAL_GPIO_WritePin(GSM_ON_OFF_GPIO_Port,GSM_ON_OFF_Pin,GPIO_PIN_RESET);
			state=1;
			break;
			case 1 : 
				HAL_GPIO_WritePin(GSM_ON_OFF_GPIO_Port,GSM_ON_OFF_Pin,GPIO_PIN_SET);
			state=2;
			break;
			case 2 : 
				HAL_GPIO_WritePin(SimCom_PowerKey_GPIO_Port,SimCom_PowerKey_Pin,GPIO_PIN_SET);
			state = 3;
			break;
			case 3 : 
				HAL_GPIO_WritePin(SimCom_PowerKey_GPIO_Port,SimCom_PowerKey_Pin,GPIO_PIN_RESET);
			state = 0;
			netLight.timeNetLightReseter_flag=0;
			netLight.timeNetLightReseter=0;
			break;
			
		}
	}
}


void netLightCheckSignalInterrupt(void)
{
		static char state=0;
	
	switch(state)
	{
		case 0 :
			
			netLight.rising= __HAL_TIM_GET_COUNTER(&htim17);
			state=1;
		break;
		case 1:
			netLight.faling = __HAL_TIM_GET_COUNTER(&htim17);
			state=0;
	}
	if(netLight.rising <= 810 && netLight.rising >=780 && netLight.faling >= 55 &&netLight.faling <= 65)netLight.timeNetLightReseter_flag=0;
	else if(netLight.rising >= 2900 &&netLight.rising <= 3100 && netLight.faling >= 55 &&netLight.faling <= 65)
	{
		netLight.timeNetLightReseter_flag=1;
		netLight.timeNetLightReseter=0;
	}
	if(netLight.timeNetLightReseter>=30)
	{
		netLight.timeNetLightReseter_flag=2;
	}
	__HAL_TIM_SET_COUNTER(&htim17,0);	
}


