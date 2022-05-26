#ifndef _Uart_H
#define _Uart_H
#include <stdint.h>
//this function for refresh URAT_RX
void UART_Recive_Reset(void);
//in function baraye pak kardan khone haye " GLO_Rx_Buffer"
void UART_clear_Rx_Buffer(int clear_counter/*tedade khonehaie ke bayad pak shavad*/);
//in function baraye pak kardan khone haye " smsBuffer.Buffer2"
void UART_clear_Rx_Buffer_copy(int clear_counter/*tedade khonehaie ke bayad pak shavad*/);




#endif
