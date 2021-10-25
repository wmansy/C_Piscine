/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:18:48 by plouie            #+#    #+#             */
/*   Updated: 2021/08/16 21:18:50 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(output, str, i);
}

void	ft_stdin(void)
{
	char	buff[100];
	int		size;

	size = 1;
	while (size > 0)
	{
		size = read(1, buff, 100);
		write(1, buff, size);
	}
}

void	ft_cat(int i, char **argv)
{
	char	buff;
	int		file;
	int		size;

	size = 1;
	file = open(argv[i], O_RDONLY);
	if (file >= 0)
	{
		while (size > 0)
		{
			size = read(file, &buff, 1);
			write(1, &buff, 1);
		}
	}
	if (errno != 0)
	{
		ft_putstr("ft_cat: ", 2);
		ft_putstr(argv[i], 2);
		ft_putstr(": ", 2);
		ft_putstr(strerror(errno), 2);
		ft_putstr("\n", 2);
	}
	close(file);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_stdin();
		else
			ft_cat(i, argv);
	}
	if (argc < 2)
		ft_stdin();
	return (0);
}
