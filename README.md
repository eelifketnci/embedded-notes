# embedded-notes
# Embedded Systems Notes – AVR (ATmega328P)

This repository contains my personal study notes and practice code while learning embedded systems at the register level.  
All examples directly manipulate ATmega328P hardware registers without using Arduino’s high-level functions.

## What I learned so far
- Understanding DDRx, PORTx, and PINx registers  
- Configuring GPIO direction (input/output)  
- Bit masking and bit shifting `(1 << n)`  
- Enabling and using internal pull-up resistors  
- Reading digital inputs through the PINx register  
- Writing digital outputs through the PORTx register  
- Implementing delay using clock cycles and `nop` instructions  
- Reading and using microcontroller datasheets

## Code examples in this repo
- Register-level LED control on PB5  
- Custom `delay_ms()` function based on 16 MHz clock cycles  
- Reading a push-button on PD2 using internal pull-up  
- Basic GPIO input/output patterns
