#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int	main(void)
{
	printf("+ %d\n", ft_atoi("  ---+--123456789hello"));
	printf("- %d\n", ft_atoi("  --- ++123456"));
	printf("- %d\n", ft_atoi("++- 1234"));
	printf("- %d\n", ft_atoi(" + -3gfrg345"));
//int a = 2147483647;
//a++;
//	printf("%d\n", a);
//	printf("%d", atoi("01407483648"));
}