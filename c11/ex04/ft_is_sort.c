/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:36:02 by plouie            #+#    #+#             */
/*   Updated: 2021/08/18 13:36:06 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sorted_up(int *tab, int lenght, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sorted_down(int *tab, int lenght, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	if (ft_sorted_up(tab, lenght, f) || ft_sorted_down(tab, lenght, f))
		return (1);
	else
		return (0);
}

int	ft_strcmp(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}
