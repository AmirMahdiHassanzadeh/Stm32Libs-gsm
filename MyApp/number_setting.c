#include "Alllib.h"

extern uart_BufferTypedef smsBuffer;
extern slave_Typedef  slaveNumber;
extern master_Typedef masterNumber;

char number_selection_98[14];
char number_selection[11];


//اين تابع از درون بسته اس ام اس شماره فرستنده اس ام اس رو پيدا ميکنه 
char NUS_Select_number_in_sms(char *number_selectedted_98,char *number_selectedted_0)
{
	char return_flag=0;
	char* dublecot_location1=strstr((char* )smsBuffer.Buffer2,"\",\"");
			char* dublecot_location2=strstr((char* )smsBuffer.Buffer2,"\"\"");
			dublecot_location1+=3;
			dublecot_location2-=2;
			int location1=dublecot_location1-(char*)smsBuffer.Buffer2;
			int location2=dublecot_location2-(char*)smsBuffer.Buffer2;
	if(*dublecot_location1 && *dublecot_location2)
	{
			
			for(volatile int i=location1; i < location2;i++)
			{
				number_selectedted_98[i-location1]=smsBuffer.Buffer2[i];
			}
			number_selectedted_0[0]='0';
			for(volatile int i=1; i < 11;i++)
			{
				number_selectedted_0[i]=number_selectedted_98[i+2];
			}
			 return_flag=1;
			
	}
	return return_flag;
}



char NUS_thisNumberIsSlaveORMaster(void)
{
	char return_flag=0;
	
	char ee_master_string[11];
	char ee_slave_string[10][11];
	
	
	if(NUS_Select_number_in_sms(number_selection_98,number_selection))
	{
			//تبديل اينتيجر به استرينگ 
			//اعداد حافظه رو به استرينگ تبديل ميکنه 
			for(volatile int i = 0 ; i <11 ; i++ )
			{
				ee_master_string[i]=masterNumber.nonVolatil[i+1]+48;
			}
			
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[0][i]=slaveNumber.nonvolatile_0[i+1]+48;
					}
					
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[1][i]=slaveNumber.nonvolatile_1[i+1]+48;
					}
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[2][i]=slaveNumber.nonvolatile_2[i+1]+48;
					}
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[3][i]=slaveNumber.nonvolatile_3[i+1]+48;
					}
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[4][i]=slaveNumber.nonvolatile_4[i+1]+48;
					}
						for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[5][i]=slaveNumber.nonvolatile_5[i+1]+48;
					}
						for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[6][i]=slaveNumber.nonvolatile_6[i+1]+48;
					}
						for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[7][i]=slaveNumber.nonvolatile_7[i+1]+48;
					}
						for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[8][i]=slaveNumber.nonvolatile_8[i+1]+48;
					}	
					for(volatile int i = 0 ; i <11 ; i++ )
					{
						ee_slave_string[9][i]=slaveNumber.nonvolatile_9[i+1]+48;
					}
//-----------------------------------------------------------------------
			if(strstr(ee_master_string,number_selection))
			{
				return_flag='M';
			}
			if(strstr(ee_slave_string[0],number_selection))
			{
				return_flag='A';
			}
			if(strstr(ee_slave_string[1],number_selection))
			{
				return_flag='B';
			}
			if(strstr(ee_slave_string[2],number_selection))
			{
				return_flag='C';
			}
			if(strstr(ee_slave_string[3],number_selection))
			{
				return_flag='D';
			}
			if(strstr(ee_slave_string[4],number_selection))
			{
				return_flag='E';
			}
			if(strstr(ee_slave_string[5],number_selection))
			{
				return_flag='F';
			}
			if(strstr(ee_slave_string[6],number_selection))
			{
				return_flag='G';
			}
			if(strstr(ee_slave_string[7],number_selection))
			{
				return_flag='H';
			}
			if(strstr(ee_slave_string[8],number_selection))
			{
				return_flag='I';
			}
			if(strstr(ee_slave_string[9],number_selection))
			{
				return_flag='J';
			}
		}
	return return_flag;
}
