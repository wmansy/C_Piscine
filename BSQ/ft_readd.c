/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:08:09 by plouie            #+#    #+#             */
/*   Updated: 2021/08/24 18:16:50 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	Create_Malloc(char ***map, int *size)
{
	int	stroka;

	stroka = 0;
	*map = (char **)malloc(sizeof(char *) * (size[0]));
	if (*map == NULL)
		return (-1);
	while (stroka < size[0])
	{
		(*map)[stroka] = (char *)malloc(sizeof(char) * (size[1]));
		if ((*map)[stroka++] == NULL)
			return (-1);
	}
	return (0);
}

void	Smechenie(int *kol_n, int *shirina, int *stroka)
{
	(*kol_n)++;
	(*shirina) = 0;
	(*stroka)++;
}

int	Kol_n(int kol_n, int size)
{
	if (kol_n == size)
		return (1);
	else
		return (-1);
}

int	ft_map(int file, int *size, char ***map, char *value)
{
	char	buff;
	int		stroka;
	int		shirina;
	int		kol_n;

	if (Create_Malloc(map, size) == -1)
		return (-1);
	shirina = 0;
	stroka = 0;
	kol_n = 0;
	while (read(file, &buff, 1))
	{
		if ((buff == '\n' && shirina != size[1]) || stroka == size[0])
			return (-1);
		else if (shirina == size[1] && buff == '\n' && stroka < size[0])
		{
			Smechenie(&kol_n, &shirina, &stroka);
			continue ;
		}
		if (Proverka(value, buff) == -1)
			return (-1);
		(*map)[stroka][shirina] = buff;
		shirina++;
	}
	return (Kol_n(kol_n, size[0]));
}

int	ft_value(char *filename, int *size, char *value, char ***map)
{
	char	buff;
	int		file;
	int		i;

	file = open (filename, O_RDONLY);
	if (file < 0)
		return (-1);
	while (read(file, &buff, 1) && buff != '\n')
		i = 0;
	if (ft_map(file, size, map, value) == -1)
		return (-1);
	close(file);
	return (0);
}
