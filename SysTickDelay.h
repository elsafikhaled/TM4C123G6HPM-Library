#ifndef __SYSTICKDELAY_H__
#define __SYSTICKDELAY_H__
#include"data_types.h"

//registers declarations

#define SysTick_Base                        0XE000E000
#define Sys_CTL          *((volatile U32_t*)0XE000E010)
#define Sys_RELOAD       *((volatile U32_t*)0XE000E014)
#define Sys_CURRENT      *((volatile U32_t*)0XE000E018)

// delay functions by 24bit counter

void SysTick_DelayMS(U32_t MS);

/*
- Description: make a delay in mili seconds by 24 bit system tick counter.
- parameters : number of mili seconds
- Return     :void
*/

void SysTick_DelayUS(U32_t US);

/*
- Description: make a delay in micro seconds by 24 bit system tick counter.
- parameters : number of micro seconds
- Return     :void
*/








#endif //__SYSTICKDELAY_H__


