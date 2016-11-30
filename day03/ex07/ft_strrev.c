// Create a function that reverses the order of characters in a string.
// It has to return str.
// Here’s how it should be prototyped :
// => a
// ab => ba
// abcde => edcba

#include <unistd.h>

int strlength(char *str)
{
    int counter;

    counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return (counter);
}

char *ft_strrev(char *str)
{
    int counter;

    counter = strlength(str);
    while (counter > 0)
    {
        write(1, str, 1);
        str++;
        counter--;
    }
    return (0);
}

int main()
{
    char *str;

    str = "Fuck My Life";
    ft_strrev(str);
}
