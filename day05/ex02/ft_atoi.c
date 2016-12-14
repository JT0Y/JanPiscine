// 42 - Classics : Theses exercises are key assignments that do not earn points,
// but are mandatory to validate in order to access to the real assignments of the day.
// Reproduce the behavior of the function atoi (man atoi).

#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int nb;
    int sign;

    nb = 0;
    sign = 1;
    while (*str == ' ' || *str == '+')
        str++;
    while (*str)
    {
        if(*str >= '0' && *str <= '9')
        {
            nb = *str + '0';
        }
        str++;
    }
    return (nb);
}

int main()
{
    char *str1;
    char *str2;
    char *str3;

    str1 = "3";
    str2 = "4";
    str3 = " +221";

    printf("%d\n",ft_atoi(str1));
    printf("%d\n",ft_atoi(str2));
    printf("%d\n",ft_atoi(str3));
}
