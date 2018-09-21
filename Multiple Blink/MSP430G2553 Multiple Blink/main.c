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
	P1SEL &= ~(BIT0 + BIT6); // setting the select bits of pins 1.0 and 1.6 to 0s enable those pins to GPIO
	P1SEL2 &= ~(BIT0 + BIT6);
	P1DIR |= (BIT0 + BIT6); // sets both 1.0 and 1.6 to be outputs
	P1OUT |= BIT0; // initializes states of the outputs of P1.0 and P1.6
	P1OUT &= ~BIT6;
	
	while(1)
	{
	    volatile unsigned int i, k; // creates variables to be incremented
	    i++; // variables constantly incremented
	    k++;
	    if(i>5000) // activates if statement once variable i reaches 5000
	    {
	        i=0; // restarts variable i's count
	        P1OUT ^= BIT0; // toggles state of output, therefore blinking LED once i reaches 5000
	    }
	    if(k>20000) // activates if statement for P1.6
	    {
	        k=0; // resets k once it reaches 20000
	        P1OUT ^= BIT6; // toggles output of P1.6 once k reaches 20000, blinking LED at different rate than P1.0 from variable i
	    }
	}

	return 0;
}
