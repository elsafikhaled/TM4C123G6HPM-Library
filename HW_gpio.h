#ifndef __HW_GPIO_H__ 
#define __HW_GPIO_H__ 
#include "data_types.h"
//PORTA

//PORTA PINS

#define  PA2   2
#define  PA3   3
#define  PA4   4
#define  PA5   5
#define  PA6   6
#define  PA7   7

// Base Addresses APB
#define GPIO_PORTA_APB_BASE 0x40004000

// Base Adresses AHPB
#define GPIO_PORTA_AHPB_BASE 0x40058000

// APB:advanced peripheral Bus
#define GPIO_PORTA_DATA              *((volatile U32_t *)0x400043FC)
#define GPIO_PORTA_DIR               *((volatile U32_t *)0x40004400)
#define GPIO_PORTA_INTSEN            *((volatile U32_t *)0x40004404)
#define GPIO_PORTA_INTBEDG           *((volatile U32_t *)0x40004408)
#define GPIO_PORTA_INTEVET           *((volatile U32_t *)0x4000440C)
#define GPIO_PORTA_INTMAS            *((volatile U32_t *)0x40004410)	
#define GPIO_PORTA_INTRS             *((volatile U32_t *)0x40004414)
#define GPIO_PORTA_INTMIS            *((volatile U32_t *)0x40004418)
#define GPIO_PORTA_INTCLEAR          *((volatile U32_t *)0x4000441C)
#define GPIO_PORTA_AFSEL             *((volatile U32_t *)0x40004420)
#define GPIO_PORTA_DR2R              *((volatile U32_t *)0x40004500)
#define GPIO_PORTA_DR4R              *((volatile U32_t *)0x40004504)
#define GPIO_PORTA_DR8R              *((volatile U32_t *)0x40004508)	
#define GPIO_PORTA_OPDR              *((volatile U32_t *)0x4000450C)
#define GPIO_PORTA_PUR               *((volatile U32_t *)0x40004510)
#define GPIO_PORTA_PDR               *((volatile U32_t *)0x40004514)
#define GPIO_PORTA_SLR               *((volatile U32_t *)0x40004518)
#define GPIO_PORTA_DEN               *((volatile U32_t *)0x4000451C)
#define GPIO_PORTA_lock              *((volatile U32_t *)0x40004520)
#define GPIO_PORTA_CR                *((volatile U32_t *)0x40004524)
#define GPIO_PORTA_AMSEL             *((volatile U32_t *)0x40004528)
#define GPIO_PORTA_PCTRL             *((volatile U32_t *)0x4000452C)
#define GPIO_PORTA_ADCCTRL           *((volatile U32_t *)0x40004530)
#define GPIO_PORTA_DMA               *((volatile U32_t *)0x40004534)
	

//PORTB

//PORTB PINS
#define  PB0   0
#define  PB1   1
#define  PB2   2
#define  PB3   3
#define  PB4   4
#define  PB5   5
#define  PB6   6
#define  PB7   7

// Base Addresses APB
#define GPIO_PORTB_APB_BASE 0x40005000

// Base Adresses AHPB
#define GPIO_PORTB_AHPB_BASE 0x40059000

