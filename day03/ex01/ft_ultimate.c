// Create a function that takes a pointer to pointer to pointer to pointer to pointer to pointer
// to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.

void ft_ultimate_ft(int *********nbr)
{
   *********nbr = 42;
}

int main()
{
    int *********nbr;
    int i;

    i = 33;
    nbr  = &i;
    nbr = nbr;
    *nbr = nbr;
    **nbr = nbr;
    ***nbr = nbr;
    ****nbr = nbr;
    *****nbr = nbr;
    ******nbr = nbr;
    *******nbr = nbr;
    ft_ultimate_ft(nbr);
}
