
int main(void)
{
    lcd_init();

    lcd_cmd(0x80);
    lcd_string("YOUR NAME");

    lcd_cmd(0xC0);
    lcd_string("YOUR USN");

    while(1);
}
