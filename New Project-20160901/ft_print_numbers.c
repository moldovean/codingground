void ft_putchar(char c);

void ft_print_numbers(void)
{
    short nr;
    char c;
    nr = 0;
    while (nr < 10)
    {
        c = (short)nr + 48;
        ft_putchar(c);
        ft_putchar(10);
        nr++;
    }
    
}