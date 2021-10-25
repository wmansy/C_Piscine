#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "AZ";
	int	p;
	p = ft_str_is_uppercase(a);
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n%d",p);
}
