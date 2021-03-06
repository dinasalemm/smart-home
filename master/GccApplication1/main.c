/*
* Interfacing_Modules_AMIT_L10.c
*
* Created: 1/8/2021 9:48:21 PM
* Author : dina
*/




#include "SPI.h"
#include "BLUETOOTH.h"

int main(void)
{
	Uint8t data=0;
	Bluetooth_Init();
	SPI_Init();
	SPI_SlaveSelect(0);
	
	while (1) /*Super loop - Infinite loop*/
	{

		data=Bluetooth();
		switch(data)
		{
			case 'a':
			
			SPI_Transmit('a');
			data=0;
			break;
			
			case 'b':
			
			SPI_Transmit('b');
			data=0;
			break;
			
			case 'c':
			
			SPI_Transmit('c');
			data=0;
			break;
			
			case 'd':
			
			
			SPI_Transmit('d');
			data=0;
			break;
			
		}
		
		
	}
}

