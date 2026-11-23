
int main(void)
{
    unsigned int count = 0;

    DDRB &= ~(1 << PB3);
    PORTB |= (1 << PB3);

    lcd_init();

    while(1)
    {
        if(!(PINB & (1 << PB3)))
        {
            _delay_ms(50);

            if(!(PINB & (1 << PB3)))
            {
                count++;

                lcd_cmd(0x80);
                lcd_string("BUTTON COUNT:");

                lcd_cmd(0xC0);
                lcd_string("                ");
                lcd_cmd(0xC0);
                lcd_number(count);

                while(!(PINB & (1 << PB3)));

                _delay_ms(50);
            }
        }
    }
}
