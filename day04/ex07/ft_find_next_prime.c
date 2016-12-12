// Create a function that returns the next prime number greater or equal to the number given as argument.
// Your function must return its result in less than two seconds.

#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if(nb % i == 0)
            return (ft_find_next_prime(nb+1));
        i++;
    }
    return (i);
}

int main()
{
    int nb;

    nb = 15;
    printf("%d",ft_find_next_prime(nb));
}
