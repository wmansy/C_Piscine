/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:06:18 by plouie            #+#    #+#             */
/*   Updated: 2021/08/08 20:06:20 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	m;
	unsigned int	s;

	m = 0;
	s = 0;
	while (dest[m] != '\0')
		m++;
	while (src[s] != '\0' && m < size - 1)
	{
		dest[m] = src[s];
		m++;
		s++;
	}
	dest[m] = '\0';
	return (dest);
}
