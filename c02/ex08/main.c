#include <stdio.h>
#include "ft_strlowcase.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "AeZaKmI";
	char	*p;
	p = ft_strlowcase(a);
	while(p[i])
	{
		printf("%c",p[i]);
		i++;
	}
//	printf("\n%d",p);
}
