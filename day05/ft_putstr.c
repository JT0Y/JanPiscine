// 42 - Classics : Theses exercises are key assignments that do not earn points,
// but are mandatory to validate in order to access to the real assignments of the day.
// Create a function that displays a string of characters on the standard output.

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1,&*str,1);
        str++;
    }
}

int main()
{
    char *str;

    str = "And know that I am with you always; yes, to the end of time.";
    ft_putstr(str);
}
