/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:01:28 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:01:29 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list    *Node;

    Node = *begin_list;
    if (Node)
    {
        while (Node->next)
            Node = Node->next;
        Node->next = ft_create_elem(data);
    }
    else
        *begin_list = ft_create_elem(data);
}
