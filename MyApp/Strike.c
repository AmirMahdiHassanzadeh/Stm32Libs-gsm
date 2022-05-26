#include "Strike.h"
#include "main.h"
#include "number_setting.h"
#include <stdint.h>
#include <string.h>
#include "define.h"

#define STRIKE_11 11
#define STRIKE_12 12
#define STRIKE_13 13
#define STRIKE_14 14
#define STRIKE_15 15
#define STRIKE_16 16
#define STRIKE_17 17
#define STRIKE_18 18
#define STRIKE_19 19
#define STRIKE_20 20
#define STRIKE_21 21
#define STRIKE_22 22
#define STRIKE_23 23
#define STRIKE_24 24
#define STRIKE_25 25
#define STRIKE_26 26
#define STRIKE_27 27
#define STRIKE_28 28
#define STRIKE_29 29
#define STRIKE_30 30
#define STRIKE_31 31
#define STRIKE_32 32

extern	uint8_t  Rx_Buffer[]; //Rx_Buffer baraye jam kardan hameye karakter ha ...
extern  uint8_t  Rx_Buffer_COPY[];	//(char*)Rx_Buffer_COPY baraye copy kardan Rx_Buffer ast ...

/*
اين تابع تابع ضربه است 
*/
/*
SMS==> ist1
sms==> est1
*/




void iStrike( char iStrikFlag[3])
{
	iStrikFlag[2]=0;
	iStrikFlag[2]=thisNumberIsSlaveORMaster();
	if(iStrikFlag[2]!=0)
	{
		if(strstr((char*)Rx_Buffer_COPY,"ist1"))
		{
			iStrikFlag[0]=STRIKE_1;
		}
		if(strstr((char*)Rx_Buffer_COPY,"ist2"))
		{
			iStrikFlag[1]=STRIKE_2;
		}
		
	}
	
}

void opratingStrickFunctionForMaster(){
	char internalStrick[3];
	iStrike(internalStrick);

	if(internalStrick[0]==STRIKE_1){
		HAL_GPIO_WritePin(Relay_1_GPIO_Port,Relay_1_Pin,GPIO_PIN_SET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(Relay_1_GPIO_Port,Relay_1_Pin,GPIO_PIN_RESET);
		internalStrick[0]=0;
	}

	if(internalStrick[1]==STRIKE_2){
		HAL_GPIO_WritePin(Relay_2_GPIO_Port,Relay_2_Pin,GPIO_PIN_SET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(Relay_2_GPIO_Port,Relay_2_Pin,GPIO_PIN_RESET);
		internalStrick[1]=0;
	}
}



