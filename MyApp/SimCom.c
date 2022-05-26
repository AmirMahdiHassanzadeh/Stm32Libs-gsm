#include "AllLib.h"


extern UART_HandleTypeDef huart1;// fa'al saz UART1
extern uart_BufferTypedef smsBuffer;


//in tabe baraye ijad yek palse sefr baraye rah'andazi GSM ast.
//         _________ <---1s---> _________
//									|__________|

extern char Ring_relay;
//extern uint8_t onOffState[3];
extern uint8_t timer_base_Ring;





void SIM_SimCom_PowerKey_En(void)
{
	HAL_GPIO_WritePin(SimCom_PowerKey_GPIO_Port,SimCom_PowerKey_Pin,GPIO_PIN_SET);//reset SimCom_PowerKey_Pin
	HAL_Delay(1000);//1s sabr konid...
	HAL_GPIO_WritePin(SimCom_PowerKey_GPIO_Port,SimCom_PowerKey_Pin,GPIO_PIN_RESET); //set SimCom_PowerKey_Pin
	//HAL_Delay(10000);//10s sabr konid baraye roshan shodan kamel...
}

//in tabeh baraye ferestadan command AT baraye daryaft OK  ast
void SIM_AT_Command(void)
{
		puts("AT\r\n");
	//HAL_UART_Transmit(&huart1,"AT\r\n",strlen("AT\r\n"),100);
}

//ham'eye sms haye inbox ro pak mikone...
void SIM_delet_all_sms(void)
{
	//"DEL ALL"
	puts("AT+CMGDA=\"DEL ALL\"\r\n");
}


//ham'eye sms hayi ke khondeh shod az inbox ra pak mikone...
void SIM_delet_read_sms(void)
{
	//"DEL READ"
	puts("AT+CMGDA=\"DEL READ\"\r\n");
}

//fa'al kardan ECO..
void SIM_Eco_On(void)
{
	//"Eco Enable"
	puts("ATE1\r\n");
}


//GHeyre fa'al kardan ECO..
void SIM_Eco_Off(void)
{
	//"Eco Enable"
	puts("ATE0\r\n");
}


//fa'al kardan SMS az noe text..
void SIM_SMS_TEXT_TYPE(void)
{
	
	puts("AT+CMGF=1\r\n");
}
//fa'al kardan SMS baraye hame model mobile...
void SIM_SMS_ALL_Phone(void)
{
	//SMS For ALL Phone language
	puts("AT+csmp=17,167,0,0\r\n");
}

//baraye gereftan saat az shabake
void SIM_Get_Time_Network(void)
{
	puts("AT+CLTS=1\r\n");
}
//gheire fa'al kardane gprs (internet 2G)
void SIM_Disable_Totality_Gprs(void)
{
	puts("AT+CGATT=0\r\n");
}
/*//fa'al kardane gprs (internet 2G)
void SIM_Enable_Gprs(void)
{
	puts("AT+CGATT=1\r\n");
}*/
//fa'al kardane gprs (internet 2G)
void SIM_Enable_Gprs(void)
{
	puts("AT+SAPBR=1,1\r\n");
}

//gheire fa'al kardane gprs (internet 2G)
void SIM_Disable_Gprs(void)
{
	puts("AT+SAPBR=0,1\r\n");
}


//Set the connection type to GPRS
void SIM_Contype_Gprs(void)
{
	puts("AT+SAPBR=3,1,\"Contype\",\"GPRS\"\r\n");
}

//set APN simcard .....
void SIM_Set_APN (char simcard_name)
{
	switch (simcard_name)
	{
		case 'I':
		puts("AT+SAPBR=3,1, \"APN\",\"mtnirancell\"\r\n");
		HAL_Delay(6000);
		break;
		case 'H':
		puts("AT+SAPBR=3,1, \"APN\",\"mcinet\"\r\n");
		HAL_Delay(6000);
		break;
		case 'R':
		puts("AT+SAPBR=3,1, \"APN\",\"RighTel\"\r\n");
		HAL_Delay(6000);
		break;
		case 'S':
		puts("AT+SAPBR=3,1, \"APN\",\"shatelmobile\"\r\n");
		HAL_Delay(6000);
		break;
	}
	
}

