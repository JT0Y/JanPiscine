// Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.
// • Here’s how it should be prototyped : void ft_print_alphabet(void);

// unistd library is necessary for write function
#include <unistd.h>

void ft_print_alphabet(void)
{
    // Set the starting letter to 'z'
    // Alternative we could set this to the ascii decimal value of 122
    int startingletter = 'z';

    // using ascii values this reads as, "while 122 is greater than or equal to 97"
    while (startingletter >= 'a')
    {
        // Write the current letter we are itterating on
        write(1, &startingletter, 1);

        // Subtract 1 from 122 ('z')
        startingletter--;
    }
}

// Every C application looks for a main
int main()
{
    // Run the ft_print alphabet function with no arguments
    ft_print_alphabet();
}
