/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:58:43 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:58:44 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*swap;

	list_ptr = begin_list;
	while(list_ptr != NULL)
	{
		other_list_ptr = list_ptr->next;
		while(other_list_ptr != NULL)
		{
			swap = list_ptr->data;
			list_ptr->data = other_list_ptr->data;
			other_list_ptr->data = swap;
			other_list_ptr = other_list_ptr->next;
		}
		list_ptr = list_ptr->next;
	}
}