//To open a GPRS context. 
void SIM_Gprs_Open_Context(void)
{
	puts("AT+CNTPCID=1\r\n");
}

// Start Sync Network Time 
void SIM_Ntp_Server_gettime(void)
{
	puts("AT+CNTP\r\n");
}

//SIM_Get_Time_RtcGSM
void SIM_Get_Time_RtcGSM(void)
{
	puts("AT+CCLK?\r\n");
}



//baraye zakhire tanzimat...
void SIM_Permanently_Setting(void)
{
	puts("AT&W\r\n");
}
//check signal power
void SIM_Signal_Power(void)
{
	puts("AT+CSQ\r\n");
}

//Earn SMS Service Center Address
//baraye bedast avordan shomare simcard..
void SIM_Earn_Center_number(void)
{
	puts("AT+CSCA?\r");
}

//read sms command
char Read_Sms(void)
{
	char i=0;
		puts("AT+CMGR=1\r\n");
		HAL_Delay(200);
	if(strstr((char *) smsBuffer.Buffer1,"+CMGR:")&&strstr((char *) smsBuffer.Buffer1,"REC UNREAD")){

		for(int i = 0 ; i <= strlen((char *) smsBuffer.Buffer1);i++)
		{
			 smsBuffer.Buffer2[i]= smsBuffer.Buffer1[i];
			
		}
		
		 i=1;
	}
	else if(strstr((char *) smsBuffer.Buffer1,"+CMGR:")&&strstr((char *) smsBuffer.Buffer1,"REC READ"))
	{
		//اين تابع مخصوص پاک کردن بافر اصلي دريافت ديتاست 
		UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
		SIM_delet_read_sms();
		 i=0;
	}
	return i;
}	



void Ring_Number_show(void)
{
	puts("AT+CLIP=1\r\n");
		HAL_Delay(200);
}//AT+CLIP=1

void reject_call(void)
{
	puts("ATH\r\n");
	HAL_Delay(200);
}



//تابع ارسال اس ام اس 
void send_sms(const char *smsMsg,char phone_number[11])
{

//volatile int i,j;
//	unsigned char send_command_1[25]="AT+CMGS=\"";
//	for(i = 0 ;  send_command_1[i] != '\0' ; i++);
//	for(j = 0 ; phone_num[j] != '\0' ; ++j,++i)
//	{
//	    send_command_1[i]=phone_num[j];
//	}
//	send_command_1[i++]='\"';
//	send_command_1[i++]='\n';
//	send_command_1[i]='\0';
	char smsCommand[30];
	sprintf(smsCommand,"AT+CMGS=\"%c%c%c%c%c%c%c%c%c%c%c\"\n\r",
						phone_number[0],phone_number[1],phone_number[2],phone_number[3],
						phone_number[4],phone_number[5],phone_number[6],phone_number[7],
						phone_number[8],phone_number[9],phone_number[10]);
	
	UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
	printf("%s",smsCommand);
	HAL_Delay(4000);
	printf("%s",smsMsg);
	HAL_Delay(2000);
	printf("%c",0x1a);
	HAL_Delay(4000);
  UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
}






//taghieer zaban hamrahe aval be EN  1=farsi  2=EN
void USSD_cheng_Langoage(uint8_t simcard_name)
{
	
	switch(simcard_name)
	{
		case 'H':
			puts("AT+CUSD=1,\"*198*2#\",15\r");
		break;
		case 'I':
			puts("AT+CUSD=1,\"*555*4*3*2#\",15\r\n");
		break;
	}
	
}





