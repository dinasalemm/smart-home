/*
* Interfacing_Modules_AMIT_L10.c
*
* Created: 1/8/2021 9:48:21 PM
* Author : dina
*/
#include "LED.h"
#include "SPI.h"

int main(void)
{
	Uint8t data=0;
	LED0_Init();
	LED1_Init();
	LED2_Init();
	SPI_Init();

	while (1) /*Super loop - Infinite loop*/
	{
		data=SPI_Receive();
		
		switch(data)
		{
			case 'a':
			
			LED0_ON();
			LED1_OFF();
			LED2_OFF();
			data=0;
			break;
			
			case 'b':
			
			LED1_ON();
			LED0_OFF();
			LED2_OFF();
			data=0;
			break;
			
			case 'c':
			
			LED2_ON();
			LED0_OFF();
			LED1_OFF();
			data=0;
			break;
			case 'd':
			
			LED0_OFF();
			LED1_OFF();
			LED2_OFF();
			data=0;
			break;
			
		}
		
	}
}

