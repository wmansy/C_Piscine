/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:55:01 by plouie            #+#    #+#             */
/*   Updated: 2021/08/12 14:55:02 by plouie           ###   ########.fr       */
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
