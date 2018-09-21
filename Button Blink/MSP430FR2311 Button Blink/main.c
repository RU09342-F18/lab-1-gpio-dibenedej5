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
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1DIR = BIT0; // sets port 1 to output pin
    P1REN = BIT1; // enables pull up resistor for port 1 pin 1
    P1OUT = BIT1; // sets port 1 output to normally high, by connecting the pull up resistor

    while(1){
        if((P1IN & BIT1) != BIT1){ // turns on/off the LED with the press of a button - momentary action toggle switch
            __delay_cycles(250000); // sets delay so LED blink is noticeable
            P1OUT ^= BIT0; // toggles state of output pin so LED switches between on and off
        }
    }

    return 0;
}
