/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:50:56 by plouie            #+#    #+#             */
/*   Updated: 2021/08/11 20:50:58 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *a)
{
	while (*a)
		write(1, a++, 1);
	write(1, "\n", 1);
}

void	ft_strcmp(char *str[], int s1, int s2)
{
	int		i;
	char	*k;

	i = 0;
	while (str[s1][i] == str[s2][i])
		i++;
	if (str[s1][i] - str[s2][i] > 0)
	{
		k = str[s1];
		str[s1] = str[s2];
		str[s2] = k;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;
	int	y;

	x = 1;
	i = 0;
	while (x < argc - 1)
	{
		y = x + 1;
		while (y < argc)
		{
			ft_strcmp(argv, x, y);
			y++;
		}
		x++;
	}
	while (argv[++i])
		ft_putstr(argv[i]);
	return (0);
}
