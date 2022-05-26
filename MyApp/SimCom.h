#ifndef  _SimCom_H
#define  _SimCom_H



//in tabe baraye ijad yek palse sefr baraye rah'andazi GSM ast.
//         _________ <---1s---> _________
//									|__________|
void SIM_SimCom_PowerKey_En(void);

//in tabeh baraye ferestadan command AT baraye daryaft OK  ast
void SIM_AT_Command(void);

//ham'eye sms haye inbox ro pak mikone...
void SIM_delet_all_sms(void);

//ham'eye sms hayi ke khondeh shod az inbox ra pak mikone...
void SIM_delet_read_sms(void);

//fa'al kardan ECO..
void SIM_Eco_On(void);

//GHeyre fa'al kardan ECO..
void SIM_Eco_Off(void);

//fa'al kardan SMS az noe text..
void SIM_SMS_TEXT_TYPE(void);

//fa'al kardan SMS baraye hame model mobile...
void SIM_SMS_ALL_Phone(void);

//baraye gereftan saat az shabake
void SIM_Get_Time_Network(void);

//Gheire fa'al kardane sarasari gprs (internet 2G)
void SIM_Disable_Totality_Gprs(void);
	
//fa'al kardane gprs (internet 2G)
void SIM_Enable_Gprs(void);
//baraye zakhire tanzimat...
void SIM_Permanently_Setting(void);
//Set the connection type to GPRS
void SIM_Contype_Gprs(void);
	
//set APN simcard .....
void SIM_Set_APN (char simcard_name);

//To open a GPRS context. 
void SIM_Gprs_Open_Context(void);

//To open a GPRS context. 
void SIM_Gprs_Open_Context(void);
	
// Start Sync Network Time 
void SIM_Ntp_Server_gettime(void);

//SIM_Get_Time_RtcGSM
void SIM_Get_Time_RtcGSM(void);

//gheire fa'al kardane gprs (internet 2G)
void SIM_Disable_Gprs(void);

//Earn SMS Service Center Address
//baraye bedast avordan shomare simcard..
void SIM_Earn_Center_number(void);

//check signal power
void SIM_Signal_Power(void);

//read sms command
char Read_Sms(void);

//Ring_Number_show in call
void Ring_Number_show(void);
//reject call
void reject_call(void);

//send Sms 
void send_sms(const char *smsMsg,char phone_number[11]);



char check_simcard_name(void);

void ring_call_sms(void);
void ring_call(void);

#endif
