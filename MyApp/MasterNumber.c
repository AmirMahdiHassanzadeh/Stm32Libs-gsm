#include "Alllib.h"

extern uart_BufferTypedef smsBuffer;
extern master_Typedef masterNumber;












char MST_master_number2character(int *ee_master_number , char* master_number_ch)
{
	char return_flag=0;
	for(int i =0; i<10;i++)
	{
		master_number_ch[i]=ee_master_number[i+2]+48;
	}
	return_flag=1;
	return return_flag;
}



char MST_select_master_set_number(uint16_t* i_m_set_number)
{
	char return_flag=0;
	//m_set:09211710114
	char m_set_number[12];
	char* m_set_location=strstr((char*) smsBuffer.Buffer2,"m_set");
	if(m_set_location)
	{
		int location=(m_set_location-(char*) smsBuffer.Buffer2)+6;
		for(volatile int i =location;i<=(location+11);i++ )
			m_set_number[i-location]= smsBuffer.Buffer2[i];
		for (int i = 0; i <= 10;i++)
			{
				i_m_set_number[i] = (m_set_number[i] - 48);
			} 
		//	*master_set_flag='M';
			return_flag='M';
	}
		return return_flag;
}

char MST_select_master_del_number(uint16_t* i_m_del_number)
{
	char return_flag=0;
	//m_set:09211710114
	char m_del_number[12];
	char* m_del_location=strstr((char*) smsBuffer.Buffer2,"m_del");
	if(m_del_location)
	{
		int location=(m_del_location-(char*) smsBuffer.Buffer2)+6;
		for(volatile int i =location;i<=(location+11);i++ )
			m_del_number[i-location]= smsBuffer.Buffer2[i];
		for (int i = 0; i <= 10;i++)
			{
				i_m_del_number[i] = (m_del_number[i] - 48);
			} 
		
			return_flag='D'; 
	}

	return return_flag;	
}






char  MST_master_save_delet(void)
{
	//set_master_phone_number-----------------------------------------
		//check EEprom - --- ee_master[0] ? M : D ;
		char returnFlag=0;
		struct symbolprintf
		{
			int scale[11];
		};
		
		if(masterNumber.nonVolatil[0]!='M'  )
		{
			int out_m_set=MST_select_master_set_number(masterNumber.volatile_set);
			if(out_m_set)
			{
				EE_WriteVariable(EE_MASTER_SECTION_MD,'M');
				//flasher(20,50,10);
				for(volatile int i = EE_MASTER_SECTION_1 ; i <= EE_MASTER_SECTION_12_end ; i++)
				{
					EE_WriteVariable(i,masterNumber.volatile_set[i-1]);
					//Buzzer(20,100);
					HAL_Delay(10);
					HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
				}
				
				/*
					استفاده از يک استراکت کمکيو حافظه هيپ
				*/
				struct symbolprintf *symbol = malloc(sizeof (*symbol));
				symbol->scale[0]=masterNumber.volatile_set[0];
				symbol->scale[1]=masterNumber.volatile_set[1];
				symbol->scale[2]=masterNumber.volatile_set[2];
				symbol->scale[3]=masterNumber.volatile_set[3];
				symbol->scale[4]=masterNumber.volatile_set[4];
				symbol->scale[5]=masterNumber.volatile_set[5];
				symbol->scale[6]=masterNumber.volatile_set[6];
				symbol->scale[7]=masterNumber.volatile_set[7];
				symbol->scale[8]=masterNumber.volatile_set[8];
				symbol->scale[9]=masterNumber.volatile_set[9];
				symbol->scale[10]=masterNumber.volatile_set[10];
				char masterNumber[12];
				sprintf(masterNumber,"%d%d%d%d%d%d%d%d%d%d%d",(symbol->scale[0]),(symbol->scale[1]),(symbol->scale[2])
																											,(symbol->scale[3]),(symbol->scale[4]),(symbol->scale[5]),
																												(symbol->scale[6]),(symbol->scale[7]),(symbol->scale[8]),
																												(symbol->scale[9]),(symbol->scale[10]));
				free(symbol);
				send_sms("Ok Master",masterNumber);
				//Buzzer(400,1);
				returnFlag=1;
				
			}
		}
		//delet_master_phone_namber--------------------------------------
		if(masterNumber.nonVolatil[0]=='M')
		{
			int out_m_del=MST_select_master_del_number(masterNumber.volatile_del);
			if(out_m_del && NUS_thisNumberIsSlaveORMaster()=='M')
			{
				
				EE_WriteVariable(EE_MASTER_SECTION_MD,'D');
				flasher(20,50,10);
				for(volatile int i = EE_MASTER_SECTION_1 ; i <= EE_SLAVE_J_State_byt7 ; i++)
				{
					EE_WriteVariable(i,0);
					HAL_Delay(5);
					Buzzer(10,10);
					HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
				}
				
				
				/*
					استفاده از يک استراکت کمکيو حافظه هيپ
				*/
				struct symbolprintf *symbol = malloc(sizeof (*symbol));
				symbol->scale[0]=masterNumber.volatile_del[0];
				symbol->scale[1]=masterNumber.volatile_del[1];
				symbol->scale[2]=masterNumber.volatile_del[2];
				symbol->scale[3]=masterNumber.volatile_del[3];
				symbol->scale[4]=masterNumber.volatile_del[4];
				symbol->scale[5]=masterNumber.volatile_del[5];
				symbol->scale[6]=masterNumber.volatile_del[6];
				symbol->scale[7]=masterNumber.volatile_del[7];
				symbol->scale[8]=masterNumber.volatile_del[8];
				symbol->scale[9]=masterNumber.volatile_del[9];
				symbol->scale[10]=masterNumber.volatile_del[10];
				char masterNumber[12];
				sprintf(masterNumber,"%d%d%d%d%d%d%d%d%d%d%d",(symbol->scale[0]),(symbol->scale[1]),(symbol->scale[2])
																											,(symbol->scale[3]),(symbol->scale[4]),(symbol->scale[5]),
																												(symbol->scale[6]),(symbol->scale[7]),(symbol->scale[8]),
																												(symbol->scale[9]),(symbol->scale[10]));
				free(symbol);
				send_sms("Delet Master",masterNumber);
				returnFlag=1;
			}
		}
	return returnFlag;
}


//٬این تابع باید عملیاتی شود ...٬
char MST_opratingMasterFunction(void){
	char returnFlag=0;
		if(MST_master_save_delet())
		{
			
			EE_eepromReadMasterNumberData();
			returnFlag=1;
		}
		return returnFlag;
}





