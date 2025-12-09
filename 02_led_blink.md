# LED Control on PB5 (Register Level)

## Steps

1. Set PB5 as output  
   `DDRB |= (1 << DDB5);`

2. Toggle PB5 using XOR  
   `PORTB ^= (1 << PORTB5);`

3. Observe the on-board LED on Arduino Uno.

This was my first fully register-level LED control without using `digitalWrite()`.

