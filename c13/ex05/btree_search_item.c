/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:58:23 by plouie            #+#    #+#             */
/*   Updated: 2021/08/20 21:58:24 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	void	*res;

	res = 0;
	if (root)
	{
		res = btree_search_item(root->left, data_ref, cmpf);
		if (res != 0)
			return (res);
		if (!(*cmpf)(data_ref, root->item))
			return (root->item);
		res = btree_search_item(root->right, data_ref, cmpf);
		if (res != 0)
			return (res);
	}
	return (0);
}
