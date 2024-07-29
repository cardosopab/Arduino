#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>

#define BLINK_MS 1000
#define PORTB_5 0b00100000

int main() {
  // Set output
  DDRB |= PORTB_5;

  while (true) {
    // Turn on the LED
    PORTB |= PORTB_5;
    _delay_ms(BLINK_MS);

    // Turn off the LED
    PORTB &= ~PORTB_5;
    _delay_ms(BLINK_MS);
  }
}
