/*
 * Timer0.c
 *
 * Created: 17/07/2020 01:04:39 م
 * Author : rewrite Abdullah Albishri
 */ 

#include "Timer.h"
#include "LED.h"
#include <avr/interrupt.h>


 extern uint8 CounterRegister_InitValue ;
 extern uint32 Number_OverFlows;
 extern uint32 CTCcounter;
 extern uint32 DelaySize;
int main(void)
{
    
	
	LED0_Init();
	LED0_ON();
	
	
	Timer_Init();
	
	Timer_SetDelay(1000);
	Timer_Start();
	
	
    while (1) 
    {
		
	
    }
}



ISR(TIMER0_COMP_vect)//CTC
{
CTCcounter++;
if(CTCcounter==DelaySize)
{
LED0_toggle();
CTCcounter=0;
}
}

/*ISR(TIMER0_OVF_vect)//Normal mode 
{
	
	static uint32 counter = 0;
	
	counter++;
	
	if(counter == Number_OverFlows)
	{
		TCNT0 = CounterRegister_InitValue;
		
		counter = 0;
		
		LED0_toggle();
		
	}
	
	
}*/