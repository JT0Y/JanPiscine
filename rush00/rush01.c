void ft_putchar(int c);

int rush(int x, int y)
{
    int x_start_point;
    int y_start_point;

    x_start_point = x;
    y_start_point = y;


    while (y > 0)
    {
        if(y == y_start_point)
            ft_putchar('/');
        else if(y == 1)
            ft_putchar('\\');
        else
            ft_putchar('*');
        x--;
        while (x > 0)
        {
            if (x == 1 && y == y_start_point)
                ft_putchar('\\');

            // This is targeting the bottom right marker
            else if (x == 1 && y == 1)
                ft_putchar('/');
            else if((x != 1 && y != y_start_point) && y != 1)
                ft_putchar(' ');
            else
                ft_putchar('*');
            x--;
        }
        ft_putchar(10);
        x = x_start_point;
        y--;
    }
    return (0);
}
