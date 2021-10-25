/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:45:54 by plouie            #+#    #+#             */
/*   Updated: 2021/08/14 10:45:56 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define	TRUE	1
# define	FALSE	0
# define	EVEN(x)	x % 2 == 0
# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG	 "I have an odd number of arguments.\n"
# define	SUCCESS	0

#endif
