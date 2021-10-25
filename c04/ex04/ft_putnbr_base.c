/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:50:49 by plouie            #+#    #+#             */
/*   Updated: 2021/08/10 10:50:52 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *b_check)
{
	int	i;
	int	len;

	len = 0;
	while (b_check[len])
	{
		if (b_check[len] == '+' && b_check[len] == '-')
			return (0);
		i = 1;
		while (b_check[len + i])
		{
			if (b_check[len] == b_check[len + i])
				return (0);
			i++;
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	int		m[1000];
	long	x;

	x = (long) nbr;
	len = base_check(base);
	if (len > 1 && x < 0)
	{
		write(1, "-", 1);
		x = -x;
		i = 0;
		while (x)
		{
			m[i] = x % len;
			x = x / len;
			i++;
		}
		while (i-- > 0)
			write (1, &(base[m[i]]), 1);
	}
}
