// Create a function that displays all different combinations of three different digits in ascending order, listed by ascending order - yes, repetition is voluntary.

// Here’s the intended output :
        // $>./a.out | cat -e
        // 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

// 987 isn’t there because 789 already is.
// 999 isn’t there because the digit 9 is present more than once.
// Here’s how it should be prototyped : void ft_print_comb(void);
# include <unistd.h>


void write_value(int hundreds, int tens, int ones)
{
    write(1, &hundreds,1);
    write(1, &tens,1);
    write(1, &ones,1);
    if( (hundreds != '7' || tens != '8') || ones != '9' )
        write(1, ",", 1);
    write(1, " ",1);
}

void ft_print_comb(void)
{
    int ones;
    int tens;
    int hundreds;

    ones = '0';
    tens = '0';
    hundreds = '0';

    while (hundreds <= '7')
    {
        tens = hundreds + 1;
        while (tens <= '8')
        {
            ones = tens + 1;
            while (ones <= '9')
            {
                write_value(hundreds, tens, ones);
                ones++;
            }
            ones = '0';
            tens++;
        }
        tens = '0';
        hundreds++;
    }
}



