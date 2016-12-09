// Create a recursive function that returns the value of a power applied to a number.

// Number  Squared     Cubed   Fourth      Fifth   Sixth
// 1           1           1       1        1          1
// 2           4           8       16      32          64
// 3           9           27      81      243         729

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power > 1)
    {
        nb *= ft_recursive_power(nb, power-1);
    }
    return (nb);
}

int main()
{
    int nb;
    int power;

    nb = 2;
    power = 3;

    printf("\n%d\n",ft_recursive_power(nb, power));
}
