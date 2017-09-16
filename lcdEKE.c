/*
 * lcdEKE.c
 *
 *  Created on: 27/8/2017
 *      Author: El-safi
 */
#include "lcdEKE.h"
#include "HW_gpio.h"
#include "GPIO_lcd.h"
#include "Delay.h"


void LCD_Init(void)
{
// configure PORTE  4 pins as output for data and 2 pins for RS,EN.

	GPIO_LcdPortE_Init();

/*********         configure LCD         ***********/
  // wait to be on . send 8 bit commands as datasheet said
  delayMsec(20);
  LCD_command(0x30);
  delayMsec(5);
  LCD_command(0x30);
  delayUs(100);
  LCD_command(0x30);
  delayUs(40);
  LCD_command(0x20);  // this 4 bit style as datasheet said
  delayUs(40);
 // LCD CONFIGURE mode 4 bit
  LCD_command(0x28);
	delayUs(40);
 // go to first line 0 position
  LCD_command(0x80);
	delayUs(40);
 // cursor off and no blink
  LCD_command(0x0c);
	delayUs(40);
 // automatic increament and no display shift
  LCD_command(0x06);
	delayUs(40);
 // clear lcd no display
	LCD_Clear();


}
///////////////////////////////////////////////////////////////////////////////////////

void LCD_command(U8_t command)
{
	// register select=0 to send command to LCD
   GPIO_PORTE_DATA&=~(1<<PE4);

	//clear 4 pins	
	 GPIO_PORTE_DATA&=~((1<<PE0)|(1<<PE1)|(1<<PE2)|(1<<PE3));
	// send 4 high bits
   if(command & 0x80)GPIO_PORTE_DATA|=(1<<PE3);
   if(command & 0x40)GPIO_PORTE_DATA|=(1<<PE2);
   if(command & 0x20)GPIO_PORTE_DATA|=(1<<PE1);
   if(command & 0x10)GPIO_PORTE_DATA|=(1<<PE0);
	 LCD_enable();
	 GPIO_PORTE_DATA&=~((1<<PE0)|(1<<PE1)|(1<<PE2)|(1<<PE3));
	// send 4 low bits
   if(command & 0x08)GPIO_PORTE_DATA|=(1<<PE3);
   if(command & 0x04)GPIO_PORTE_DATA|=(1<<PE2);
   if(command & 0x02)GPIO_PORTE_DATA|=(1<<PE1);
   if(command & 0x01)GPIO_PORTE_DATA|=(1<<PE0);
	 LCD_enable();
	 delayUs(40);
	 
}

///////////////////////////////////////////////////////////////////////////////////////////
void LCD_data(U8_t data)
{

// register select=1 to send data to LCD
   GPIO_PORTE_DATA|=(1<<PE4);

	 GPIO_PORTE_DATA&=~((1<<PE0)|(1<<PE1)|(1<<PE2)|(1<<PE3));
	// send 4 high bits
   if(data & 0x80)GPIO_PORTE_DATA|=(1<<PE3);
   if(data & 0x40)GPIO_PORTE_DATA|=(1<<PE2);
   if(data & 0x20)GPIO_PORTE_DATA|=(1<<PE1);
   if(data & 0x10)GPIO_PORTE_DATA|=(1<<PE0);
	// now send data
	 LCD_enable();
	// claer to send 4 low bits
	 GPIO_PORTE_DATA&=~((1<<PE0)|(1<<PE1)|(1<<PE2)|(1<<PE3));
	// send 4 low bits
   if(data & 0x08)GPIO_PORTE_DATA|=(1<<PE3);
   if(data & 0x04)GPIO_PORTE_DATA|=(1<<PE2);
   if(data & 0x02)GPIO_PORTE_DATA|=(1<<PE1);
   if(data & 0x01)GPIO_PORTE_DATA|=(1<<PE0);
	// now send data
	 LCD_enable();
	 delayUs(40);
}

///////////////////////////////////////////////////////////////////////////////////////
void LCD_enable(void)
{
	GPIO_PORTE_DATA|=(1<<PE5);
	delayUs(1);
	GPIO_PORTE_DATA&=~(1<<PE5);
	delayUs(1);
}
///////////////////////////////////////////////////////////////////////////////////////////

void LCD_Clear(void)
{
	LCD_command(0x01);
	delayMsec(2);
}
////////////////////////////////////////////////////////////////////////////////////////////

void goToRowColumn(U8_t row,U8_t column)
{
	U8_t firstAddress[] = {0x80,0xC0,0x94,0xD4};

	 	LCD_command(firstAddress[row-1] + column-1);
	 	delayMsec(10);
}
////////////////////////////////////////////////////////////////////////////////////////

void LCD_string(U8_t *str)
{
	U8_t i = 0;

	 	while(str[i]!=0)
	 	{
	 		LCD_data(str[i]);
	 		i++;
	 	}
}
///////////////////////////////////////////////////////////////////////////////////////

void LCD_intNumASCII(U16_t Number)
{
  char buffer[16]={0};
  //itoa(Number,(char*)buffer,10);  // 10 to convert only to numbers more 10 will print litters
  LCD_string((U8_t*)buffer);
}
///////////////////////////////////////////////////////////////////////////////////////////
