# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// This function divides parameters a by b. The result of this division is stored in the int pointed by a.
// The remainder of the division is stored in the int pointed by b.

void ft_ultimate_div_mod(int *a, int *b)
{
    int tempa;
    int tempb;

    tempa = *a / *b;
    tempb = *a % *b;
    *a = tempa;
    *b = tempb;
}

int main()
{

    int *a;
    int *b;
    int anum;
    int bnum;

    anum = 33;
    bnum = 21;
    a = &anum;
    b = &bnum;

    printf("anum = %d bnum = %d \n", anum, bnum);
    ft_ultimate_div_mod(a,b);
    printf("anum = %d bnum = %d", anum, bnum);
}
