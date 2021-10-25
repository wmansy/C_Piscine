#include <stdio.h>
#include "ft_strncat.c"
#include <string.h>
int	main(void)
{
	char s1[100] = "check_s1";
	char s2[] = "check_s2";
	
	printf("%s\n", ft_strncat(s1, s2, 3));
	printf("%s\n", strncat(s1, s2, 3));
}