// Create a function that displays all different combinations of n numbers by ascending order.
// n will be so that: 0 < n < 10.
// If n = 2, here’s the expected output:
//     $>./a.out | cat -e
//     01, 02, 03, ..., 09, 12, ..., 79, 89$>
# include <stdio.h>
# include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb + '0' <= '9')
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

void ft_print_combn(int n)
{
    int length;

    length = n * 10;
    if (n + '0' == '1')
    {
        while (n + '0' <= '9')
        {
            ft_putchar(n + '0');
            n++;
        }
    }
    else
    {
        while (length > 0)
        {
            ft_putchar(length + '0');
            length--;
        }
    }
}

int main()
{
    int n;

    n = 2;
    ft_print_combn(n);
}
