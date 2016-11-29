# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str,1);
        str++;
    }
}

int main()
{
    char baby;

    ft_putstr("Look at you... you look like a baby!");
}
