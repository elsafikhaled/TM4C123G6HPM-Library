#ifndef __GPIO_H__
#define __GPIO_H__
#include "HW_gpio.h"



// enum used in debugging
typedef enum gpioDebug{
	OK=1,
  FAILED=0,
	
}gpioDebug_t;

// initialization PORTA
void GPIO_PortA_Init(void);

// initialization PORTB
void GPIO_PortB_Init(void);

// initialization PORTC
void GPIO_PortC_Init(void);

// initialization PORTD
void GPIO_PortD_Init(void);

// initialization PORTE
void GPIO_PortE_Init(void);

// initialization PORTF
void GPIO_PortF_Init(void);



	
#endif //__GPIO_H__
