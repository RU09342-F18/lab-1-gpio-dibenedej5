# Button Blink
The program for enabling LED to turn on or off with the press of a button also requires altering the values of three registers, but for this part of the lab it was a slightly different three. Instead of having to set the select registers to 0s, they did not have to be altered. The registers used to enable a resistor on a certain pin were used instead.

# MSP430G2553
Although there was only one LED that had to be blinked with the button, another pin had to be addressed and that was that of the button. On this board, the LED pin was still 1.0 and the button pin is 1.3. The direction of P1.0 still had to be set to 0 in order to make it an output. In order to make the button in this part of the lab successfully act as a switch in the circuit, a pull-up resistor had to be enabled for P1.3. This was done by setting BIT3 of the P1REN register to 1. BIT3 of P1OUT was also set to 1 to initilaize the state of the pin.
The if statement inside of the while loop is slightly more intricate for this section of the lab. A more in-depth logic statement was required to activate the contents of the if statement once the button experienced a change in state. The delay cycle here serves a slightly different purpose. If the program did not wait to read a button press for at least a short period of time, the status of the LED would change multiple times from just a single button press due to the contact of the metals. Another xor statement inside of the if statement toggles the state of the LED.

# MSP430FR2311
Switching to this board for button blink requires only one minor change in the program. The pin for this microcontroller's button is P1.1 instead of 1.3, so anywhere a 3 was used, a 1 was instead implemented.
