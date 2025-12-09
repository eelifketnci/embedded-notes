#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

// Simple register-level LED blink on PB5 (Arduino Uno onboard LED)

int main(void)
{
    // Set PB5 as output
    DDRB |= (1 << DDB5);

    while (1)
    {
        // Toggle PB5
        PORTB ^= (1 << PORTB5);

        _delay_ms(500);  
    }
}
