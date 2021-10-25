#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	int	i = 0;
	int	n = 2;
	char	a[] = "hello";
	char	b[2] = {};
	char	*p;
	p = ft_strncpy(b, a, n);
	while(b[i])
	{
		printf("%c",b[i]);
		i++;
	}

}
