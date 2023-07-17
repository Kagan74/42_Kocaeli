/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:01:00 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:01:01 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *Node;
	 unsigned int	count;

	count = 0;
	Node = begin_list;
	while(Node != NULL)
	{
		if(count == nbr)
			return(Node);
		Node = Node->next;
		count++;
	}
	return (NULL);
}
