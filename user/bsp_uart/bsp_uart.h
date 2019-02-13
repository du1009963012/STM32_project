#ifndef _BSP_UART_H
#define _BSP_UART_H
#include "stm32f10x.h"

#define UART1_Port 1
#define UART1_RX_GPIO 1
#define UART1_TX_GPIO 1


#define UART2_Port  2
#define UART2_RX_GPIO 2
#define UART2_TX_GPIO 2

#define UART3_Port 3
#define UART3_RX_GPIO 3
#define UART3_TX_GPIO 3

void UART1_init(void);
void UART2_init(void);
void UART3_init(void);

u16 UART1_send(char* str,int length);
u16 UART2_send(char* str,int length);
u16 UART3_send(char* str,int length);
#endif