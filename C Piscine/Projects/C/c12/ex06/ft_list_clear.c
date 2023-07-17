/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:01:07 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:01:11 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	while(begin_list != 0)
	{	
	 	(*free_fct)(begin_list->data);
		begin_list = begin_list->next;
	}
	free(begin_list);
}

