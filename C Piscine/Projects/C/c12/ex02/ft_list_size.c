/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:01:45 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:01:46 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list)
{
	int count;
	t_list *Node;

	Node = begin_list;
	count = 0;
	while(Node != NULL)
	{
		count++;
		Node = Node->next;
	}
	return(count);
}
