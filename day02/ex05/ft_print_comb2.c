// Create a function that displays all different combination of two digits between 00 and 99, listed by ascending order.
// Here’s the expected output :
//   $>./a.out | cat -e
//   00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
// Here’s how it should be prototyped : void ft_print_comb2(void);
# include <stdlib.h>
# include <unistd.h>


void write_numbers(int aone, int atwo, int bone, int btwo)
{
    write(1, &aone, 1);
    write(1, &atwo, 1);
    write(1, " ", 1);
    write(1, &bone, 1);
    write(1, &btwo, 1);
    write(1, " ", 1);
    write(1, "-", 1);
    write(1, " ", 1);
}

void ft_print_comb2(void)
{
    int aone;
    int atwo;
    int bone;
    int btwo;

    aone = '0';
    atwo = '0';
    bone = '0';
    btwo = '0';

    while (aone < '9')
    {
        aone++;
        write_numbers(aone, atwo, bone, btwo);
    }
}

int main()
{
    ft_print_comb2();
}
