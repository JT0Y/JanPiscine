#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_print_alphabet(void)
{
    int i;

    i = 'a';
    while(i < 'z')
    {
        write(1, &i, 1);
        i++;
    }
}

int main()
{
    ft_print_alphabet();
}
