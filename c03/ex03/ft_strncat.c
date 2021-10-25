/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:11:07 by plouie            #+#    #+#             */
/*   Updated: 2021/08/08 16:11:15 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	m;
	unsigned int	s;

	m = 0;
	s = 0;
	while (dest[m] != '\0')
		m++;
	while (src[s] != '\0' && s < nb)
	{
		dest[m] = src[s];
		m++;
		s++;
	}
	dest[m] = '\0';
	return (dest);
}
