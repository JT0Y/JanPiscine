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
    if ((nb - '0') <= '9')
    {
        nb = nb + '0';
        write(1, &nb, 1);
    }
    else
        return;
}

int main()
{
    int nb;

    nb = 2;
    ft_putnbr(nb);
}
