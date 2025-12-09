#include <avr/io.h>
#define F_CPU 16000000UL   



void setup() {
  DDRD &= ~(1 << DDD2);  // Set PD2 (pin 2 on port D) as input
  PORTD|= (1 << PORTD2);  // Enable internal pull-up resistor on PD2
  DDRB |= (1 << DDB5);  // Set PB5 (pin 5 on port B, usually onboard LED) as output
}

}

void loop() {
  if (PIND & (1 << PIND2)){
    PORTB |= (1 << PORTB5); // Turn ON the LED connected to PB5
  }
  else{
    PORTB &= ~(1 << PORTB5);   // Turn OFF the LED
  }
  }

}
