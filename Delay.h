#ifndef __SPECIALFUNCTION_H__
#define __SPECIALFUNCTION_H__
#include "data_types.h"


/* coprocessor access control register */
#define SCB_CPAC (*((volatile unsigned int*)0xE000ED88))
	

/* 

This function is called by the startup assembly code to perform system specific
initialization tasks.

*/
void SystemInit(void);

// *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

/*

this function for delay in mili seconde.
delay n milliseconds (16 MHz CPU clock). 

*/
void delayMsec(U32_t miliSec);

// *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

void delayUs(U32_t n);






#endif
