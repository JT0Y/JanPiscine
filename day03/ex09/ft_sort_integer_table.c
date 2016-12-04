// Create a function which sorts an array (tab) of integers by ascending order.
// The arguments are a pointer to int and the number of ints in the array.
#include <unistd.h>
#include <stdio.h>

int ft_putnbr(int nbr)
{
    if (nbr + '0' <= '9' && (nbr + '0') >= '0')
    {
        int num = nbr +'0';
        write(1, &num, 1);
    }
    else
    {
        ft_putnbr(nbr/10);
        ft_putnbr(nbr%10);
    }
    return (0);
}


void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int val;
    i = 0;
    val = 0;
    while(tab[i])
    {
        ft_putnbr(tab[i]);
        if (i < size-1)
            write(1, ",", 1);
        i++;
    }
}

int main()
{
    int i = 0;
    int arr[5] = {2,32,41,12,3};
    ft_sort_integer_table(arr, 5);
    return (0);
}
