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
    P1SEL &= ~BIT0; // lines 10 and 14 make pins 1.0 and 4.7 eligible for I/O
    P1DIR |= BIT0; // lines 11 and 15 make the direction of the I/O on these pins outputs
    P1OUT &= ~BIT0; // lines 12 and 13 initialize states of the LEDs
    P4OUT &= ~BIT7;
    P4SEL &= ~BIT7;
    P4DIR |= BIT7;

    while(1)
    {
        volatile unsigned int i, k; // creates variables to be incremented
        i++; // constantly increments variables i and k
        k++;
        if(i>5000) // once i reaches 5000 if statement is activated
        {
            i=0; // i is reset to count of 0
            P1OUT ^= BIT0; // toggles output of P1.0 upon i reaching 5000
        }
        if(k>20000) // once k reaches 20000 if statement is activated
        {
            k=0; // k is reset to count of 0
            P4OUT ^= BIT7; // toggles output of P4.7 upon k reaching 20000
        }
    }

    return 0;
}
