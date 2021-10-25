/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:43:12 by plouie            #+#    #+#             */
/*   Updated: 2021/08/24 19:43:15 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_read_simvol(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	if (i > 3)
		return (-1);
	if (!(c[0] >= 32 && c[0] <= 126))
		return (-1);
	if (!(c[1] >= 32 && c[1] <= 126 && c[0] != c[1]))
		return (-1);
	if (!(c[2] >= 32 && c[2] <= 126 && c[2] != c[0] && c[2] != c[1]))
		return (-1);
	return (0);
}

int	Proverka(char *value, char c)
{
	if (c == value[0] || c == value[1])
		return (1);
	else
		return (-1);
}

void	free_map(char **map, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(map[i++]);
	free(map);
}
