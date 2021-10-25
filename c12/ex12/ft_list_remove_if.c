/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:35:06 by plouie            #+#    #+#             */
/*   Updated: 2021/08/19 22:35:07 by plouie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void
*data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		next = (*begin_list)->next;
		free_fct((*begin_list)->data);
		free(*begin_list);
		*begin_list = next;
	}
	if (!*begin_list)
		return ;
	current = *begin_list->next;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			next = current->next;
			free_fct(current->data);
			free(current);
			current = next;
		}
		else
			current = current->next;
	}
}
