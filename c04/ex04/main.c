#include "ft_putnbr_base.c"
#include <stdio.h>
int main(void)
{
	ft_putnbr_base(-2147483648, "01");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	ft_putnbr_base(-214748364, "0123456789ABCDFF");
}