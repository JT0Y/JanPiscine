// 42 - Classics : Theses exercises are key assignments that do not earn points,
// but are mandatory to validate in order to access to the real assignments of the day.
// Create a function that displays the number entered as a parameter.
// The function has to be able to display all possible values within an int type variable.
// For example:
// ft_putnbr(42) displays "42".

#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if ((nb+'0' <= '9') && (nb+'0' >= '0'))
    {
        nb = nb + '0';
        write(1, &nb, 1);
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

int main()
{
    int nb1;
    int nb2;
    int nb3;
    int nb4;
    int nb5;
    int nb6;

    nb1  = 3;
    nb2 = +4;
    nb3 = 83;
    nb4 = 193;
    nb5 = 100;
    nb6 = -32;

    ft_putnbr(nb1);
    write(1, "\n", 1);
    ft_putnbr(nb2);
    write(1, "\n", 1);
    ft_putnbr(nb3);
    write(1, "\n", 1);
    ft_putnbr(nb4);
    write(1, "\n", 1);
    ft_putnbr(nb5);
    write(1, "\n", 1);
    ft_putnbr(nb6);
}
