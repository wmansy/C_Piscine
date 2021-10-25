/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:53:50 by plouie            #+#    #+#             */
/*   Updated: 2021/08/12 16:53:51 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rg;
	int	i;

	i = 0;
	rg = malloc(sizeof(int) * (max - min));
	if (rg == NULL || min >= max)
		return (NULL);
	while (min < max)
		rg[i++] = min++;
	return (rg);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
