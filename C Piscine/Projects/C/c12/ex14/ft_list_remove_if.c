/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:59:19 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:03:15 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp) (), void (*free_fct)(void *))
{
	t_list *list_ptr;
	t_list *prev;

	list_ptr = (*begin_list);
	if(list_ptr != NULL && (*cmp)(list_ptr->data, data_ref) == 0)
	{
		(*begin_list) = list_ptr->next;
		(*free_fct)(list_ptr->data);
		free(list_ptr);
		list_ptr = (*begin_list);
		prev = (*begin_list);
	}
	while(list_ptr != 0)
	{    
		if((*cmp)(list_ptr->data, data_ref) == 0)
		{
			prev->next = list_ptr->next;
			(*free_fct)(list_ptr->data);
			free(list_ptr);
			list_ptr = prev;
		}
		prev = list_ptr;
		list_ptr = list_ptr->next;
	}
}
