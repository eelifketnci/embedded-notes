#include <avr/io.h>

void delay_ms(int ms)
{
    for (int i = 0; i < ms; i++)
    {
        for (int h = 0; h < 4000; h++)
        {
            __asm__("nop");
        }
    }
}

int main(void)
{
    DDRB |= (1 << DDB5);

    while (1)
    {
        PORTB ^= (1 << PORTB5);
        delay_ms(500);
    }
}
