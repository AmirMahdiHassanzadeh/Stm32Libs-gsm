#include "Alllib.h"

void SENSOR_InPut_GPIO(GPIO_TypeDef *GPIOx , uint16_t GPIO_Pin)
{
	HAL_GPIO_DeInit(GPIOx,GPIO_Pin);
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

void SENSOR_OutPut_GPIO(GPIO_TypeDef *GPIOx , uint16_t GPIO_Pin)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

uint8_t DS18B20_Start (void)
{
	signed char  Response = 0;
	SENSOR_OutPut_GPIO(DS18B20_PORT, DS18B20_PIN);   // set the pin as output
	HAL_GPIO_WritePin (DS18B20_PORT, DS18B20_PIN, GPIO_PIN_RESET);  // pull the pin low
	delay_us (480);   // delay_us according to datasheet

	SENSOR_InPut_GPIO(DS18B20_PORT, DS18B20_PIN);    // set the pin as input
	delay_us (80);    // delay_us according to datasheet

	if (!(HAL_GPIO_ReadPin (DS18B20_PORT, DS18B20_PIN))) Response = 1;    // if the pin is low i.e the presence pulse is detected
	else Response = -1;

	delay_us (400); // 480 us delay_us totally.

	return Response;
}

void DS18B20_Write (uint8_t data)
{
	SENSOR_OutPut_GPIO(DS18B20_PORT, DS18B20_PIN);  // set as output

	for (int i=0; i<8; i++)
	{

		if ((data & (1<<i))!=0)  // if the bit is high
		{
			// write 1

			SENSOR_OutPut_GPIO(DS18B20_PORT, DS18B20_PIN);  // set as output
			HAL_GPIO_WritePin (DS18B20_PORT, DS18B20_PIN,GPIO_PIN_RESET);  // pull the pin LOW
			delay_us (1);  // wait for 1 us

			SENSOR_InPut_GPIO(DS18B20_PORT, DS18B20_PIN);  // set as input
			delay_us (50);  // wait for 60 us
		}

		else  // if the bit is low
		{
			// write 0

			SENSOR_OutPut_GPIO(DS18B20_PORT, DS18B20_PIN);
			HAL_GPIO_WritePin (DS18B20_PORT, DS18B20_PIN, GPIO_PIN_RESET);  // pull the pin LOW
			delay_us (50);  // wait for 60 us

			SENSOR_InPut_GPIO(DS18B20_PORT, DS18B20_PIN);
		}
	}
}

uint8_t DS18B20_Read (void)
{
	uint8_t value=0;

	SENSOR_InPut_GPIO(DS18B20_PORT, DS18B20_PIN);

	for (int i=0;i<8;i++)
	{
		SENSOR_OutPut_GPIO(DS18B20_PORT, DS18B20_PIN);   // set as output

		HAL_GPIO_WritePin (DS18B20_PORT, DS18B20_PIN, GPIO_PIN_RESET);  // pull the data pin LOW
		delay_us (1);  // wait for > 1us

		SENSOR_InPut_GPIO(DS18B20_PORT, DS18B20_PIN);  // set as input
		if (HAL_GPIO_ReadPin (DS18B20_PORT, DS18B20_PIN))  // if the pin is HIGH
		{
			value |= 1<<i;  // read = 1
		}
		delay_us (50);  // wait for 60 us
	}
	return value;
}


float SENSOR_Temp_S18B20(void)
{
uint8_t Temp_byte1=0, Temp_byte2=0;
char Presence;
uint16_t  TEMP=0;
float Temperature = 0.0;
	Presence = DS18B20_Start ();
	  delay_us (1);
	if(Presence){
	  DS18B20_Write (0xCC);  // skip ROM
	  DS18B20_Write (0x44);  // convert t
	  delay_us (800);
	}
	
	  Presence = DS18B20_Start ();
      delay_us(1);
	if(Presence)
	{
      DS18B20_Write (0xCC);  // skip ROM
      DS18B20_Write (0xBE);  // Read Scratch-pad
	}
    Temp_byte1 = DS18B20_Read();
	  Temp_byte2 = DS18B20_Read();
	  TEMP = (Temp_byte2<<8)|Temp_byte1;
	  Temperature = (float)TEMP/16;

return Temperature;
}




