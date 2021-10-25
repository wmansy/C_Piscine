/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:23:55 by plouie            #+#    #+#             */
/*   Updated: 2021/08/11 16:23:58 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *a)
{
	while (*a)
		write(1, a++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	while (argc > 1)
		ft_putstr(argv[--argc]);
	return (0);
}
