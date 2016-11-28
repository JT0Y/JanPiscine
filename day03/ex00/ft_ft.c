#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int i;
    int *nbr;

    i = 133;
    nbr = &i;

    printf("%d\n", i);
    ft_ft(nbr);
    printf("%d\n", i);
}
