#include <stdio.h>
#include "ft_strcmp.c"
int	main(void)
{
	char s1[] = "wa";
	char s2[] = "wz";
	int ptr;

	ptr = ft_strcmp(s1, s2);
	printf("%d\n", ptr);
}