# Simple Blink
There were 3 registers on both boards whose values needed to be altered in order for simple blink to be functional. Boards MSP430G2553 and MSP430F5529.

# MSP430G2553
Technically on this board there were 4 registers that needed to be changed in order for simple blink to work. These were P1SEL, P1SEL2, P1DIR, and P1OUT. By setting the values of the 1.0 bits in the select registers to 0s, it enables pin 1.0 to be used for I/O purposes. Setting the P1.0's direction register to 0 makes it so this pin is an output. This information was determined by looking at the pin schematic diagram in this microcontrollers datasheet. P1OUT is used in an xor statement in a while loop so the state of the LED toggles, depending on the delay cycles which in this case was set to 100000.

# MSP430F5529
For this board, the only difference from the G2553 is that there are truly only 3 registers who's values need to be altered to enable simple blink. The register not used here is the second select register, P1SEL2, because according to the respective datasheet, it is not present in making pin 1.0 eligible for I/O operations. P1.0 was the LED pin on both boards.
