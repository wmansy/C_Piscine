#include <stdio.h>
#include "ft_strncmp.c"
#include <string.h>
int	main(void)
{
	char s1[] = "hellow\\";
	char s2[] = "helow";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
}