#include <stdio.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	int	i = 0;
	char	a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*p;
	p = ft_strcapitalize(a);
	while(p[i])
	{
		printf("%c",p[i]);
		i++;
	}
//	printf("\n%d",p);
}
