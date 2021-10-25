#include <stdio.h>
#include "ft_strcat.c"
#include <string.h>
int	main(void)
{
	char s1[100] = "check_s1";
	char s2[] = "check_s2";
	
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s1, s2));
}