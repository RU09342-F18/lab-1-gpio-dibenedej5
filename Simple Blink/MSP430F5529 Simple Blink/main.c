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
    P1SEL &= ~BIT0; // sets P1DIR to handle GPIO
    P1DIR |= BIT0; // sets direction to output
    while(1)
    {
        P1OUT ^= BIT0; // toggles P1OUT to blink light
        __delay_cycles(100000); // determines duration LED will be on/off
    }

    return 0;
}
