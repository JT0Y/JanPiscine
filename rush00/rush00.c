void ft_putchar(int c);

int rush(int x, int y)
{
    int xaxis;

    xaxis = x;
    if (x == 0)
        return (0);
    while (x > 0)
    {
        if(x == xaxis || x == 1 )
            ft_putchar('o');
        else
            ft_putchar('-');

        x--;
    }
    return (0);
}
