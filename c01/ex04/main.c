#include <unistd.h>
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}
