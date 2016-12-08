// Create an iterated function that returns the value of a power applied to a number.
// An power lower than 0 returns 0. Overflows don’t have to be handled.

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int total;

    total = 1;
    while (power > 0)
    {
        total *= nb;
        power--;
    }
    return (total);
}

int main()
{
    int nb;
    int power;

    nb = 4;
    power = 4;
    printf("%d",ft_iterative_power(nb, power));
}
