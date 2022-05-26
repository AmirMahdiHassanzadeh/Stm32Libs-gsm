#include "Alllib.h"

extern slave_Typedef  slaveNumber;
extern master_Typedef masterNumber;
extern slaveAccess_Typedef slaveAccess;




//extern  uint8_t onOffState[3];

//extern uint16_t opratinTicTack_Arr[];

///extern uint16_t Ring_relay;


//--------------------------------------------------------------------------
void  EE_eepromReadMasterNumberData(void)
{
    for(int i = EE_MASTER_SECTION_MD ; i < EE_MASTER_SECTION_12_end;i++)
									EE_ReadVariable(i,&masterNumber.nonVolatil[i-EE_MASTER_SECTION_MD]);
}

//--------------------------------------------------------------------------
void  EE_eepromReadSlave0NumberData(void)
{
   for(int i = EE_SLAVE_A ; i <= EE_SLAVE0_24_END;i++)
	{
		EE_ReadVariable(i,&slaveNumber.nonvolatile_0[i-EE_SLAVE_A]);
			HAL_Delay(10);
	}
	
}
void  EE_eepromReadSlave1NumberData(void)
{
  for(int i = EE_SLAVE_B /*33*/; i <= EE_SLAVE1_43_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_1[i-EE_SLAVE_B]);
		HAL_Delay(10);
	}
	
}
void  EE_eepromReadSlave2NumberData(void)
{
   for(int i = EE_SLAVE_C ; i <= EE_SLAVE2_62_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_2[i-EE_SLAVE_C]);
		 	HAL_Delay(10);
	}
}
void  EE_eepromReadSlave3NumberData(void)
{
   for(int i = EE_SLAVE_D ; i <= EE_SLAVE3_81_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_3[i-EE_SLAVE_D]);
		 	HAL_Delay(10);
	}
}
void  EE_eepromReadSlave4NumberData(void)
{
   for(int i = EE_SLAVE_E ; i <= EE_SLAVE4_100_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_4[i-EE_SLAVE_E]);
		 	HAL_Delay(10);
	}
}
void  EE_eepromReadSlave5NumberData(void)
{
   for(int i = EE_SLAVE_F ; i <= EE_SLAVE5_120_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_5[i-EE_SLAVE_F]);
		HAL_Delay(10);
	}
}
void  EE_eepromReadSlave6NumberData(void)
{
   for(int i = EE_SLAVE_G ; i <= EE_SLAVE6_140_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_6[i-EE_SLAVE_G]);
		 	HAL_Delay(10);
	}
}
void  EE_eepromReadSlave7NumberData(void)
{
   for(int i = EE_SLAVE_H ; i <= EE_SLAVE7_150_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_7[i-EE_SLAVE_H]);
	 	HAL_Delay(10);
	}
}

void  EE_eepromReadSlave8NumberData(void)
{
   for(int i = EE_SLAVE_I ; i <= EE_SLAVE8_150_END;i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_8[i-EE_SLAVE_I]);
		 	HAL_Delay(10);
	}
}

void  EE_eepromReadSlave9NumberData(void)
{
   for(int i = EE_SLAVE_J ; i <= EE_SLAVE9_160_END; i++){
		EE_ReadVariable(i,&slaveNumber.nonvolatile_9[i-EE_SLAVE_J]);
		 	HAL_Delay(10);
	}
}

