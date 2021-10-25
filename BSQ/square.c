/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:59:45 by cayesha           #+#    #+#             */
/*   Updated: 2021/08/24 18:11:21 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_h.h"

int	Create_map(int ***map_int, int *size)
{	
	int	i;

	*map_int = (int **)malloc(sizeof(int *) * (size[0] + 1));
	if (*map_int == NULL)
		return (-1);
	i = 0;
	while (i <= size[0])
	{
		(*map_int)[i] = (int *)malloc(sizeof(int) * (size[1] + 1));
		if ((*map_int)[i++] == NULL)
			return (-1);
	}
	return (0);
}

void	Obrabotka(char **map, char *value, int *size, int ***map_int)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= size[0])
		(*map_int)[i++][0] = 0;
	while (j <= size[1])
		(*map_int)[0][j++] = 0;
	i = 1;
	while (i <= size[0])
	{
		j = 1;
		while (j <= size[1])
		{
			if (map[i - 1][j - 1] == value[1])
				(*map_int)[i][j] = 0;
			else
				(*map_int)[i][j] = Min((*map_int)[i][j - 1],
						(*map_int)[i - 1][j], (*map_int)[i - 1][j - 1]) + 1;
			j++;
		}
		i++;
	}
}

void	Find_max_square(int **max, int **map_int, int *size)
{
	int	i;
	int	j;

	i = 1;
	while (i <= size[0])
	{
		j = 1;
		while (j <= size[1])
		{		
			if (map_int[i][j] > map_int[(*max)[0]][(*max)[1]])
			{
				(*max)[0] = i;
				(*max)[1] = j;
			}
			j++;
		}
		i++;
	}
}

void	Vivod1(char **map, int *size)
{
	int	i;

	i = 0;
	while (i < size[0])
	{
		write(1, map[i], size[1]);
		if (i != size[0] - 1)
			write(1, "\n", 1);
		i++;
	}
}

int	ft_square(char ***map, int *size, char *value)
{
	int	*max;
	int	**map_int;
	int	kol;

	max = (int *)malloc(sizeof(int) * 2);
	if (Create_map(&map_int, size) == -1)
		return (-1);
	Obrabotka(*map, value, size, &map_int);
	max[0] = 1;
	max[1] = 1;
	Find_max_square(&max, map_int, size);
	kol = map_int[max[0]][max[1]] - 1;
	max[0]--;
	max[1]--;
	Transform(max, kol, map, value[2]);
	free_map_int(map_int, size[0]);
	Vivod1(*map, size);
	return (0);
}
