#include"SysTickDelay.h"


void SysTick_DelayMS(U32_t MS){//Start of Function.

//Enable timer  and use only system clock 16MHZ.	
Sys_CTL|=(1<<2)|(1<<0);
//disable interrupt.
Sys_CTL&=~(1<<1);	
	
//get 1 mili sec until time out. 
Sys_RELOAD=16000;	

while(MS>0){	
//check timer overflow or time out 
while(!(Sys_CTL& 0x00010000))	
{
	//loop and wait 1 mili second.
}	
//decrease the counter.
   MS--;
}
//stop timer.
Sys_CTL=0;

}//End of Function.



/* delay function in micro second */




void SysTick_DelayUS(U32_t US){//Start of Function.

//Enable timer  and use only system clock 16MHZ.	
Sys_CTL|=(1<<2)|(1<<0);
//disable interrupt.
Sys_CTL&=~(1<<1);	
	
//get 1 micro sec until time out. 
Sys_RELOAD=16;	

while(US>0){	
//check timer overflow or time out 
while(!(Sys_CTL& 0x00010000))	
{
	//loop and wait 1 micro second.
}	
//decrease the counter.
   US--;
}
//stop timer.
Sys_CTL=0;

}//End of Function.

