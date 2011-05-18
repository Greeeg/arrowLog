#include <msp430f2013.h>
#include <signal.h>


int main(void)
{
	WDTCTL = WDTPW + WDTHOLD;									// 	Stop watchdog timer
  			
	
	P2DIR = 0xFF;
	P2SEL = 0;
	while(1)
	{	
		
		P2OUT ^= 0x40; 
		
			
	}
}
	

