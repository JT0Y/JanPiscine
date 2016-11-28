// Create a function that takes a pointer to pointer to pointer to pointer to pointer to pointer
// to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_ultimate_ft(int *********nbr)
{
   *********nbr = 42;
}

int main()
{
    int *********nbr;

	nbr         = malloc(sizeof(int********));
	*nbr        = malloc(sizeof(int*******));
	**nbr       = malloc(sizeof(int******));
	***nbr      = malloc(sizeof(int*****));
	****nbr     = malloc(sizeof(int****));
	*****nbr    = malloc(sizeof(int***));
	******nbr   = malloc(sizeof(int**));
	*******nbr  = malloc(sizeof(int*));
	********nbr = malloc(sizeof(int));
	ft_ultimate_ft(nbr);
    printf("%d", *********nbr);
}