// APB:advanced peripheral Bus
#define GPIO_PORTB_DATA              *((volatile U32_t *)0x400053FC)
#define GPIO_PORTB_DIR               *((volatile U32_t *)0x40005400)
#define GPIO_PORTB_INTSEN            *((volatile U32_t *)0x40005404)
#define GPIO_PORTB_INTBEDG           *((volatile U32_t *)0x40005408)
#define GPIO_PORTB_INTEVET           *((volatile U32_t *)0x4000540C)
#define GPIO_PORTB_INTMAS            *((volatile U32_t *)0x40005410)	
#define GPIO_PORTB_INTRS             *((volatile U32_t *)0x40005414)
#define GPIO_PORTB_INTMIS            *((volatile U32_t *)0x40005418)
#define GPIO_PORTB_INTCLEAR          *((volatile U32_t *)0x4000541C)
#define GPIO_PORTB_AFSEL             *((volatile U32_t *)0x40005420)
#define GPIO_PORTB_DR2R              *((volatile U32_t *)0x40005500)
#define GPIO_PORTB_DR4R              *((volatile U32_t *)0x40005504)
#define GPIO_PORTB_DR8R              *((volatile U32_t *)0x40005508)	
#define GPIO_PORTB_OPDR              *((volatile U32_t *)0x4000550C)
#define GPIO_PORTB_PUR               *((volatile U32_t *)0x40005510)
#define GPIO_PORTB_PDR               *((volatile U32_t *)0x40005514)
#define GPIO_PORTB_SLR               *((volatile U32_t *)0x40005518)
#define GPIO_PORTB_DEN               *((volatile U32_t *)0x4000551C)
#define GPIO_PORTB_lock              *((volatile U32_t *)0x40005520)
#define GPIO_PORTB_CR                *((volatile U32_t *)0x40005524)
#define GPIO_PORTB_AMSEL             *((volatile U32_t *)0x40005528)
#define GPIO_PORTB_PCTRL             *((volatile U32_t *)0x4000552C)
#define GPIO_PORTB_ADCCTRL           *((volatile U32_t *)0x40005530)
#define GPIO_PORTB_DMA               *((volatile U32_t *)0x40005534)
	
//PORTC

//PORTC PINS

#define  PC4   4
#define  PC5   5
#define  PC6   6
#define  PC7   7

// Base Addresses APB
#define GPIO_PORTC_APB_BASE 0x40006000

// Base Adresses AHPB
#define GPIO_PORTC_AHPB_BASE 0x4005A000

// APB:advanced peripheral Bus
#define GPIO_PORTC_DATA              *((volatile U32_t *)0x400063FC)
#define GPIO_PORTC_DIR               *((volatile U32_t *)0x40006400)
#define GPIO_PORTC_INTSEN            *((volatile U32_t *)0x40006404)
#define GPIO_PORTC_INTBEDG           *((volatile U32_t *)0x40006408)
#define GPIO_PORTC_INTEVET           *((volatile U32_t *)0x4000640C)
#define GPIO_PORTC_INTMAS            *((volatile U32_t *)0x40006410)	
#define GPIO_PORTC_INTRS             *((volatile U32_t *)0x40006414)
#define GPIO_PORTC_INTMIS            *((volatile U32_t *)0x40006418)
#define GPIO_PORTC_INTCLEAR          *((volatile U32_t *)0x4000641C)
#define GPIO_PORTC_AFSEL             *((volatile U32_t *)0x40006420)
#define GPIO_PORTC_DR2R              *((volatile U32_t *)0x40006500)
#define GPIO_PORTC_DR4R              *((volatile U32_t *)0x40006504)
#define GPIO_PORTC_DR8R              *((volatile U32_t *)0x40006508)	
#define GPIO_PORTC_OPDR              *((volatile U32_t *)0x4000650C)
#define GPIO_PORTC_PUR               *((volatile U32_t *)0x40006510)
#define GPIO_PORTC_PDR               *((volatile U32_t *)0x40006514)
#define GPIO_PORTC_SLR               *((volatile U32_t *)0x40006518)
#define GPIO_PORTC_DEN               *((volatile U32_t *)0x4000651C)
#define GPIO_PORTC_lock              *((volatile U32_t *)0x40006520)
#define GPIO_PORTC_CR                *((volatile U32_t *)0x40006524)
#define GPIO_PORTC_AMSEL             *((volatile U32_t *)0x40006528)
#define GPIO_PORTC_PCTRL             *((volatile U32_t *)0x4000652C)
#define GPIO_PORTC_ADCCTRL           *((volatile U32_t *)0x40006530)
#define GPIO_PORTC_DMA               *((volatile U32_t *)0x40006534)
	

