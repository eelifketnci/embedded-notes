# ATmega328P Register Basics

## GPIO Registers

### DDRx – Data Direction Register
- `1` → Configure pin as **output**
- `0` → Configure pin as **input**

### PORTx – Output Register / Pull-up Control
- If pin is set as **output** → writing to PORTx drives HIGH or LOW  
- If pin is set as **input** → writing `1` enables the internal pull-up resistor

### PINx – Input Register
- Reading PINx returns the actual voltage level on the pin  
- Used for reading buttons, switches, sensors, etc.
