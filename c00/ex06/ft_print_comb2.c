/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:24:50 by plouie            #+#    #+#             */
/*   Updated: 2021/08/05 11:24:54 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char m, char a, char n, char s)
{
	char	space;
	char	comma;

	space = ' ';
	comma = ' ';
	if (m < n || (m == n && a < s))
	{
		write (1, &m, 1);
		write (1, &a, 1);
		write (1, &space, 1);
		write (1, &n, 1);
		write (1, &s, 1);
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	char	m[4];

	m[0] = '0';
	while (m[0] <= '9')
	{
		m[1] = '0' ;
		while (m[1] <= '9')
		{
			m[2] = '0';
			while (m[2] <= '9')
			{
				m[3] = '0';
				while (m[3] <= '9')
				{
					ft_print(m[0], m[1], m[2], m[3]);
					m[3]++;
				}
				m[2]++;
			}
			m[1]++;
		}
		m[0]++;
	}
}
