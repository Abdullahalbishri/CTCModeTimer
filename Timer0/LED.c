
#include "LED.h"



/************** This function Initialises the LED0 in the AMIT kit ****************************/
void LED0_Init(void)
{
	
	/*set the bit number 2 in the DDRC Register to initiate the pin's direction as output*/
	DIO_SetPinDir(DIO_PORTC, DIO_PIN2 ,DIO_PIN_OUTPUT);
	
}

/************** This function Turns on the LED0 in the AMIT kit ****************************/
void LED0_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN2 ,DIO_PIN_HIGH);
	
}

/************** This function Turns off the LED0 in the AMIT kit ****************************/
void LED0_OFF(void)
{
	/*clear the bit number 2 in the PORTC Register to generate 0v*/
	DIO_WritePin(DIO_PORTC, DIO_PIN2 ,DIO_PIN_LOW);
}

/************** This function Toggles the LED0 in the AMIT kit ****************************/
void LED0_toggle(void)
{
	/*toggle the value in the bit number 2 in the PORTC Register */
	DIO_TogglePin(DIO_PORTC  , DIO_PIN2);
	
}