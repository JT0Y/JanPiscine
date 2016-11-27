// Create a function that displays all different combination of two digits between 00 and 99, listed by ascending order.
// Here’s the expected output :
//   $>./a.out | cat -e
//   00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
// Here’s how it should be prototyped : void ft_print_comb2(void);
# include <stdlib.h>
# include <unistd.h>


void write_numbers(int aones, int atens, int bones, int btens)
{
    write(1, &atens, 1);
    write(1, &aones, 1);
    write(1, " ", 1);
    write(1, &btens, 1);
    write(1, &bones, 1);
    write(1, " ", 1);
    write(1, "-", 1);
    write(1, " ", 1);
}

void ft_print_comb2(void)
{
    int aones;
    int atens;
    int bones;
    int btens;


    bones = '0';
    btens = '0';
    atens = '0';
    aones = '0';
    while (atens <= '9')
    {
        while (aones <= '9')
        {
            while (btens <= '9')
            {
                while (bones <= '9')
                {
                    write_numbers(aones, atens, bones, btens);
                    bones++;
                }
                bones = '0';
                btens++;
            }
            btens = '0';
            aones++;
        }
        aones = '0';
        atens++;
    }
}

int main()
{
    ft_print_comb2();
}
