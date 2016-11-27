// Create a function that displays all digits, on a single line, by ascending order.
// Here’s how it should be prototyped : void ft_print_numbers(void);
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int i;

    i = '0';
    while(i <= '9')
    {
        ft_putchar(i);
        i++;
    }
}
