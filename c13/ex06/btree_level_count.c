/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 23:20:54 by plouie            #+#    #+#             */
/*   Updated: 2021/08/20 23:20:56 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_max(int res, int root)
{
	if (res > root)
		return (res);
	return (root);
}

int	btree_level_count(t_btree *root)
{
	int	res;

	res = 0;
	if (root)
	{
		if (root->left)
			res = ft_max(res, btree_level_count(root->left));
		if (root->right)
			res = ft_max(res, btree_level_count(root->right));
		return (res + 1);
	}
	return (0);
}
