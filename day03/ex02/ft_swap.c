// Create a function that swaps the value of two integers whose addresses are entered as parameters.
// Here’s how it should be prototyped : void ft_swap(int *a, int *b);

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int *a;
    int *b;
    int aa;
    int bb;
    aa = 35;
    bb = 90;
    a = &aa;
    b = &bb;
    printf("a = %d b = %d \n",*a, *b);
    ft_swap(a, b);
    printf("a = %d b = %d",aa, bb);
}