//PORTD

//PORTD PINS
#define  PD0   0
#define  PD1   1
#define  PD2   2
#define  PD3   3
#define  PD6   6
#define  PD7   7

// Base Addresses APB
#define GPIO_PORTD_APB_BASE 0x40007000

// Base Adresses AHPB
#define GPIO_PORTD_AHPB_BASE 0x4005B000

// APB:advanced peripheral Bus
#define GPIO_PORTD_DATA              *((volatile U32_t *)0x400073FC)
#define GPIO_PORTD_DIR               *((volatile U32_t *)0x40007400)
#define GPIO_PORTD_INTSEN            *((volatile U32_t *)0x40007404)
#define GPIO_PORTD_INTBEDG           *((volatile U32_t *)0x40007408)
#define GPIO_PORTD_INTEVET           *((volatile U32_t *)0x4000740C)
#define GPIO_PORTD_INTMAS            *((volatile U32_t *)0x40007410)	
#define GPIO_PORTD_INTRS             *((volatile U32_t *)0x40007414)
#define GPIO_PORTD_INTMIS            *((volatile U32_t *)0x40007418)
#define GPIO_PORTD_INTCLEAR          *((volatile U32_t *)0x4000741C)
#define GPIO_PORTD_AFSEL             *((volatile U32_t *)0x40007420)
#define GPIO_PORTD_DR2R              *((volatile U32_t *)0x40007500)
#define GPIO_PORTD_DR4R              *((volatile U32_t *)0x40007504)
#define GPIO_PORTD_DR8R              *((volatile U32_t *)0x40007508)	
#define GPIO_PORTD_OPDR              *((volatile U32_t *)0x4000750C)
#define GPIO_PORTD_PUR               *((volatile U32_t *)0x40007510)
#define GPIO_PORTD_PDR               *((volatile U32_t *)0x40007514)
#define GPIO_PORTD_SLR               *((volatile U32_t *)0x40007518)
#define GPIO_PORTD_DEN               *((volatile U32_t *)0x4000751C)
#define GPIO_PORTD_lock              *((volatile U32_t *)0x40007520)
#define GPIO_PORTD_CR                *((volatile U32_t *)0x40007524)
#define GPIO_PORTD_AMSEL             *((volatile U32_t *)0x40007528)
#define GPIO_PORTD_PCTRL             *((volatile U32_t *)0x4000752C)
#define GPIO_PORTD_ADCCTRL           *((volatile U32_t *)0x40007530)
#define GPIO_PORTD_DMA               *((volatile U32_t *)0x40007534)
	


//PORTE

// PORTE PINS

#define  PE0   0
#define  PE1   1
#define  PE2   2
#define  PE3   3
#define  PE4   4
#define  PE5   5

// Base Addresses APB
#define GPIO_PORTE_APB_BASE 0x40024000

// Base Adresses AHPB
#define GPIO_PORTE_AHPB_BASE 0x4005C000

