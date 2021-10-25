/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:42:42 by plouie            #+#    #+#             */
/*   Updated: 2021/08/24 19:42:43 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	free_map_int(int **map_int, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(map_int[i++]);
	free(map_int);
}

int	Min(int x, int y, int z)
{
	if (x >= y && y >= z)
		return (z);
	else if (y >= x && x >= z)
		return (z);
	else if (x >= z && z >= y)
		return (y);
	else if (z >= x && x >= y)
		return (y);
	else if (y >= z && z >= x)
		return (x);
	else
		return (x);
}

void	Transform(int *max, int kol, char ***map, char c)
{
	int	i;
	int	j;

	i = max[0];
	while (i >= max[0] - kol)
	{
		j = max[1];
		while (j >= max[1] - kol)
		{
			(*map)[i][j] = c;
			j--;
		}
		i--;
	}
}
