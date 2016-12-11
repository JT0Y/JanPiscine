// Create a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t.

#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    int nb;

    nb = 7;
    printf("%d", ft_is_prime(nb));
}
