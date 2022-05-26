#include "AllLib.h"


extern UART_HandleTypeDef huart1;// fa'al saz UART1
#define HUART   huart1
#define UART  	USART1

extern uart_BufferTypedef smsBuffer;

//_____________________________________________________________________________
//This function is Printf...

#ifdef __GNUC__
/* With GCC, small printf (option LD Linker->Libraries->Small printf
   set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART2 and Loop until the end of transmission */
  HAL_UART_Transmit(&HUART, (uint8_t *)&ch, 1, 100);

  return ch;
}
//This function is Printf...
//------------------------------------------------------------------

void UART_Recive_Reset(void)//this function for refresh URAT_RX
{
	HAL_UART_Receive_IT(&HUART,&(smsBuffer.Reciver_Char),1);
}

//------------------------------------------------------------------

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	//faghat interrupt Uart2 ra darnazar begir
  if(huart ->Instance == UART)
	{
		//ba har bar daryaft charachter jadid dar khane haye RX-Buffer zakhire mishe...
		 smsBuffer.Buffer1[ smsBuffer.Counter++]=smsBuffer.Reciver_Char;
		
		//agar counter bozorgtar az 1000 shod counter ra sefr mikonad...
		if( smsBuffer.Counter>1000) smsBuffer.Counter=0;
	}
	UART_Recive_Reset();//this function for refresh URAT_RX
}
//------------------------------------------------------------------


//in function baraye pak kardan khone haye " GLO_Rx_Buffer"
void UART_clear_Rx_Buffer(int clear_counter)
{
	volatile int i = 0 ;
	for(i = 0 ; i <= clear_counter ;i++ ) smsBuffer.Buffer1[i]=0; 
	//baraye inke counter  GLO_Rx_Buffer ro sefr konim ta az sefr shoro kone be neveshtan chrachter jadid..
	 smsBuffer.Counter = 0 ;
}
//------------------------------------------------------------------

//in function baraye pak kardan khone haye " smsBuffer.Buffer2"
void UART_clear_Rx_Buffer_copy(int clear_counter)
{
volatile int i = 0 ;
for(i = 0 ; i <= clear_counter ;i++ ) smsBuffer.Buffer2[i]=0; 
}

//------------------------------------------------------------------



