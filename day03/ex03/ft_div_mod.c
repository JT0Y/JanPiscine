// This function divides parameters a by b and stores the result in the int pointed by div.
// It also stores the remainder of the division of a by b in the int pointed by mod.

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}

int main()
{
    int a;
    int b;
    int *ptr_div;
    int *ptr_mod;
    int div;
    int mod;

    a = 20;
    b = 4;

    ptr_div = &div;
    ptr_mod = &mod;

    ft_div_mod(a, b, ptr_div, ptr_mod);
    printf("*ptr_div = %d \n", *ptr_div);
    printf("*ptr_mod = %d ", *ptr_mod);
}
