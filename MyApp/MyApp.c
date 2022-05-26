#include "AllLib.h"

extern  UART_HandleTypeDef huart1;
extern  TIM_HandleTypeDef htim17;
extern  TIM_HandleTypeDef htim15;
extern  TIM_HandleTypeDef htim6;
extern  TIM_HandleTypeDef htim16;
extern  I2C_HandleTypeDef hi2c2;


extern uart_BufferTypedef smsBuffer;
extern master_Typedef masterNumber;
















//setting Before Init---------------------------------------------------------------
void SetUpBeforeInit(void)
{
	HAL_FLASH_Unlock();
}





//setting Affter Init---------------------------------------------------------------
void SetUpAffterInit(void)
{
	//enable power key on gsm --------------------------------------------------------
		SIM_SimCom_PowerKey_En();
	//--------------------------------------------------------------------------------
	//usatr enable--------------------------------------------------------------------
		UART_Recive_Reset();
	//--------------------------------------------------------------------------------
	HAL_TIM_Base_Start_IT(&htim6);
	HAL_TIM_Base_Start_IT(&htim16);
	HAL_TIM_Base_Start(&htim17);
	HAL_TIM_Base_Start(&htim15);
	EE_Init();
	rtcInit(&hi2c2);
	//setDateTime("2020-08-24 12:47:20",19);
	//eepromReadMasterNumberData();
	netLightFlagsBeforMainLoop();
	EE_eepromReadAllData();
	
}
//Wile(True)-----------------------------------------------------------------------
void Loop(void)
{
	
	if(Read_Sms())
	{
		MST_opratingMasterFunction();
		
			
		SLV_slaveOprationFunction();
		
		SIM_delet_read_sms();
		
	}

	
	
	UART_clear_Rx_Buffer(strlen((char*)smsBuffer.Buffer1));
	UART_clear_Rx_Buffer_copy(strlen((char*)smsBuffer.Buffer2));
	HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
	HAL_Delay(1000);
}



//Timer_interupt1-------------------------------------------------------------------
//1s
void timerCalleBake1(void)
{
	netLightTimingState();
}
//Timer_interupt2-------------------------------------------------------------------
//1s
void timerCalleBake2(void)
{
	
	
	
}
//Timer_interupt3-------------------------------------------------------------------
void timerCalleBake3(void)
{
	
	
	
}
//----------------------------------------------------------------------------------

void netLight_callBack_interrupt(void)
{
	netLightCheckSignalInterrupt();	
}
//----------------------------------------------------------------------------------





