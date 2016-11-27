#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(int letter)
{
    write(1, &letter, 1);
}

void ft_print_alphabet(void)
{
    int i;

    i = 'a';
    while(i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}

int main()
{
    ft_print_alphabet();
}
