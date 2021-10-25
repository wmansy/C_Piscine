#include <stdio.h>
#include "ft_strcpy.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "hello";
	char	b[8];
	char	*p;
	p = ft_strcpy(b,a);
	while(b[i])
	{
		printf("%c",b[i]);
		i++;
	}

}
