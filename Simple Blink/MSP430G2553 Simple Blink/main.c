/*
 * created by: joseph dibenedetto
 * created: 9/10/18
 * updated: 9/21/18
 */

#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1SEL &= ~BIT0; // setting P1SEL and P1SEL2 to 0s makes P1DIR able to perform I/O operations
	P1SEL2 &= ~BIT0;
	P1DIR |= BIT0; // sets P1DIR to 1 to be an output
	while(1)
	{
	    P1OUT ^= BIT0; // toggles the value of P1OUT to blink light
	    __delay_cycles(100000); // determines amount of time light will be on/off
	}
	
	return 0;
}
