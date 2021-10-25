/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:47:18 by plouie            #+#    #+#             */
/*   Updated: 2021/08/17 19:47:20 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int		ft_atoi(char *str);
void	ft_putstr(char *str, int output);
void	ft_print(int s, int i, char **argv);
void	error(char **argv, int i, int er);

void	ft_stdin(void)
{
	char	buff;

	while (read(1, &buff, 1) > 0)
		write(1, &buff, 1);
}

int	ft_size_file(int c, int i, char **argv)
{
	int		f;
	char	a;
	int		s;
	int		size;

	size = 0;
	s = 1;
	f = open(argv[i], O_RDONLY);
	while (s > 0)
	{
		s = read(f, &a, 1);
		size++;
	}
	close(f);
	f = size - c;
	if (f < 0)
		f = 0;
	errno = 0;
	return (f);
}

void	ft_tail(int c, int i, char **argv, int s)
{
	char	buff;
	int		file;
	int		start;
	int		size;
	int		k;

	k = 0;
	size = 1;
	file = open(argv[i], O_RDONLY);
	if (file >= 0)
	{
		ft_print(s, i, argv);
		start = ft_size_file(c, i, argv);
		while (size > 0)
		{
			size = read(file, &buff, 1);
			if (k == start)
			{
				write(1, &buff, 1);
				continue ;
			}
			k++;
		}
	}
	if (errno != 0)
		error(argv, i, errno);
	close(file);
}

void	error(char **argv, int i, int er)
{
	if (er != 21)
	{
		ft_putstr("ft_tail: ", 2);
		ft_putstr(argv[i], 2);
		ft_putstr(": ", 2);
		ft_putstr(strerror(er), 2);
		ft_putstr("\n", 2);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	int	s;

	i = 1;
	if (argc > 1 && argv[1][0] == '-' &&
	argv[1][1] == 'c' && argv[1][2] == '\0')
		i++;
	if ((argc == 1) || (argc - 1 == i))
	{
		ft_stdin();
		return (0);
	}
	c = ft_atoi(argv[i]) + 1;
	if (c == 1)
		return (0);
	s = argc - i;
	while (++i < argc)
	{
		ft_tail(c, i, argv, s);
	}
	return (0);
}
