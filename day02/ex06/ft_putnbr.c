// F this
// Create a function that displays the number entered as a parameter.
// The function has to be able to display all possible values within an int type variable.
// ft_putnbr(42) displays "42".
# include <stdlib.h>
# include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb + '0' <= '9')
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

int main()
{
    int nb;

    nb = 35;
    ft_putnbr(nb);
}
