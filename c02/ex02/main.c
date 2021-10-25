#include <stdio.h>
#include "ft_str_is_alpha.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "AazZ";
	int	p;
	p = ft_str_is_alpha(a);
	while(a[i])
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n%d",p);
}
