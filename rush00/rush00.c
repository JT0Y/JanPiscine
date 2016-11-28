void ft_putchar(int c);

int rush(int x, int y)
{
    int xaxis;
    int yaxis;

    yaxis = y;
    xaxis = x;

    while ( y > 0 )
    {
        while (x > 0)
        {
            if ((x == xaxis || x == 1) && (y == yaxis || y == 1))
                ft_putchar('o');
            else if((x != xaxis && x !=1) && (y == yaxis || y == 1))
                ft_putchar('-');
            else if(x == xaxis ||  x ==1)
                ft_putchar('|');
            else
                ft_putchar(' ');
            x--;
        }
        x = xaxis;
        ft_putchar(10);
        y--;
    }
    return (0);
}
