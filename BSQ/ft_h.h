/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:04:35 by plouie            #+#    #+#             */
/*   Updated: 2021/08/24 18:12:48 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_value(char *filename, int *size, char *value, char ***map);
int		ft_map(int file, int *size, char ***map, char *value);
int		ft_read_simvol(char *c);
int		ft_square(char ***map, int *size, char *value);
char	*Read(void);
int		Proverka(char *value, char c);
void	free_map_int(int **map_int, int size);
int		Min(int x, int y, int z);
void	Transform(int *max, int kol, char ***map, char c);
void	free_map(char **map, int size);

#endif
