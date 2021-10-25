/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:47:38 by plouie            #+#    #+#             */
/*   Updated: 2021/08/18 15:47:40 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int			ft_strcmp(char *s1, char *s2);
long		ft_atoi(char *str);
void		ft_putnbr(long nbr);
long		ft_addition(long nb1, long nb2);
long		ft_substraction(long nb1, long nb2);
long		ft_multiplication(long nb1, long nb2);
long		ft_division(long nb1, long nb2);
long		ft_modulo(long nb1, long nb2);

#endif
