#ifndef __HW_UART_H__
#define __HW_UART_H__
#include"data_types.h"


// UART1 Aderesse Bus
#define UART1_BASE_ADDRESSE    0x4000D000  

// UART1 Registers Configuration

#define UART1_DATA          *((volatile U32_t*)0x4000D000)
#define UART1_RS_EC         *((volatile U32_t*)0x4000D004)
#define UART1_FLAG          *((volatile U32_t*)0x4000D018)
#define UART1_I_BUR         *((volatile U32_t*)0x4000D024)
#define UART1_F_BUR         *((volatile U32_t*)0x4000D028)
#define UART1_L_CTL         *((volatile U32_t*)0x4000D02C)
#define UART1_CTRL          *((volatile U32_t*)0x4000D030)
#define UART1_ICR           *((volatile U32_t*)0x4000D044)
#define UART1_CLK_C         *((volatile U32_t*)0x4000DFC8)

// Reciever  Error Flags

#define FE   0
#define PE   1
#define BE   2
#define OE   3







#endif //__HW_UART_H__
