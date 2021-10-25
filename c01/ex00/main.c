#include <unistd.h>
#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int a;

	a = 21;
	ft_ft(&a);
	printf("%d\n", a);
}
