#include"HW_Uart.h"
#include"HW_gpio.h"
#include"SysCtrl.h"
#include"UART.h"

void Uart1_Init(void){//Start Implementaion Here.
                        
//Setup the GPIO PORTB PB0,PB1
   //Enable clock for PORTB
	  clock_Enable_PORT(Clock_PortB);
	 //ckeck lock PB0,PB1
	  GPIO_PORTB_lock=0x4c4f434b;
	  GPIO_PORTB_CR|=0x00000003;
	 //Enable the direction of PORTB pins
  	GPIO_PORTB_DIR|=(1<<PB1);  //TX
	  GPIO_PORTB_DIR&=~(1<<PB0); //RX
	 //Select alternating Function for PORTB pins as UART1
	  GPIO_PORTB_AFSEL|=0x03;
	 // Access port functions from control table to enable UART1 function 
	  GPIO_PORTB_PCTRL|=0x11;	
	 //Enable digital function for porte pins
	  GPIO_PORTB_DEN|=(1<<PB0)|(1<<PB1);	
	 //Turn off Analog function in PB0-PB1
	  GPIO_PORTB_ADCCTRL&=~((1<<PB0)|(1<<PB1));

//Setup the UART Module in TM4C ArmCortex	
	 //Enable the clock for UART
	  Clock_Enable_UART(UART1);
	 //Disable FIFO
    UART1_L_CTL&=~(1<<4);	
	 //Disable UART to start the configuration and divisor factor is 16 in BUDR equation.
	  UART1_CTRL&=~((1<<0)|(1<<5));
   //Configure the BAUDRATE = sysClock/(16*sysDIV) ->[ 9600=( 16 *10^(6) )/(16 * SysDIV) ] then integer=104 ,fraction=(0.1666*64)+0.5
	  UART1_I_BUR=104;
		UART1_F_BUR=11;
	 //FRAME Configuartion 8bit data,no parity,1 stop bit,FIFO enable,
    UART1_L_CTL|=(1<<5)|(1<<6)|(1<<4);
   //Clock configure let UART depend on clock source.
	  UART1_CLK_C=0x00;
	 //Enable UART
    UART1_CTRL|=(1<<0);	 
	 //Enable transmitter 
    UART1_CTRL|=(1>>8);
	 //ENable RX
	  UART1_CTRL|=(1<<9);		
	
	
}//End of Initialization Function.

/* ------------------------------------ TX Function ----------------------------------------------------*/
void UART1_SendByte(U8_t byte){
	
	//check FIFO status->when flag is set then FIFO empty
	while((UART1_FLAG&(1<<7))==0){
		            //Wait :: Loop
	      }//While  
	
		//send data
		UART1_DATA=byte;
	
}//End of TX function


/* ------------------------------------ RX Function ----------------------------------------------------*/

U8_t UART1_RecieveByte(void){

	//check FIFO status->when flag is set then FIFO can not recieve data
  while((UART1_FLAG&(1<<4))!=0){
		            //Wait::Loop
	     }//While      
	
	  return UART1_DATA;
	
}//End of RX function











