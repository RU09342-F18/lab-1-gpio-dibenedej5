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
	
	P1DIR = BIT0; // sets P1.0 as an output
	P1REN = BIT3; // enables resistor at the button's pin P1.3
	P1OUT = BIT3; // initializes value of P1.3

	while(1){
	    if((P1IN & BIT3) != BIT3){ // activates if statement once state of button changes (button is pressed)
	        __delay_cycles(250000); // allows for normal button press without state of the output changing multiple times
	        P1OUT ^= BIT0; // toggles state of LED when button is pressed
	    }
	}

	return 0;
}
