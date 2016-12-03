// Reproduce the behavior of the function atoi (man atoi).

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int sign;
    int value;

    sign = 1;
    value = 0;
    while(*str == ' ' || *str == '+')
        str++;
    while (*str)
    {
        if (*str == '-')
        {
            sign = -1;
            str++;
        }
        while ((*str >= '0') && (*str <= '9'))
        {
            value = (value * 10) + *str - 48;
            str++;
        }
        return (value * sign);
    }
    return (0);
}


int main()
{
    char *str0;
    char *str1;
    char *str2;
    char *str3;
    char *str4;
    char *str5;
    char *str6;
    char *str7;
    char *str8;
    char *str9;
    char *stra;
    char *strb;

    str0 = "32";
    str1 = "- 32 136";
    str2 = "-+- 135";
    str3 = "-23";
    str4 = "+1332";
    str5 = "     42";
    str6 = "+  42";
    str7 = "6Josh is a Sexy man9";
    str8 = "- 32+136";
    str9 = "- 3";
    stra = "  3+-2 https://www.reddit.com/r/dolphinconspiracy/";
    strb = "--42";

    printf("input '32'                     result %7d -->  answer %8d \n", ft_atoi(str0), atoi(str0));
    printf("input '- 32 136'               result %7d -->  answer %8d \n", ft_atoi(str1), atoi(str1));
    printf("input '-+- 135'                result %7d -->  answer %8d \n", ft_atoi(str2), atoi(str2));
    printf("input '-23'                    result %7d -->  answer %8d \n", ft_atoi(str3), atoi(str3));
    printf("input '+1332'                  result %7d -->  answer %8d \n", ft_atoi(str4), atoi(str4));
    printf("input '     42'                result %7d -->  answer %8d \n", ft_atoi(str5), atoi(str5));
    printf("input '+  42'                  result %7d -->  answer %8d \n", ft_atoi(str6), atoi(str6));
    printf("input '6Josh is a Sexy man9'   result %7d -->  answer %8d \n", ft_atoi(str7), atoi(str7));
    printf("input '- 32+136'               result %7d -->  answer %8d \n", ft_atoi(str8), atoi(str8));
    printf("input '- 3'                    result %7d -->  answer %8d \n", ft_atoi(str9), atoi(str9));
    printf("input '  3+-2 https://www.'    result %7d -->  answer %8d \n", ft_atoi(stra), atoi(stra));
    printf("input '--42'                   result %7d -->  answer %8d \n", ft_atoi(strb), atoi(strb));
}