void EE_accessReadAll(void)
{
	
	EE_ReadVariable(EE_SLAVE_A_State_byt1,&slaveAccess.ACS_0[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_A_State_byt2,&slaveAccess.ACS_0[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_A_State_byt3,&slaveAccess.ACS_0[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_A_State_byt4,&slaveAccess.ACS_0[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_A_State_byt5,&slaveAccess.ACS_0[4]);
	HAL_Delay(10);



	EE_ReadVariable(EE_SLAVE_B_State_byt1,&slaveAccess.ACS_1[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_B_State_byt2,&slaveAccess.ACS_1[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_B_State_byt3,&slaveAccess.ACS_1[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_B_State_byt4,&slaveAccess.ACS_1[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_B_State_byt5,&slaveAccess.ACS_1[4]);
	HAL_Delay(10);

	EE_ReadVariable(EE_SLAVE_C_State_byt1,&slaveAccess.ACS_2[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_C_State_byt2,&slaveAccess.ACS_2[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_C_State_byt3,&slaveAccess.ACS_2[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_C_State_byt4,&slaveAccess.ACS_2[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_C_State_byt5,&slaveAccess.ACS_2[4]);
	HAL_Delay(10);

	EE_ReadVariable(EE_SLAVE_D_State_byt1,&slaveAccess.ACS_3[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_D_State_byt2,&slaveAccess.ACS_3[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_D_State_byt3,&slaveAccess.ACS_3[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_D_State_byt4,&slaveAccess.ACS_3[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_D_State_byt5,&slaveAccess.ACS_3[4]);
	HAL_Delay(10);


	EE_ReadVariable(EE_SLAVE_E_State_byt1,&slaveAccess.ACS_4[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_E_State_byt2,&slaveAccess.ACS_4[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_E_State_byt3,&slaveAccess.ACS_4[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_E_State_byt4,&slaveAccess.ACS_4[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_E_State_byt5,&slaveAccess.ACS_4[4]);
	HAL_Delay(10);
	
	
	
	EE_ReadVariable(EE_SLAVE_F_State_byt1,&slaveAccess.ACS_5[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_F_State_byt2,&slaveAccess.ACS_5[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_F_State_byt3,&slaveAccess.ACS_5[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_F_State_byt4,&slaveAccess.ACS_5[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_F_State_byt5,&slaveAccess.ACS_5[4]);
	HAL_Delay(10);
	
	
	EE_ReadVariable(EE_SLAVE_G_State_byt1,&slaveAccess.ACS_6[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_G_State_byt2,&slaveAccess.ACS_6[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_G_State_byt3,&slaveAccess.ACS_6[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_G_State_byt4,&slaveAccess.ACS_6[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_G_State_byt5,&slaveAccess.ACS_6[4]);
	HAL_Delay(10);
	
	
	
	EE_ReadVariable(EE_SLAVE_H_State_byt1,&slaveAccess.ACS_7[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_H_State_byt2,&slaveAccess.ACS_7[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_H_State_byt3,&slaveAccess.ACS_7[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_H_State_byt4,&slaveAccess.ACS_7[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_H_State_byt5,&slaveAccess.ACS_7[4]);
	HAL_Delay(10);
	
	
	EE_ReadVariable(EE_SLAVE_I_State_byt1,&slaveAccess.ACS_8[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_I_State_byt2,&slaveAccess.ACS_8[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_I_State_byt3,&slaveAccess.ACS_8[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_I_State_byt4,&slaveAccess.ACS_8[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_I_State_byt5,&slaveAccess.ACS_8[4]);
	HAL_Delay(10);
	
	
	
	EE_ReadVariable(EE_SLAVE_J_State_byt1,&slaveAccess.ACS_9[0]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_J_State_byt2,&slaveAccess.ACS_9[1]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_J_State_byt3,&slaveAccess.ACS_9[2]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_J_State_byt4,&slaveAccess.ACS_9[3]);
			HAL_Delay(10);
	EE_ReadVariable(EE_SLAVE_J_State_byt5,&slaveAccess.ACS_9[4]);
	HAL_Delay(10);
}

/*
void onOffStateEepromRead(void)
{
	uint16_t ReadMem=0;
	EE_ReadVariable(ONOFF_STATE_EEPROM	,&ReadMem);
			HAL_Delay(10);
	//براي اجراي حالت هاي قبل از خاموش شدن ماژول 
	if(ReadMem & (1<<0))
	{
		HAL_GPIO_WritePin(Relay_1_GPIO_Port,Relay_1_Pin,GPIO_PIN_SET);
		 onOffState[0]=1;
	}
	
	if(ReadMem & (1<<1))
	{
		HAL_GPIO_WritePin(Relay_2_GPIO_Port,Relay_2_Pin,GPIO_PIN_SET);
		 onOffState[1]=1;
	}
}


void TickTockStateEeprom(void)
{
	EE_ReadVariable(TICKTOCK_STATE_EEPROM_R1,&opratinTicTack_Arr[0]);
	HAL_Delay(10);
	EE_ReadVariable(TICKTOCK_STATE_EEPROM_R2,&opratinTicTack_Arr[1]);
	HAL_Delay(10);
	if((opratinTicTack_Arr[0]==0 && opratinTicTack_Arr[1]==0))opratinTicTack_Arr[2]=0;
	else opratinTicTack_Arr[2]='M';
	
}

void Ring_Relay(void)
{
	EE_ReadVariable(RingEEprom,&Ring_relay);
	HAL_Delay(10);
}
*/
void EE_eepromReadAllData(void)
{
	
		EE_eepromReadMasterNumberData();
		EE_eepromReadSlave0NumberData();
		EE_eepromReadSlave1NumberData();
    EE_eepromReadSlave2NumberData();
    EE_eepromReadSlave3NumberData();
    EE_eepromReadSlave4NumberData();
    EE_eepromReadSlave5NumberData();
		EE_eepromReadSlave6NumberData();
		EE_eepromReadSlave7NumberData();
    EE_eepromReadSlave8NumberData();
    EE_eepromReadSlave9NumberData();
		EE_accessReadAll();
		/*onOffStateEepromRead();
		TickTockStateEeprom();
		Ring_Relay();*/
}

