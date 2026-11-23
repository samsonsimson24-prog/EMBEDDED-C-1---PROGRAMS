
int main(void)
{
    DDRB &= ~(1 << PB3);
    PORTB |= (1 << PB3);

    lcd_init();

    while(1)
    {
        lcd_cmd(0x80);

        if(!(PINB & (1 << PB3)))
        {
            lcd_string("SWITCH PRESSED");
        }
        else
        {
            lcd_string("                ");
        }

        _delay_ms(100);
    }
}
