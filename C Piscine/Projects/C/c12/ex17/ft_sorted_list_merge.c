/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:58:17 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:58:18 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int    ft_strcmp(void *data1, void *data2)
{
    return (*(int *)data1 - *(int *)data2);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *Node;
	t_list	*previous;

	Node = (*begin_list1);
	while(Node != NULL)
	{
		previous = Node;
		Node = Node->next;
	}
	previous->next = begin_list2;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*swap;

	list_ptr = (*begin_list);
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

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp) ())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
