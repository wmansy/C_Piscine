#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "09";
	int	p;
	p = ft_str_is_numeric(a);
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n%d",p);
}
