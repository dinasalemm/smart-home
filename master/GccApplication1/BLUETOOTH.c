/*
 * BLUETOOTH.c
 *
 * Created: 2/25/2021 4:28:30 PM
 *  Author: Dina
 */ 
#include "BLUETOOTH.h"

void Bluetooth_Init(void)  
{    
  	UART_Init();
  
}  

Uint8t Bluetooth(void)
{
	Uint8t text=0;
	text=UART_Receive();
    return text;
	
}