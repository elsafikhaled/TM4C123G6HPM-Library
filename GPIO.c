#include "GPIO.h"

void GPIO_PortE_Init(void){
	
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
	

}


void GPIO_PortA_Init(void){
	
	//ckeck lock
	GPIO_PORTA_lock=0x4c4f434b;
	GPIO_PORTA_CR=0x000000ff;
	
	
	//Enable the direction of PORTA pins
	       //<....output PA0,1,2,3,4,5....>
	GPIO_PORTA_DIR=(1<<PA7)|(1<<PA6)|(1<<PA2)|(1<<PA3)|(1<<PA4)|(1<<PA5);
	
	//Select alternating Function for PORTA pins as digital
	GPIO_PORTA_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTA_PCTRL=0x00;
	
	//Enable digital function for PORTA pins
	GPIO_PORTA_DEN =(1<<PA7)|(1<<PA6)|(1<<PA5)|(1<<PA4)|(1<<PA3)|(1<<PA2);
	
	//Turn off Analog function
	GPIO_PORTA_ADCCTRL=0x00;
	

}


void GPIO_PortB_Init(void){
	
	//ckeck lock
	GPIO_PORTB_lock=0x4c4f434b;
	GPIO_PORTB_CR=0x000000ff;
	
	
	//Enable the direction of PORTB pins
	       //<....output PB0,1,2,3,4,5....>
	GPIO_PORTB_DIR=(1<<PB0)|(1<<PB1)|(1<<PB2)|(1<<PB3)|(1<<PB4)|(1<<PB5)|(1<<PB6)|(1<<PB7);
	
	//Select alternating Function for PORTB pins as digital
	GPIO_PORTB_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTB_PCTRL=0x00;
	
	//Enable digital function for porte pins
	GPIO_PORTB_DEN =(1<<PB0)|(1<<PB1)|(1<<PB2)|(1<<PB3)|(1<<PB4)|(1<<PB5)|(1<<PB6)|(1<<PB7);
	
	//Turn off Analog function
	GPIO_PORTB_ADCCTRL=0x00;
	

}


void GPIO_PortC_Init(void){
	
	//ckeck lock
	GPIO_PORTC_lock=0x4c4f434b;
	GPIO_PORTC_CR=0x000000ff;
	
	
	//Enable the direction of PORTC pins
	       //<....output PC0,1,2,3,4,5....>
	GPIO_PORTC_DIR=(1<<PC7)|(1<<PC6)|(1<<PC5)|(1<<PC4);
	
	//Select alternating Function for PORTC pins as digital
	GPIO_PORTC_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTC_PCTRL=0x00;
	
	//Enable digital function for portC pins
	GPIO_PORTC_DEN =(1<<PC7)|(1<<PC6)|(1<<PC5)|(1<<PC4);
	
	//Turn off Analog function
	GPIO_PORTC_ADCCTRL=0x00;
	

}


void GPIO_PortD_Init(void){
	
	//ckeck lock
	GPIO_PORTD_lock=0x4c4f434b;
	GPIO_PORTD_CR=0x000000ff;
	
	
	//Enable the direction of PORTD pins
	       //<....output PD0,1,2,3,4,5....>
	GPIO_PORTD_DIR=(1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD6)|(1<<PD7);
	
	//Select alternating Function for PORTD pins as digital
	GPIO_PORTD_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTD_PCTRL=0x00;
	
	//Enable digital function for porte pins
	GPIO_PORTD_DEN =(1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD6)|(1<<PD7);
	
	//Turn off Analog function
	GPIO_PORTD_ADCCTRL=0x00;
	

}



void GPIO_PortF_Init(void){
	
	//ckeck lock
	GPIO_PORTF_lock=0x4c4f434b;
	GPIO_PORTF_CR=0x000000ff;
	
	
	//Enable the direction of PORTF pins
	       //<....output PF0,1,2,3,4,5....>
	GPIO_PORTF_DIR=(1<<PF0)|(1<<PF1)|(1<<PF2)|(1<<PF3)|(1<<PF6);
	
	//Select alternating Function for PORTF pins as digital
	GPIO_PORTF_AFSEL=0x00;
	
	// Access port functions from control table
	GPIO_PORTF_PCTRL=0x00;
	
	//Enable digital function for portF pins
	GPIO_PORTF_DEN =(1<<PF0)|(1<<PF1)|(1<<PF2)|(1<<PF3)|(1<<PF6);
	
	//Turn off Analog function
	GPIO_PORTF_ADCCTRL=0x00;
	

}
