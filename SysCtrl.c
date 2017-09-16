#include "SysCtrl.h"

// Enable clock of the demanded port and offline others to save power.

//GPIO CLOCK
void clock_Enable_PORT(U8_t port){
	// make a delay to manipulate instruction well.
	U32_t delay=0;
	//Access clock register.
	GPIO_RCGC_PORT|=port;
	delay=GPIO_RCGC_PORT;
		
}//End of clock function



//UART CLOCK
void Clock_Enable_UART(U8_t uart_n){
	// make a delay to manipulate instruction well.
	U32_t delay=0;
	//Access clock register.	
	UART_RCGC|=uart_n;
	delay=GPIO_RCGC_PORT;

}//End of clock function
