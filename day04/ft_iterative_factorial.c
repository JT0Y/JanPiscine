// Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
// If there’s an error, the function should return 0. • Here’s how it should be prototyped :
// Your function must return its result in less than two seconds.
// The factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n.
// 4! = 4 × 3 × 2 × 1 = 24
// 7! = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040
// 1! = 1

#include <stdio.h>
#include <unistd.h>

 int ft_iterative_factorial(int nb)
{
    int i;
    int temp;
    i = nb - 2;
    temp = 0;

    while(i > 0)
    {
        temp = nb * i;
        nb += temp;
        i--;
    }
    return (nb);
}

int main()
{
    int nb;

    nb = 4;
    printf("%d", ft_iterative_factorial(nb));
}
