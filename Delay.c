#include "Delay.h"

void SystemInit(void){
/* Grant coprocessor access*/
/* This is required since TM4C123G has a floating point coprocessor */
SCB_CPAC |= 0x00F00000;
	
}

// delay function in mili seconde.
void delayMsec(U32_t miliSec){
U32_t i, j;
for(i = 0 ; i < miliSec; i++)
for(j = 0; j < 3180; j++)
{} /* do nothing for 1 ms */
}//End of function.


// delay function in micro seconde.
void delayUs(U32_t n)
{
U32_t i, j;
for(i = 0 ; i < n; i++)
for(j = 0; j < 3; j++)
{} /* do nothing for 1 us */
}//End of function.
