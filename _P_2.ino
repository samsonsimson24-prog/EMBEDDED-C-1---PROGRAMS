
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD |= 0x3C;

    while(1)
    {
        PORTD = (1 << PD2);
        _delay_ms(500);

        PORTD = (1 << PD3);
        _delay_ms(500);

        PORTD = (1 << PD4);
        _delay_ms(500);

        PORTD = (1 << PD5);
        _delay_ms(500);
    }
}
