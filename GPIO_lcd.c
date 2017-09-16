#define "GPIO_lcd.h"



void GPIO_LcdPortE_Init(void){

	//ckeck lock
	GPIO_PORTE_lock=0x4c4f434b;
	GPIO_PORTE_CR=0x000000ff;
	
	
	//Enable the direction of PORTE pins
	       //<....output PE0,1,2,3,4,5....>
	GPIO_PORTE_DIR=(1<<PE0)|(1<<PE1)|(1<<PE2)|(1<<PE3)|(1<<PE4)|(1<<PE5);
	
	//Select alternating Function for PORTE pins as digital
	GPIO_PORTE_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTE_PCTRL=0x00;
	
	//Enable digital function for porte pins
	GPIO_PORTE_DEN =(1<<PE1)|(1<<PE2)|(1<<PE3)|(1<<PE5)|(1<<PE0)|(1<<PE4);
	
	//Turn off Analog function
	GPIO_PORTE_ADCCTRL=0x00;
		
	
}//end of gpio lcd function.
