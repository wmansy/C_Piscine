/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:06:04 by plouie            #+#    #+#             */
/*   Updated: 2021/08/10 20:06:07 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2 && nb % 2 == 0)
		return (0);
	i = 2;
	while (++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
