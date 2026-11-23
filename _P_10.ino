
int main(void)
{
    DDRB |= (1 << PB4);
    DDRB &= ~(1 << PB3);

    PORTB |= (1 << PB3);
    PORTB &= ~(1 << PB4);

    lcd_init();

    while(1)
    {
        if(!(PINB & (1 << PB3)))
        {
            _delay_ms(50);

            if(!(PINB & (1 << PB3)))
            {
                PORTB ^= (1 << PB4);

                lcd_cmd(0x80);

                if(PORTB & (1 << PB4))
                {
                    lcd_string("LED IS ON");
                }
                else
                {
                    lcd_string("LED IS OFF");
                }

                while(!(PINB & (1 << PB3)));

                _delay_ms(50);
            }
        }
    }
}
