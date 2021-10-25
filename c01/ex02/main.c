#include <unistd.h>
#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int a;
	int b;

	a = 21;
	b = 42;
	ft_swap(&a, &b);
	printf("a:%d\n", a);
	printf("b:%d\n", b);
}
