# Button Blink
The program for enabling LED to turn on or off with the press of a button also requires altering the values of three registers, but for this part of the lab it was a slightly different three. Instead of having to set the select registers to 0s, they did not have to be altered. The registers used to enable a resistor on a certain pin were used instead.

# MSP430G2553
Although there was only one LED that had to be blinked with the button, another pin had to be addressed and that was that of the button. On this board, the LED pin was still 1.0 and the button pin is 1.3. The direction of P1.0 still had to be set to 0 in order to make it an output. In order to make the button in this part of the lab successfully act as a switch in the circuit, a pull-up resistor had to be enabled for P1.3.
