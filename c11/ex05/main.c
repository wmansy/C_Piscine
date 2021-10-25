/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:08:35 by plouie            #+#    #+#             */
/*   Updated: 2021/08/18 23:08:37 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(char **argv, long nb1, long nb2, long (*f[5])(long, long))
{
	if (!ft_strcmp(argv[2], "+"))
		ft_putnbr(f[0](nb1, nb2));
	else if (!ft_strcmp(argv[2], "-"))
		ft_putnbr(f[1](nb1, nb2));
	else if (!ft_strcmp(argv[2], "*"))
		ft_putnbr(f[2](nb1, nb2));
	else if (!ft_strcmp(argv[2], "/"))
	{
		if (nb2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(f[3](nb1, nb2));
	}
	else if (!ft_strcmp(argv[2], "%"))
	{
		if (nb2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(f[4](nb1, nb2));
	}
	else
		ft_putnbr(0);
}

int	main(int argc, char **argv)
{
	long	nb1;
	long	nb2;
	long	(*func[5])(long, long);

	if (argc != 4)
		return (1);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	func[0] = ft_addition;
	func[1] = ft_substraction;
	func[2] = ft_multiplication;
	func[3] = ft_division;
	func[4] = ft_modulo;
	ft_do_op(argv, nb1, nb2, func);
	write(1, "\n", 1);
	return (0);
}
