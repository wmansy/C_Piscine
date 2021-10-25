#include <stdio.h>
#include <unistd.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "@)(@Az";
	int	p;
	p = ft_str_is_printable(a);
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n%d",p);
}
