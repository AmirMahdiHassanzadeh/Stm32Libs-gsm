#include "Alllib.h"


extern	uint8_t  		GLO_Rx_Buffer[]; //Rx_Buffer baraye jam kardan hameye karakter ha ...
extern  uint8_t  		GLO_Rx_Buffer_COPY[];	//Rx_Buffer_COPY baraye copy kardan Rx_Buffer ast ...
extern  uint16_t  	slave_access[10][5];
extern  uint16_t 		ee_master[12];
extern  uint16_t    i_master_set[11];

uint16_t  phonNumber[10][11]

char SLV_gatSetNumber(void)
{
	 uint16_t numberLoacation[10];
	//تابع دريافت خانه اولين عدد شماره ثبتي از اس ام اس
	char return_flag=0;
	if(NUS_thisNumberIsSlaveORMaster()=='M')
	{
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='0'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[0]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
			for(int i = numberLoacation[0] ; i <= numberLoacation[0]+11 ; i++){phonNumber[0][i]=(GLO_Rx_Buffer_COPY[numberLoacation[i]]-48);}
		
		Buzzer(100,10);
		
		
		
		
		
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='1'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[1]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='2'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[2]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='3'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[3]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='4'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[4]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='5'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[5]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='6'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[6]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='7'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[7]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='8'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[8]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='9'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='s'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='t'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 numberLoacation[9]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
		}
		
		
		
	}
	return return_flag;
}





char SLV_locationDelNumber(uint16_t Slave[10])
{
	//تابع دريافت خانه اولين عدد شماره ثبتي از اس ام اس
	char return_flag=0;
	if(NUS_thisNumberIsSlaveORMaster()=='M')
	{
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='0'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[0]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='1'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[1]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='2'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[2]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='3'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[3]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='4'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[4]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='5'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[5]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='6'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[6]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='7'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[7]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='8'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[8]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
		
		for(int i =0 ; i <= strlen((char*)GLO_Rx_Buffer_COPY);i++)
		{
			if(GLO_Rx_Buffer_COPY[i]=='s'&&GLO_Rx_Buffer_COPY[i+1]=='9'&&
				 GLO_Rx_Buffer_COPY[i+2]=='_'&&GLO_Rx_Buffer_COPY[i+3]=='d'&&
				 GLO_Rx_Buffer_COPY[i+4]=='e'&&GLO_Rx_Buffer_COPY[i+5]=='l'&&
				 GLO_Rx_Buffer_COPY[i+6]==':'){
					 Slave[9]=i+6 /*اول :هستش در پيام*/+1/*يک براي اين که از 0شماره شروع کنه*/;
					 return_flag=1;
					break;
				 }
	
		}
	}
	return return_flag;
}









char SLV_selectAccessInNumber(uint16_t  slave_access[10][5])
{
	char return_flag =0 ;
	if(NUS_thisNumberIsSlaveORMaster()=='M')
	{
		char* s0_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access0:");
		if(s0_access_location){
			int location_access=(s0_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access0:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[0][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[0][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[0][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[0][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[0][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
		
		char* s1_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access1:");
		if(s1_access_location){
			int location_access=(s1_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access1:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[1][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[1][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[1][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[1][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[1][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
		
			char* s2_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access2:");
			if(s2_access_location){
			int location_access=(s2_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access2:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[2][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[2][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[2][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[2][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[2][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
		
				
			char* s3_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access3:");
			if(s3_access_location){
			int location_access=(s3_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access3:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[3][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[3][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[3][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[3][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[3][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
			
			char* s4_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access4:");
			if(s4_access_location){
			int location_access=(s4_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access4:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[4][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[4][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[4][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[4][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[4][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
			
			char* s5_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access5:");
			if(s5_access_location){
			int location_access=(s5_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access5:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[5][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[5][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[5][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[5][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[5][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
			char* s6_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access6:");
			if(s6_access_location){
			int location_access=(s6_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access6:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[6][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[6][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[6][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[6][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[6][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
			
				char* s7_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access7:");
			if(s7_access_location){
			int location_access=(s7_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access7:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[7][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[7][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[7][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[7][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[7][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
			
				char* s8_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access8:");
			if(s8_access_location){
			int location_access=(s8_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access8:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[8][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[8][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[8][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[8][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[8][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
			
				char* s9_access_location=strstr((char*)GLO_Rx_Buffer_COPY,"access9:");
			if(s9_access_location){
			int location_access=(s9_access_location-(char*)GLO_Rx_Buffer_COPY)+strlen("access9:");
			//access0:255-01-32-48-22
			/*parametre 1 :255*/ slave_access[9][0]=(GLO_Rx_Buffer_COPY[location_access]-48)*100+(GLO_Rx_Buffer_COPY[location_access+1]-48)*10+(GLO_Rx_Buffer_COPY[location_access+2]-48)*1;
			/*parametre 2 :01*/  slave_access[9][1]=(GLO_Rx_Buffer_COPY[location_access+4 /*3 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+5]-48)*1;
			/*parametre 3 :32*/  slave_access[9][2]=(GLO_Rx_Buffer_COPY[location_access+7 /*6 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+8]-48)*1;
			/*parametre 4 :48*/  slave_access[9][3]=(GLO_Rx_Buffer_COPY[location_access+10/*9 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+11]-48)*1;
			/*parametre 5 :22*/  slave_access[9][4]=(GLO_Rx_Buffer_COPY[location_access+13/*12 is dash - */]-48)*10+(GLO_Rx_Buffer_COPY[location_access+14]-48)*1;
			return_flag=1;
			}
		}
			return return_flag;
}










extern uint16_t setnumber[10][11];
char SLV_oprationFunction(void/*uint16_t slave[10][5]*/)
{
	//uint16_t slv[10];
	//uint16_t access[10][5];
	
	//SLV_locationSetNumber(slv);
	//SLV_selectAccessInNumber(access);
	SLV_gatSetNumber();
	return 1;
}


	
