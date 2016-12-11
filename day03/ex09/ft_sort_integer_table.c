// Create a function which sorts an array (tab) of integers by ascending order.
// The arguments are a pointer to int and the number of ints in the array.
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = 0 - nbr;
    }
    if (nbr >= 10)
    {
        ft_putnbr(nbr/10);
        ft_putnbr(nbr%10);
    }
    else
    {
        ft_putchar(nbr + '0');
    }
    return (0);
}

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int val;
    int temp;

    i = 0;
    val = 0;
    temp = tab[i];
    i++;
    while(tab[i])
    {
        if(temp < tab[i])
        {
            temp = tab[i];
        }
        i++;
    }
}

int main()
{
    int arr[4];
    arr[0] = 329;
    arr[1] = 1;
    arr[2] = 21;
    arr[3] = -21;
    ft_sort_integer_table(arr, 4);

    ft_putchar('\n');
    ft_putnbr(arr[0]);
    ft_putchar('\n');
    ft_putnbr(arr[1]);
    ft_putchar('\n');
    ft_putnbr(arr[2]);
    ft_putchar('\n');
    ft_putnbr(arr[3]);
    ft_putchar('\n');
    return (0);
}
