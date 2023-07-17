/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:58:31 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:58:32 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_sorted_list_insert(t_list **begin_list,void *data, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*swap;
	t_list	*new_node;

	list_ptr = (*begin_list);
	new_node = ft_create_elem(data);
	new_node->next = (*begin_list);
	*begin_list = new_node;
	while(list_ptr != NULL)
	{
		other_list_ptr = list_ptr->next;
		while(other_list_ptr != NULL)
		{
			if((*cmp)(list_ptr->data, other_list_ptr->data) > 0)
			{
				swap = list_ptr->data;
				list_ptr->data = other_list_ptr->data;
				other_list_ptr->data = swap;
			}
			other_list_ptr = other_list_ptr->next;
		}
		list_ptr = list_ptr->next;
	}
}
