#include <unistd.h>
#include <stdio.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
	int s;
	int	*s1;
	int	**s2;
	int	***s3;
	int	****s4;
	int	*****s5;
	int	******s6;
	int	*******s7;
	int	********s8;
	int	*********s9;
	
	s = 20;
	s1 = &s;
	s2 = &s1;
	s3 = &s2;
	s4 = &s3;
	s5 = &s4;
	s6 = &s5;
	s7 = &s6;
	s8 = &s7;
	s9 = &s8;
	ft_ultimate_ft(s9);
	printf("%d\n", s);
}
