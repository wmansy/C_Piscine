/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:13:26 by plouie            #+#    #+#             */
/*   Updated: 2021/08/09 17:13:29 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_a(char str, int b)
{
	if (b == 0 && str == ' ')
		return (1);
	if (str == '+' || str == '-')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f' || str == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (check_a(*str, b))
	{
		if (*str == '-')
			b++;
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				a = (a * 10 + *str - '0');
				str++;
			}
			if (b % 2 != 0)
				a = -a;
			return (a);
		}
		str++;
	}
	return (a);
}
