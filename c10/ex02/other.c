/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:47:25 by plouie            #+#    #+#             */
/*   Updated: 2021/08/17 19:47:27 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int output);

int	ft_atoi(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if ((str[0] == '-') && (str[1] == 'c'))
		str += 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10 + (str[i] - '0'));
		i++;
	}
	if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		ft_putstr("tail: illegal offset -- ", 1);
		ft_putstr(str, 1);
		ft_putstr("\n", 1);
		a = 0;
	}
	return (a);
}

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(output, str, i);
}

void	ft_print(int s, int i, char **argv)
{
	if (s > 2)
	{
		ft_putstr("\n==> ", 1);
		ft_putstr(argv[i], 1);
		ft_putstr(" <==\n", 1);
	}
}
