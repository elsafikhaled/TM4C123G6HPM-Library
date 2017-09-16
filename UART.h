#ifndef __UART_H__
#define __UART_H__
#include "data_types.h"



void Uart1_Init(void);
/*
 * Input: void
 *
 * Description: Make initialization for UART module like FRAME,BAUDRATE,CLOCK and GPIO.
 *
 * Default:9600 bps, Frame-< 9600bps - 1 start bit - 8bit data - no parity - 1 stop bit >.
 *
 * Return : void
 * ********************************************************************************************/

void UART1_SendByte(U8_t byte);
/*
 * Input: one unsigned char -> byte 
 *
 * Description: one byte to be sent to FIFO
 *
 * Default:FIFO enabled
 *
 * Return : void
 * ********************************************************************************************/

U8_t UART1_RecieveByte(void);
/*
 * Input: void
 *
 * Description: Recieve one unsigned char -> byte 
 *
 * Default: 4 Error Flags FE,PE,BE,OE are enabled.
 *
 * Return : Byte.
 * ********************************************************************************************/

















#endif //__UART_H__

