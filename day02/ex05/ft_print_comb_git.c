// This is the github version by jpucelle
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

void jp_putchar(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb2(void)
{
	char n;
	char i;
	char a;
	char e;

	n = '0';
	while (n <= '9')
	{
		i = n + 1;
		while (i <= '8')
		{
			a = i + 1;
			jp_putchar(n, i, ' ');
			while (a <= '9')
			{
				e = a + 1;
				while (e <= '9')
				{
					jp_putchar(a, e, ',');
					e++;
				}
				a++;
			}
			i++;
		}
		n++;
	}
}

int main()
{
	ft_print_comb2();
}
