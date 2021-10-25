#include <unistd.h>
#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 21;
	b = 42;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
}
