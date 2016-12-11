// Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
// Your function must return its result in less than two seconds.

// Num.    Square Root
// 1          1.000
// 2          1.414
// 3          1.732
// 4          2.000
// 5          2.236
// 23         4.796
// 24         4.899
// 25         5.000

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < nb)
		i++;
	if (nb % i == 0)
		return (i);
	else
		return (0);
}

int main()
{
	int nb;

	nb = 81;
	printf("%d",ft_sqrt(nb));
}
