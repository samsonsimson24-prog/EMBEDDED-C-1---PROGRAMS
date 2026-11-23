
int main(void)
{
    int i;

    lcd_init();

    for(i = 9; i >= 0; i--)
    {
        lcd_cmd(0x80);
        lcd_data(i + '0');

        _delay_ms(1000);
    }

    while(1);
}
