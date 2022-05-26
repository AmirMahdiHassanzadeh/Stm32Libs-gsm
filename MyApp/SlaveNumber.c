#include "Alllib.h"
#define SLAVE0_SET_STR  	"s0_set:"
#define SLAVE0_ACCESS_STR "access0:"

#define SLAVE1_SET_STR  	"s1_set"
#define SLAVE1_ACCESS_STR "access1:"

#define SLAVE2_SET_STR  	"s2_set"
#define SLAVE2_ACCESS_STR "access2:"

#define SLAVE3_SET_STR  	"s3_set"
#define SLAVE3_ACCESS_STR "access3:"

#define SLAVE4_SET_STR  	"s4_set"
#define SLAVE4_ACCESS_STR "access4:"

#define SLAVE5_SET_STR  	"s5_set"
#define SLAVE5_ACCESS_STR "access5:"

#define SLAVE6_SET_STR  	"s6_set"
#define SLAVE6_ACCESS_STR "access6:"

#define SLAVE7_SET_STR  	"s7_set"
#define SLAVE7_ACCESS_STR "access7:"

#define SLAVE8_SET_STR  	"s8_set"
#define SLAVE8_ACCESS_STR "access8:"

#define SLAVE9_SET_STR  	"s9_set"
#define SLAVE9_ACCESS_STR "access9:"



#define SLAVE0_DEL_STR   "s0_del:"
#define SLAVE1_DEL_STR   "s1_del:"
#define SLAVE2_DEL_STR   "s2_del:"
#define SLAVE3_DEL_STR   "s3_del:"
#define SLAVE4_DEL_STR   "s4_del:"
#define SLAVE5_DEL_STR   "s5_del:"
#define SLAVE6_DEL_STR   "s6_del:"
#define SLAVE7_DEL_STR   "s7_del:"
#define SLAVE8_DEL_STR   "s8_del:"
#define SLAVE9_DEL_STR   "s9_del:"





extern uart_BufferTypedef 	smsBuffer;
extern master_Typedef 			masterNumber;
extern slaveAccess_Typedef 	slaveAccess;
extern slave_Typedef  			slaveNumber;




char SLV_extractSetNumberInSms(char stateFlag[10])
{
	char flag=0;
			char* s0_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE0_SET_STR);
				if(s0_set_location)
				{
					int location=(s0_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_0[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
						
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_0[i] = (slaveNumber.volatile_set_0[i] - 48);
							HAL_Delay(1);
						}
				stateFlag[0]='A';
				flag=1;						
					}
				
					
				char* s1_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE1_SET_STR);
				if(s1_set_location)
				{
					int location=(s1_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_1[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_1[i] = (slaveNumber.volatile_set_1[i] - 48);
							HAL_Delay(1);
						} 
						stateFlag[1]='B';
						flag=1;
					}
				
					
				char* s2_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE2_SET_STR);
				if(s2_set_location)
				{
					int location=(s2_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_2[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_2[i] = (slaveNumber.volatile_set_2[i] - 48);
							HAL_Delay(1);
						}
					stateFlag[2]='C';
					flag=1;						
					}
					
				char* s3_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE3_SET_STR);
				if(s3_set_location)
				{
					int location=(s3_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_3[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
						slaveNumber.volatile_set_3[i] = (slaveNumber.volatile_set_3[i] - 48);
							HAL_Delay(1);
						} 
					stateFlag[3]='D';
					flag=1;			
					}
					
					
				char* s4_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE4_SET_STR);
				if(s4_set_location)
				{
					int location=(s4_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_4[i-location]=smsBuffer.Buffer2[i];
						HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_4[i] = (slaveNumber.volatile_set_4[i] - 48);
							HAL_Delay(1);
						} 
					stateFlag[4]='E';
					flag=1;			
					}
					
					
				char* s5_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE5_SET_STR);
				if(s5_set_location)
				{
					int location=(s5_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_5[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_5[i] = (slaveNumber.volatile_set_5[i] - 48);
							HAL_Delay(1);
						}
					stateFlag[5]='F';
					flag=1;									
					}
				
					
					
				char* s6_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE6_SET_STR);
				if(s6_set_location)
				{
					int location=(s6_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_6[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
								slaveNumber.volatile_set_6[i] = (	slaveNumber.volatile_set_6[i] - 48);
							HAL_Delay(1);
						}
					stateFlag[6]='G';
					flag=1;									
					}
				
					
					
				char* s7_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE7_SET_STR);
				if(s7_set_location)
				{
					int location=(s7_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
										slaveNumber.volatile_set_7[i-location]=smsBuffer.Buffer2[i];
						HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_7[i] = (slaveNumber.volatile_set_7[i] - 48);
							HAL_Delay(1);
						} 
						stateFlag[7]='H';
						flag=1;			
					}
				
					char* s8_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE8_SET_STR);
				if(s8_set_location)
				{
					int location=(s8_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_8[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_8[i] = (slaveNumber.volatile_set_8[i] - 48);
							HAL_Delay(1);
						} 
						stateFlag[8]='I';
						flag=1;			
					}
					
					
					char* s9_set_location=strstr((char*)smsBuffer.Buffer2,SLAVE9_SET_STR);
				if(s9_set_location)
				{
					int location=(s9_set_location-(char*)smsBuffer.Buffer2)+7;
					for(volatile int i =location;i<=(location+10);i++ )
					{
									slaveNumber.volatile_set_9[i-location]=smsBuffer.Buffer2[i];
									HAL_Delay(1);
					}
					
					for (int i = 0; i <= 10;i++)
						{
							slaveNumber.volatile_set_9[i] = (slaveNumber.volatile_set_9[i] - 48);
							HAL_Delay(1);
						} 
							stateFlag[9]='J';
							flag=1;			
					}	
				
					
					return flag;
}



