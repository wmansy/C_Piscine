#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	int	l;

	char	a[] = {"hello"};
	l = ft_strlen(a);
	printf("%d\n", l);
}
