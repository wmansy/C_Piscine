#include <unistd.h>
#include <stdio.h>
#include "ft_sort_int_tab.c"

int	main(void)
{
	int	size;
	int i;

	size = 5;
	i = 0;
	int	a[] = {5, 20, 4, 4, 5};
	ft_sort_int_tab(a, size);
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	};
}
