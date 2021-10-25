#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "az";
	int	p;
	p = ft_str_is_lowercase(a);
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n%d",p);
}
