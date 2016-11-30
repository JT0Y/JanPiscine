// Create a function that counts and returns the number of characters in a string.
// Here’s how it should be prototyped : int ft_strlen(char *str);
#include <stdio.h>

int ft_strlen(char *str)
{
    int strlength;


    strlength = 0;
    while (*str)
    {
        strlength++;
        str++;
    }
    return (strlength);
}

int main()
{
    char *str;

    str = "A Dingo ate my baby!";
    printf("%d", ft_strlen(str));
}