// APB:advanced peripheral Bus
#define GPIO_PORTE_DATA              *((volatile U32_t *)0x400243FC)
#define GPIO_PORTE_DIR               *((volatile U32_t *)0x40024400)
#define GPIO_PORTE_INTSEN            *((volatile U32_t *)0x40024404)
#define GPIO_PORTE_INTBEDG           *((volatile U32_t *)0x40024408)
#define GPIO_PORTE_INTEVET           *((volatile U32_t *)0x4002440C)
#define GPIO_PORTE_INTMAS            *((volatile U32_t *)0x40024410)	
#define GPIO_PORTE_INTRS             *((volatile U32_t *)0x40024414)
#define GPIO_PORTE_INTMIS            *((volatile U32_t *)0x40024418)
#define GPIO_PORTE_INTCLEAR          *((volatile U32_t *)0x4002441C)
#define GPIO_PORTE_AFSEL             *((volatile U32_t *)0x40024420)
#define GPIO_PORTE_DR2R              *((volatile U32_t *)0x40024500)
#define GPIO_PORTE_DR4R              *((volatile U32_t *)0x40024504)
#define GPIO_PORTE_DR8R              *((volatile U32_t *)0x40024508)	
#define GPIO_PORTE_OPDR              *((volatile U32_t *)0x4002450C)
#define GPIO_PORTE_PUR               *((volatile U32_t *)0x40024510)
#define GPIO_PORTE_PDR               *((volatile U32_t *)0x40024514)
#define GPIO_PORTE_SLR               *((volatile U32_t *)0x40024518)
#define GPIO_PORTE_DEN               *((volatile U32_t *)0x4002451C)
#define GPIO_PORTE_lock              *((volatile U32_t *)0x40024520)
#define GPIO_PORTE_CR                *((volatile U32_t *)0x40024524)
#define GPIO_PORTE_AMSEL             *((volatile U32_t *)0x40024528)
#define GPIO_PORTE_PCTRL             *((volatile U32_t *)0x4002452C)
#define GPIO_PORTE_ADCCTRL           *((volatile U32_t *)0x40024530)
#define GPIO_PORTE_DMA               *((volatile U32_t *)0x40024534)
	


//PORTF

//PORTF PINS
#define  PF0   0
#define  PF1   1
#define  PF2   2
#define  PF3   3
#define  PF6   6


// Base Addresses APB
#define GPIO_PORTF_APB_BASE 0x40025000

// Base Adresses AHPB
#define GPIO_PORTF_AHPB_BASE 0x4005D000
// APB:advanced peripheral Bus
#define GPIO_PORTF_DATA              *((volatile U32_t *)0x400253FC)
#define GPIO_PORTF_DIR               *((volatile U32_t *)0x40025400)
#define GPIO_PORTF_INTSEN            *((volatile U32_t *)0x40025404)
#define GPIO_PORTF_INTBEDG           *((volatile U32_t *)0x40025408)
#define GPIO_PORTF_INTEVET           *((volatile U32_t *)0x4002540C)
#define GPIO_PORTF_INTMAS            *((volatile U32_t *)0x40025410)	
#define GPIO_PORTF_INTRS             *((volatile U32_t *)0x40025414)
#define GPIO_PORTF_INTMIS            *((volatile U32_t *)0x40025418)
#define GPIO_PORTF_INTCLEAR          *((volatile U32_t *)0x4002541C)
#define GPIO_PORTF_AFSEL             *((volatile U32_t *)0x40025420)
#define GPIO_PORTF_DR2R              *((volatile U32_t *)0x40025500)
#define GPIO_PORTF_DR4R              *((volatile U32_t *)0x40025504)
#define GPIO_PORTF_DR8R              *((volatile U32_t *)0x40025508)	
#define GPIO_PORTF_OPDR              *((volatile U32_t *)0x4002550C)
#define GPIO_PORTF_PUR               *((volatile U32_t *)0x40025510)
#define GPIO_PORTF_PDR               *((volatile U32_t *)0x40025514)
#define GPIO_PORTF_SLR               *((volatile U32_t *)0x40025518)
#define GPIO_PORTF_DEN               *((volatile U32_t *)0x4002551C)
#define GPIO_PORTF_lock              *((volatile U32_t *)0x40025520)
#define GPIO_PORTF_CR                *((volatile U32_t *)0x40025524)
#define GPIO_PORTF_AMSEL             *((volatile U32_t *)0x40025528)
#define GPIO_PORTF_PCTRL             *((volatile U32_t *)0x4002552C)
#define GPIO_PORTF_ADCCTRL           *((volatile U32_t *)0x40025530)
#define GPIO_PORTF_DMA               *((volatile U32_t *)0x40025534)
	






#endif //__HW_GPIO_H__ 

