/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 22:58:06 by plouie            #+#    #+#             */
/*   Updated: 2021/08/12 22:58:09 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	m;
	int	s;

	m = 0;
	s = 0;
	while (dest[m] != '\0')
		m++;
	while (src[s] != '\0')
		dest[m++] = src[s++];
	dest[m] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
		len = len + ft_len(strs[i++]);
	return (len + ft_len(sep) * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof(char));
	*s = 0;
	if (size == 0)
		return (s);
	s = malloc(sizeof(char) * str_len(size, strs, sep) + 1);
	if (s == NULL)
		return (s);
	while (i < size)
	{
		s = ft_strcat(s, strs[i]);
		if (i < size - 1)
			s = ft_strcat(s, sep);
		i++;
	}
	return (s);
}