//esme simcard ro daryaft mikone
char check_simcard_name(void)
{
	UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
	SIM_Earn_Center_number();
	HAL_Delay(500);
    if( smsBuffer.Buffer1[11]=='+'&& smsBuffer.Buffer1[12]=='C'&& smsBuffer.Buffer1[13]=='S'&& smsBuffer.Buffer1[14]=='C'\
			&& smsBuffer.Buffer1[15]=='A'&& smsBuffer.Buffer1[22]=='9'&& smsBuffer.Buffer1[23]=='1'&& smsBuffer.Buffer1[24]=='1')
    {
        UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
        USSD_cheng_Langoage('H');
        HAL_Delay(3000);
        UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
        return 'H';
		
    }
    if( smsBuffer.Buffer1[11]=='+'&& smsBuffer.Buffer1[12]=='C'&& smsBuffer.Buffer1[13]=='S'&& smsBuffer.Buffer1[14]=='C'\
			&& smsBuffer.Buffer1[15]=='A'&& smsBuffer.Buffer1[22]=='9'&& smsBuffer.Buffer1[23]=='2'&& smsBuffer.Buffer1[24]=='0')
    {
       UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
			
        return 'R';
				
        
    }
    if( smsBuffer.Buffer1[11]=='+'&& smsBuffer.Buffer1[12]=='C'&& smsBuffer.Buffer1[13]=='S'&& smsBuffer.Buffer1[14]=='C'\
			&& smsBuffer.Buffer1[15]=='A'&& smsBuffer.Buffer1[22]=='9'&& smsBuffer.Buffer1[23]=='9'&& smsBuffer.Buffer1[24]=='8')
    {
        UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
    
        return 'S';
				
    }
    if( smsBuffer.Buffer1[11]=='+'&& smsBuffer.Buffer1[12]=='C'&& smsBuffer.Buffer1[13]=='S'&& smsBuffer.Buffer1[14]=='C'\
			&& smsBuffer.Buffer1[15]=='A'&& smsBuffer.Buffer1[22]=='9'&& smsBuffer.Buffer1[23]=='3'&& smsBuffer.Buffer1[24]=='5')
    {
        UART_clear_Rx_Buffer(50);
        //usart_send_string((unsigned char *)"AT+CUSD=1,\"*555*4*3*2#\",15\r",at_command_lenth((unsigned char *)"AT+CUSD=1,\"*555*4*3*2#\",15\r"));
       
        HAL_Delay(5000);
        USSD_cheng_Langoage('I');
				HAL_Delay(3000);
				SIM_Permanently_Setting();
        HAL_Delay(500);
        UART_clear_Rx_Buffer(strlen((char *) smsBuffer.Buffer1));
        return 'I';
			
        
    }
    return 0;
}





//check kardane sharje simcarde
void check_sharje_simcard(uint8_t simcard_name)
{
	switch (simcard_name)
	{
		case 'H':
			puts("AT+CUSD=1,\"*140*11#\",15\r\n");
		break;
		case 'I':
			puts(	"AT+CUSD=1,\"*555*1*2#\",15\r");
		break;
		case 's':
			
		
		
		break;
		case 'R':
				puts("AT+CUSD=1,\"*140#\",15\r");
		break;
		
	}
	
}




