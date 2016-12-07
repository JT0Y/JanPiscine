// Create a recursive function that returns the factorial of the number given as a parameter.
// If there’s an error, the function should return 0.
// 0   1
// 1   1
// 2   2
// 3   6
// 4   24
// 5   120
// 6   720
// 7   5040
// 8   40320
// 9   362880
// 10  3628800
// 11  39916800
// 12  479001600
// 13  6227020800

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int result;

    if (nb == 0 || nb == 1)
        return (1);

    return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    int nb = 6;
    printf("%d", ft_recursive_factorial(nb));
}
