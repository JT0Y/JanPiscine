#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}


// How do I test this ?

int main()
{
    int *nbr;
    *nbr = 133;

    ft_ft(nbr);
    printf("%d", *nbr);
}
