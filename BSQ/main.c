/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:14:34 by plouie            #+#    #+#             */
/*   Updated: 2021/08/25 21:13:58 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
//#include "stdio.h"
int	ft_len2(char *filename)
{
	int		i;
	int		file;
	char	buff;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (-1);
	i = 0;
	while (read(file, &buff, 1) && buff != '\n')
		i++;
	close(file);
	return (i);
}

int	ft_len3(int **size, char **value, int i, char *line)
{
	int	k;

	k = 2;
	while (k > -1)
		(*value)[k--] = line[i--];
	while (++k <= i && line[k] >= '0' && line[k] <= '9')
		(*size)[0] = (*size)[0] * 10 + (line[k] - '0');
	if (k == i)
		return (-1);
	return (0);
}

int	ft_len(char	*filename, int **size, char **value)
{
	int		i;
	int		file;
	char	buff;
	char	*line;

	(*size)[0] = 0;
	line = (char *)malloc(sizeof(char) * ft_len2(filename));
	if (line == NULL)
		return (-1);
	i = -1;
	file = open(filename, O_RDONLY);
	while (read(file, &buff, 1) && buff != '\n')
		line[++i] = buff;
	if (ft_len3(size, value, i, line) == -1)
		return (-1);
	free(line);
	i = 0;
	while (read(file, &buff, 1) && buff != '\n')
		i++;
	(*size)[1] = i;
	close(file);
	if (ft_read_simvol(*value) == -1)
		return (-1);
	return (0);
}

void	ft_create(char *argv, int *size, char *value, char **map)
{
	if (ft_len(argv, &size, &value) == -1 || size[0] == 0 || size[1] == 0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	if (ft_value(argv, size, value, &map) == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	if (ft_square(&map, size, value) == -1)
	{
		write(2, "map error\n", 10);
		return ;
	}
	free_map(map, size[0]);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		*size;
	char	*value;
	char	**map;

	map = NULL;
	size = (int *)malloc(sizeof(int) * 2);
	value = (char *)malloc(sizeof(char) * 3);
	i = 0;
	if (argc == 1)
		ft_create(Read(), size, value, map);
	while (++i < argc)
		ft_create(argv[i], size, value, map);
	free(value);
	free(size);
//	getchar();
	return (0);
}