/*
//اگر اين تابع اجرا شود 
//مشخص ميشود که اگر تماسي حاصل شد رله مدنظر رو 
//تغيير وضعيت بدهد 
//اين تابع صرفا با اس ام اس کنترل ميشود 
//تابع تماس تابع ديگري است  
void ring_call_sms(void)
{
	if(thisNumberIsSlaveORMaster()){
		
		if(strstr((char *) smsBuffer.Buffer2,"RING RELAY:"))
		{
			for(volatile int counter=0; smsBuffer.Buffer2[counter]!='\0';counter++)
			{
				if( ( smsBuffer.Buffer2[counter]  =='R')
					&&( smsBuffer.Buffer2[counter+1]=='I')
					&&( smsBuffer.Buffer2[counter+2]=='N')
					&&( smsBuffer.Buffer2[counter+3]=='G')
					&&( smsBuffer.Buffer2[counter+4]==' ')
					&&( smsBuffer.Buffer2[counter+5]=='R')
					&&( smsBuffer.Buffer2[counter+6]=='E')
					&&( smsBuffer.Buffer2[counter+7]=='L')
					&&( smsBuffer.Buffer2[counter+8]=='A')
					&&( smsBuffer.Buffer2[counter+9]=='Y')
					&&( smsBuffer.Buffer2[counter+10]==':'))
				{
					
					if( smsBuffer.Buffer2[counter+11]=='1')
					{
						Ring_relay =1;
					}
					else if( smsBuffer.Buffer2[counter+11]=='2')
					{
						Ring_relay =2;
					}
					EE_WriteVariable(RingEEprom,Ring_relay);
					HAL_Delay(10);
				}
			}
		}
	}
}
//اگر اين تابع اجرا شود تماسي اگر حاصل شود 
//رله مورد نظري رو که قبلا 
//از طريق تابع 
//ring_call_sms()
//مشخص کرديم راتاگل ميکند 
void ring_call(void)
{
	//char number_save[14];
	
	char ee_master_string[10];
	char ee_slave1_string[10];
	char ee_slave2_string[10];
	char ee_slave3_string[10];
	char ee_slave4_string[10];
	char ee_slave5_string[10];
	//تبديل اينتيجر به استرينگ 
			//اعداد حافظه رو به استرينگ تبديل ميکنه 
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_master_string[i-2]=ee_master[i]+48;
			}
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_slave1_string[i-2]=ee_slave1[i]+48;
			}
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_slave2_string[i-2]=ee_slave2[i]+48;
			}
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_slave3_string[i-2]=ee_slave3[i]+48;
			}
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_slave4_string[i-2]=ee_slave4[i]+48;
			}
			for(volatile int i = 2 ; i <12 ; i++ )
			{
				ee_slave5_string[i-2]=ee_slave5[i]+48;
			}
			
	if(strstr((char *) GLO_Rx_Buffer,"RING")&&strstr((char *) GLO_Rx_Buffer,"+CLIP:"))
	{
		strcpy((char *) smsBuffer.Buffer2,(char *) GLO_Rx_Buffer);
		if(strstr((char *) smsBuffer.Buffer2,ee_master_string)||strstr((char *) smsBuffer.Buffer2,ee_slave1_string)||strstr((char *) smsBuffer.Buffer2,ee_slave2_string)||strstr((char *) smsBuffer.Buffer2,ee_slave3_string)
			||strstr((char *) smsBuffer.Buffer2,ee_slave4_string)||strstr((char *) smsBuffer.Buffer2,ee_slave4_string)||strstr((char *) smsBuffer.Buffer2,ee_slave5_string))
		{			
			if(Ring_relay==1)
						{
							
								if(HAL_GPIO_ReadPin(Relay_1_GPIO_Port,Relay_1_Pin)==1)
								{
									HAL_GPIO_WritePin(Relay_1_GPIO_Port,Relay_1_Pin,GPIO_PIN_RESET);
									reject_call();
									onOffState[0]=0;
									if(onOffState[1]==1)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x02);
									}
									else if(onOffState[1]==0)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x00);
									}
								  
								}
								else if(!(HAL_GPIO_ReadPin(Relay_1_GPIO_Port,Relay_1_Pin)==1))
								{
									HAL_GPIO_WritePin(Relay_1_GPIO_Port,Relay_1_Pin,GPIO_PIN_SET);
									reject_call();
									onOffState[0]=1;
									if(onOffState[1]==1)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x03);
									}
									else if(onOffState[1]==0)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x01);
									}
								 
								}
								
								
							}
						
						if(Ring_relay==2)
						{
							
								if(HAL_GPIO_ReadPin(Relay_2_GPIO_Port,Relay_2_Pin)==1)
								{
									HAL_GPIO_WritePin(Relay_2_GPIO_Port,Relay_2_Pin,GPIO_PIN_RESET);
									reject_call();
									onOffState[1]=0;
									if(onOffState[0]==1)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x01);
									}
									else if(onOffState[0]==0)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x00);
									}
								  
								}
								else if(!(HAL_GPIO_ReadPin(Relay_1_GPIO_Port,Relay_1_Pin)==1))
								{
									HAL_GPIO_WritePin(Relay_2_GPIO_Port,Relay_2_Pin,GPIO_PIN_SET);
									
									reject_call();
									onOffState[1]=1;
									if(onOffState[0]==1)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x03);
									}
									else if(onOffState[0]==0)
									{
										EE_WriteVariable(ONOFF_STATE_EEPROM,0x02);
									}
								}
								
							}
						}
					UART_clear_ smsBuffer.Buffer2(strlen((char *) smsBuffer.Buffer2));
					}
					
				
		}
	*/
