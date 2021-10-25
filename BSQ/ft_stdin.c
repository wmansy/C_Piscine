/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:42:25 by plouie            #+#    #+#             */
/*   Updated: 2021/08/24 19:42:27 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*Read(void)
{
	int		fd;
	char	c;
	char	*name;

	name = "buffer";
	fd = open(name, O_TRUNC | O_WRONLY);
	if (fd < 0)
		return (0);
	while (read(0, &c, 1))
		write(fd, &c, 1);
	close(fd);
	write(1, "\n", 1);
	return (name);
}
