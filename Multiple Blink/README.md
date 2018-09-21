# Multiple Blink
The same types of registers that were used for simple blink were used for multiple blink, except registers had to be altered for two different LEDs.

# MSP430G2553
The pins correleating to the LEDs on this board are pins 1.0 and 1.6. Therefore, in order to enable these pins to be used for I/O, P1SEL and P1SEL2 have to be set to 0s for bits 0 and 6. P1DIR also had to be set to 0 for both of these bits to function as outputs as oppsed to inputs. In this case, slightly different than the program for simple blink, the values of the P1OUTs for both bits had to be initialized in order to ensure the blinking of the LEDs occurrs at the specified rates.
The while loop for blinking multiple LEDs is slightly more in depth than that of simple blink. Two variables were used and incremented using the ++ function. In two if statements in the while loop, there are xor statements with the respective bit, 1 or 6, to toggle the state of the LED once they reach different, separated values. These variables are also reset to 0 to start their counts over inside of the if statements.

# MSP430F5529
There are two minor differences in the case of multiple blink between the F5529 and G2553. Once again, just as in simple blink, there are not two select registers that need to be set to 0 in order for the respective pins to be enabled to interface with I/O. Also, the second LED is linked to pin 4.7 instead of pin 1.6. So, for example, the xor equation inside of the second if statement is P4OUT ^= BIT7 instead of P1OUT ^= BIT6.
