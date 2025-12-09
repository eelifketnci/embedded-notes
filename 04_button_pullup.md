# Button Input on PD2 Using Internal Pull-Up

## Hardware Setup
- One side of the push-button → **GND**
- The opposite side → **PD2** (Arduino pin D2)
- The internal pull-up keeps the pin at HIGH when the button is not pressed.

Because the pull-up is enabled in software, no external resistor is required.

## Software Setup

### 1. Configure PD2 as input
`DDRD &= ~(1 << DDD2);`

### 2. Enable internal pull-up
`PORTD |= (1 << PORTD2);`

### 3. Read button state from the PIN register
`if (PIND & (1 << PIND2)) { ... }`

### Logic
- **Not pressed** → pin reads HIGH  
- **Pressed** → pin is pulled LOW through GND  

This is expected behavior when using internal pull-up resistors.