char SLV_extractAccessSetNumber(void)
{
	char flag=0;
	
		{
			char* s0_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE0_ACCESS_STR);
			if(s0_access_location)
			{
							
						int location_access=(s0_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE0_ACCESS_STR);
						//access0:255-01-32-48-22
				if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
						/*parametre 1 :255*/ slaveAccess.ACS_0[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
						/*parametre 2 :01*/  slaveAccess.ACS_0[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
						/*parametre 3 :32*/  slaveAccess.ACS_0[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
						/*parametre 4 :48*/  slaveAccess.ACS_0[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
						/*parametre 5 :22*/  slaveAccess.ACS_0[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;			
			}
		}
			
		}
		
		
		{
			char* s1_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE1_ACCESS_STR);
			if(s1_access_location){
				int location_access=(s1_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE1_ACCESS_STR);
				//access0:255-01-32-48-22
				if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
				/*parametre 1 :255*/ slaveAccess.ACS_1[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
				/*parametre 2 :01*/  slaveAccess.ACS_1[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
				/*parametre 3 :32*/  slaveAccess.ACS_1[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
				/*parametre 4 :48*/  slaveAccess.ACS_1[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
				/*parametre 5 :22*/ slaveAccess.ACS_1[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;
				}							
			}
		}	
		
		{
			char* s2_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE2_ACCESS_STR);
			if(s2_access_location){
				int location_access=(s2_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE2_ACCESS_STR);
				//access0:255-01-32-48-22
				if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
							
				/*parametre 1 :255*/ slaveAccess.ACS_2[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
				/*parametre 2 :01*/  slaveAccess.ACS_2[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
				/*parametre 3 :32*/  slaveAccess.ACS_2[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
				/*parametre 4 :48*/  slaveAccess.ACS_2[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
				/*parametre 5 :22*/  slaveAccess.ACS_2[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;			
			}
		}
		}
		{
			char* s3_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE3_ACCESS_STR);
			if(s3_access_location){
					int location_access=(s3_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE3_ACCESS_STR);
					//access0:255-01-32-48-22
				if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
					/*parametre 1 :255*/ slaveAccess.ACS_3[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
					/*parametre 2 :01*/  slaveAccess.ACS_3[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
					/*parametre 3 :32*/  slaveAccess.ACS_3[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
					/*parametre 4 :48*/  slaveAccess.ACS_3[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
					/*parametre 5 :22*/  slaveAccess.ACS_3[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
						flag=1;	
					}							
			}
		}
		{
			char* s4_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE4_ACCESS_STR);
			if(s4_access_location){
					int location_access=(s4_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE4_ACCESS_STR);
					//access0:255-01-32-48-22
					if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
							
					/*parametre 1 :255*/ slaveAccess.ACS_4[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
					/*parametre 2 :01*/  slaveAccess.ACS_4[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
					/*parametre 3 :32*/  slaveAccess.ACS_4[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
					/*parametre 4 :48*/  slaveAccess.ACS_4[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
					/*parametre 5 :22*/  slaveAccess.ACS_4[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;				
			}
		}
		}
		
		{
			char* s5_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE5_ACCESS_STR);
			if(s5_access_location){
					int location_access=(s5_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE5_ACCESS_STR);
					//access0:255-01-32-48-22
					if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
							
					/*parametre 1 :255*/ slaveAccess.ACS_5[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
					/*parametre 2 :01*/  slaveAccess.ACS_5[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
					/*parametre 3 :32*/  slaveAccess.ACS_5[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
					/*parametre 4 :48*/  slaveAccess.ACS_5[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
					/*parametre 5 :22*/  slaveAccess.ACS_5[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;				
			}
		}
		}
		{
			char* s6_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE6_ACCESS_STR);
			if(s6_access_location){
					int location_access=(s6_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE6_ACCESS_STR);
					//access0:255-01-32-48-22
					if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
							
					/*parametre 1 :255*/ slaveAccess.ACS_6[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
					/*parametre 2 :01*/  slaveAccess.ACS_6[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
					/*parametre 3 :32*/  slaveAccess.ACS_6[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
					/*parametre 4 :48*/  slaveAccess.ACS_6[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
					/*parametre 5 :22*/  slaveAccess.ACS_6[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;				
			}
		}
		}
		
		{
			char* s7_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE7_ACCESS_STR);
			if(s7_access_location){
					int location_access=(s7_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE7_ACCESS_STR);
					//access0:255-01-32-48-22
					if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
					/*parametre 1 :255*/ slaveAccess.ACS_7[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
					/*parametre 2 :01*/  slaveAccess.ACS_7[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
					/*parametre 3 :32*/  slaveAccess.ACS_7[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
					/*parametre 4 :48*/  slaveAccess.ACS_7[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
					/*parametre 5 :22*/  slaveAccess.ACS_7[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;				
			}
		}
		}
		{
			char* s8_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE8_ACCESS_STR);
			if(s8_access_location){
						int location_access=(s8_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE8_ACCESS_STR);
						//access0:255-01-32-48-22
						if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
						/*parametre 1 :255*/ slaveAccess.ACS_8[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
						/*parametre 2 :01*/  slaveAccess.ACS_8[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
						/*parametre 3 :32*/  slaveAccess.ACS_8[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
						/*parametre 4 :48*/  slaveAccess.ACS_8[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
						/*parametre 5 :22*/  slaveAccess.ACS_8[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;					
			}
		}
		}
		{
			char* s9_access_location=strstr((char*)smsBuffer.Buffer2,SLAVE9_ACCESS_STR);
			if(s9_access_location){
				int location_access=(s9_access_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE9_ACCESS_STR);
				//access0:255-01-32-48-22
				if(smsBuffer.Buffer2[location_access+3]=='-'&&smsBuffer.Buffer2[location_access+6]=='-'&&smsBuffer.Buffer2[location_access+9]=='-'
						&&smsBuffer.Buffer2[location_access+12]=='-'){
				/*parametre 1 :255*/ slaveAccess.ACS_9[0]=(smsBuffer.Buffer2[location_access]-48)*100+(smsBuffer.Buffer2[location_access+1]-48)*10+(smsBuffer.Buffer2[location_access+2]-48)*1;
				/*parametre 2 :01*/  slaveAccess.ACS_9[1]=(smsBuffer.Buffer2[location_access+4 /*3 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+5]-48)*1;
				/*parametre 3 :32*/  slaveAccess.ACS_9[2]=(smsBuffer.Buffer2[location_access+7 /*6 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+8]-48)*1;
				/*parametre 4 :48*/  slaveAccess.ACS_9[3]=(smsBuffer.Buffer2[location_access+10/*9 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+11]-48)*1;
				/*parametre 5 :22*/  slaveAccess.ACS_9[4]=(smsBuffer.Buffer2[location_access+13/*12 is dash - */]-48)*10+(smsBuffer.Buffer2[location_access+14]-48)*1;
				flag=1;			
			}
		}
		}
		
		return flag;
}

char SLV_exteractDelNumberInSms(char flagDel[10])
{
	
		char flag=0;
	
		char* s0_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE0_DEL_STR);
		char* s1_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE1_DEL_STR);
		char* s2_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE2_DEL_STR);
		char* s3_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE3_DEL_STR);
		char* s4_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE4_DEL_STR);
		char* s5_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE5_DEL_STR);
		char* s6_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE6_DEL_STR);
		char* s7_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE7_DEL_STR);
		char* s8_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE8_DEL_STR);
		char* s9_del_location=strstr((char*)smsBuffer.Buffer2,SLAVE9_DEL_STR);
			
	if(s0_del_location)
		{
			int location=(s0_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE0_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_0[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_0[i] = (slaveNumber.volatile_del_0[i] - 48);
				}  
				flagDel[0]='Z';
				flag=1;
		}
		
		if(s1_del_location)
		{
			int location=(s1_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE1_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_1[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_1[i] = (slaveNumber.volatile_del_1[i] - 48);
				}  
				flagDel[1]='Z';
				flag=1;
		}
	
		if(s2_del_location)
		{
			int location=(s2_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE2_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_2[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_1[i] = (slaveNumber.volatile_del_1[i] - 48);
				}  
				flagDel[2]='Z';
				flag=1;
		}
	
		if(s3_del_location)
		{
			int location=(s3_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE3_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_3[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_3[i] = (slaveNumber.volatile_del_3[i] - 48);
				}  
				flagDel[3]='Z';
				flag=1;
		}
	
		if(s4_del_location)
		{
			int location=(s4_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE4_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_4[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_4[i] = (slaveNumber.volatile_del_4[i] - 48);
				}  
				flagDel[4]='Z';
				flag=1;
		}
		
		if(s5_del_location)
		{
			int location=(s5_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE5_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_5[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_5[i] = (slaveNumber.volatile_del_5[i] - 48);
				}  
				flagDel[5]='Z';
				flag=1;
		}
		
		if(s6_del_location)
		{
			int location=(s6_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE6_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_6[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_6[i] = (slaveNumber.volatile_del_6[i] - 48);
				}  
				flagDel[6]='Z';
				flag=1;
		}
		
		if(s7_del_location)
		{
			int location=(s7_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE7_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_7[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_7[i] = (slaveNumber.volatile_del_7[i] - 48);
				}  
				flagDel[7]='Z';
				flag=1;
		}
		
		if(s8_del_location)
		{
			int location=(s8_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE8_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_8[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_8[i] = (slaveNumber.volatile_del_8[i] - 48);
				}  
				flagDel[8]='Z';
				flag=1;
		}
		
		if(s9_del_location)
		{
			int location=(s9_del_location-(char*)smsBuffer.Buffer2)+strlen(SLAVE9_DEL_STR);
			for(volatile int i =location;i<=(location+10);i++ )
			slaveNumber.volatile_del_9[i-location]=smsBuffer.Buffer2[i];
			for (int i = 0; i <= 10;i++)
				{
				slaveNumber.volatile_del_9[i] = (slaveNumber.volatile_del_9[i] - 48);
				}  
				flagDel[9]='Z';
				flag=1;
		}
	
		return flag;
}



char SLV_setDelOprationFunction(void)
{
	static uint16_t stat_flagSetDel=0x0000;
	
	//+989211710114
	//09211710114
	char numberWithOutZero[15];
	char numberWithZero[11];
	
	char extractSetNumberInSms_setflag[10];
	char SLV_exteractDelNumberInSms_flag[10];
	
	
	if(NUS_thisNumberIsSlaveORMaster()=='M')
	{
		if(NUS_Select_number_in_sms(numberWithOutZero,numberWithZero))
		{
			
			if(SLV_extractSetNumberInSms(extractSetNumberInSms_setflag))
			{
				if(SLV_extractAccessSetNumber())
				{
					if(extractSetNumberInSms_setflag[0]=='A')
					{
						
						//نوشتن نشانگر 
						//A
						//در قسمت 
						//EE_SLAVE_A
						EE_WriteVariable(EE_SLAVE_A,'A');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE0_1,slaveNumber.volatile_set_0[i]);
							//Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_A_State_byt1,slaveAccess.ACS_0[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_A_State_byt2,slaveAccess.ACS_0[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_A_State_byt3,slaveAccess.ACS_0[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_A_State_byt4,slaveAccess.ACS_0[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_A_State_byt5,slaveAccess.ACS_0[4]);
						HAL_Delay(10);
						
						
						stat_flagSetDel |= 1;
					}//if(extractSetNumberInSms_setflag[0]=='A')
				
					
					if(extractSetNumberInSms_setflag[1]=='B')
					{
						//نوشتن نشانگر 
						//B
						//در قسمت 
						//EE_SLAVE_B
						EE_WriteVariable(EE_SLAVE_B,'B');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE1_1,slaveNumber.volatile_set_1[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_B_State_byt1,slaveAccess.ACS_1[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_B_State_byt2,slaveAccess.ACS_1[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_B_State_byt3,slaveAccess.ACS_1[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_B_State_byt4,slaveAccess.ACS_1[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_B_State_byt5,slaveAccess.ACS_1[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 2;
					}//if(extractSetNumberInSms_setflag[1]=='B')
				
					
					
				
					if(extractSetNumberInSms_setflag[2]=='C')
					{
						
						//نوشتن نشانگر 
						//C
						//در قسمت 
						//EE_SLAVE_C
						EE_WriteVariable(EE_SLAVE_C,'C');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE2_1,slaveNumber.volatile_set_2[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_C_State_byt1,slaveAccess.ACS_2[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_C_State_byt2,slaveAccess.ACS_2[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_C_State_byt3,slaveAccess.ACS_2[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_C_State_byt4,slaveAccess.ACS_2[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_C_State_byt5,slaveAccess.ACS_2[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 4;
					}//if(extractSetNumberInSms_setflag[2]=='C')
				
					
					if(extractSetNumberInSms_setflag[3]=='D')
					{
						
						//نوشتن نشانگر 
						//A
						//در قسمت 
						//EE_SLAVE_A
						EE_WriteVariable(EE_SLAVE_D,'D');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE3_1,slaveNumber.volatile_set_3[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_D_State_byt1,slaveAccess.ACS_3[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_D_State_byt2,slaveAccess.ACS_3[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_D_State_byt3,slaveAccess.ACS_3[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_D_State_byt4,slaveAccess.ACS_3[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_D_State_byt5,slaveAccess.ACS_3[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 8;
					}//if(extractSetNumberInSms_setflag[3]=='D')
				
					if(extractSetNumberInSms_setflag[4]=='E')
					{
						
						//نوشتن نشانگر 
						//E
						//در قسمت 
						//EE_SLAVE_E
						EE_WriteVariable(EE_SLAVE_E,'E');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE4_1,slaveNumber.volatile_set_4[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_E_State_byt1,slaveAccess.ACS_4[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_E_State_byt2,slaveAccess.ACS_4[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_E_State_byt3,slaveAccess.ACS_4[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_E_State_byt4,slaveAccess.ACS_4[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_E_State_byt5,slaveAccess.ACS_4[4]);
						HAL_Delay(10);
						
						
						stat_flagSetDel |= 16;
					}//if(extractSetNumberInSms_setflag[0]=='A')
				
					
					if(extractSetNumberInSms_setflag[5]=='F')
					{
						
						//نوشتن نشانگر 
						//F
						//در قسمت 
						//EE_SLAVE_F
						EE_WriteVariable(EE_SLAVE_F,'F');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE5_1,slaveNumber.volatile_set_5[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_F_State_byt1,slaveAccess.ACS_5[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_F_State_byt2,slaveAccess.ACS_5[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_F_State_byt3,slaveAccess.ACS_5[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_F_State_byt4,slaveAccess.ACS_5[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_F_State_byt5,slaveAccess.ACS_5[4]);
						HAL_Delay(10);
						
						
						stat_flagSetDel |= 32;
					}//if(extractSetNumberInSms_setflag[5]=='F')
				
					if(extractSetNumberInSms_setflag[6]=='G')
					{
						
						//نوشتن نشانگر 
						//G
						//در قسمت 
						//EE_SLAVE_G
						EE_WriteVariable(EE_SLAVE_G,'G');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE6_1,slaveNumber.volatile_set_6[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_G_State_byt1,slaveAccess.ACS_6[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_G_State_byt2,slaveAccess.ACS_6[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_G_State_byt3,slaveAccess.ACS_6[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_G_State_byt4,slaveAccess.ACS_6[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_G_State_byt5,slaveAccess.ACS_6[4]);
						HAL_Delay(10);
						
						
						stat_flagSetDel |= 64;
					}//if(extractSetNumberInSms_setflag[6]=='G')
				
					
					if(extractSetNumberInSms_setflag[7]=='H')
					{
						
						//نوشتن نشانگر 
						//H
						//در قسمت 
						//EE_SLAVE_H
						EE_WriteVariable(EE_SLAVE_H,'H');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE7_1,slaveNumber.volatile_set_7[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_H_State_byt1,slaveAccess.ACS_7[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_H_State_byt2,slaveAccess.ACS_7[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_H_State_byt3,slaveAccess.ACS_7[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_H_State_byt4,slaveAccess.ACS_7[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_H_State_byt5,slaveAccess.ACS_7[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 128;
					}//if(extractSetNumberInSms_setflag[7]=='H')
				
					if(extractSetNumberInSms_setflag[8]=='I')
					{
						
						//نوشتن نشانگر 
						//I
						//در قسمت 
						//EE_SLAVE_I
						EE_WriteVariable(EE_SLAVE_I,'I');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE8_1,slaveNumber.volatile_set_8[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_I_State_byt1,slaveAccess.ACS_8[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_I_State_byt2,slaveAccess.ACS_8[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_I_State_byt3,slaveAccess.ACS_8[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_I_State_byt4,slaveAccess.ACS_8[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_I_State_byt5,slaveAccess.ACS_8[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 256;
					}//if(extractSetNumberInSms_setflag[8]=='I')
				
					if(extractSetNumberInSms_setflag[9]=='J')
					{
						
						//نوشتن نشانگر 
						//J
						//در قسمت 
						//EE_SLAVE_J
						EE_WriteVariable(EE_SLAVE_J,'J');
						HAL_Delay(10);
						flasher(20,50,10);//فلاشر 
						//حلقه استخراج و ذخيره 
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE9_1,slaveNumber.volatile_set_9[i]);
							Buzzer(50,10);//بازر
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						EE_WriteVariable(EE_SLAVE_J_State_byt1,slaveAccess.ACS_9[0]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_J_State_byt2,slaveAccess.ACS_9[1]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_J_State_byt3,slaveAccess.ACS_9[2]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_J_State_byt4,slaveAccess.ACS_9[3]);
						HAL_Delay(10);
						EE_WriteVariable(EE_SLAVE_J_State_byt5,slaveAccess.ACS_9[4]);
						HAL_Delay(10);
						
						
							stat_flagSetDel |= 512;
					}//if(extractSetNumberInSms_setflag[0]=='J')
			
					
				}//if(SLV_extractAccessSetNumber())
			}//if(SLV_extractSetNumberInSms(extractSetNumberInSms_setflag))
			
			if(SLV_exteractDelNumberInSms(SLV_exteractDelNumberInSms_flag))
			{
				if(SLV_exteractDelNumberInSms_flag[0]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_A,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='A')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_A,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_A_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_A_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_A_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_A_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_A_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE0_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
						stat_flagSetDel &=~ 1;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='A'
				}//if(SLV_exteractDelNumberInSms_flag[0]=='Z')
				
				
				
				
				if(SLV_exteractDelNumberInSms_flag[1]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_B,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='B')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_B,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_B_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_B_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_B_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_B_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_B_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE1_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 2;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='B'
				}//if(SLV_exteractDelNumberInSms_flag[1]=='Z')
				
				
				if(SLV_exteractDelNumberInSms_flag[2]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_C,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='C')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_C,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_C_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_C_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_C_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_C_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_C_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE2_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 4;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='C'
				}//if(SLV_exteractDelNumberInSms_flag[0]=='Z')
				
				
				
				if(SLV_exteractDelNumberInSms_flag[3]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_D,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='D')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_D,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_D_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_D_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_D_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_D_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_D_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE3_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 8;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='D'
				}//if(SLV_exteractDelNumberInSms_flag[3]=='Z')
				
				
				
				
				if(SLV_exteractDelNumberInSms_flag[4]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_E,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='E')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_E,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_E_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_E_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_E_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_E_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_E_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE4_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 16;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='E'
				}//if(SLV_exteractDelNumberInSms_flag[4]=='Z')
				
				
				if(SLV_exteractDelNumberInSms_flag[5]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_F,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='F')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_F,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_F_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_F_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_F_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_F_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_F_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE5_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 32;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='F'
				}//if(SLV_exteractDelNumberInSms_flag[5]=='Z')
				
				
				
				if(SLV_exteractDelNumberInSms_flag[6]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_G,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='G')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_G,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_G_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_G_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_G_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_G_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_G_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE6_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
							stat_flagSetDel &=~ 64;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='G'
				}//if(SLV_exteractDelNumberInSms_flag[6]=='Z')
				
				
				
				if(SLV_exteractDelNumberInSms_flag[7]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_H,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='H')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_H,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_H_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_H_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_H_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_H_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_H_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE7_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
								stat_flagSetDel &=~ 128;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='H'
				}//if(SLV_exteractDelNumberInSms_flag[7]=='Z')
				
				
				
				if(SLV_exteractDelNumberInSms_flag[8]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_I,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='I')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_I,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_I_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_I_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_I_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_I_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_I_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE8_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
							stat_flagSetDel &=~ 256;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='I'
				}//if(SLV_exteractDelNumberInSms_flag[8]=='Z')
				
				
				
				
				if(SLV_exteractDelNumberInSms_flag[9]=='Z')
				{
					//دريافت مقدار از داخل حافظه ماندگار
					uint16_t ee_slave_flag=0;
					EE_ReadVariable(EE_SLAVE_J,&ee_slave_flag);
					//اگر مقدار حافظه برابر 
					//Z
					//نبود يعني بايد اسليو ذخيره شده حذف شود 
					if(ee_slave_flag !='Z' && ee_slave_flag =='J')
					{
						//عمليات نوشتن در حافظه ماندگار
						EE_WriteVariable(EE_SLAVE_J,'Z');
					//	flasher(20,50,10);//فلاشر
						EE_WriteVariable(EE_SLAVE_J_State_byt1,0);
						EE_WriteVariable(EE_SLAVE_J_State_byt2,0);
						EE_WriteVariable(EE_SLAVE_J_State_byt3,0);
						EE_WriteVariable(EE_SLAVE_J_State_byt4,0);
						EE_WriteVariable(EE_SLAVE_J_State_byt5,0);
						HAL_Delay(10);
						//حلقه حذف
						for(volatile int i = 0 ; i <= 10 ; i++)
						{
							EE_WriteVariable(i+EE_SLAVE9_1,0);
							Buzzer(20,100);
							HAL_GPIO_TogglePin(Led_Pointer_GPIO_Port,Led_Pointer_Pin);
						}
							stat_flagSetDel &=~ 512;
						
					}//if(ee_slave_flag !='Z' && ee_slave_flag =='J'
				}//if(SLV_exteractDelNumberInSms_flag[9]=='Z')
				
			}//if(SLV_exteractDelNumberInSms(SLV_exteractDelNumberInSms_flag))
			
			
			
			/*استراکت وحافظه هيپ کمکي*/
				struct symbolprintf
				{
					int scale[11];
				};
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
				char str[20];	
		if(stat_flagSetDel!=0)
		{
			
			sprintf(str,"Slave is :%d",stat_flagSetDel);
			send_sms(str,masterNumber);
		}
			
		}//NUS_Select_number_in_sms(numberWithOutZero,numberWithZero)
	}//nus_thisNumberIsSlaveORMaster()
	
	return stat_flagSetDel;
}//char SLV_setDelOprationFunction(void)




void SLV_slaveOprationFunction(void)
{
	
	if(SLV_setDelOprationFunction())
	{
		Buzzer(10,10);
		EE_eepromReadAllData();
	}
}

