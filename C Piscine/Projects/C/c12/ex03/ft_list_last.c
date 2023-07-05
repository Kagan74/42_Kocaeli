/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:01:37 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 13:01:38 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list)
{
  t_list *Node;
  
  if (begin_list)
  {
    while (begin_list)
    {
      Node = begin_list;
      begin_list = begin_list->next;
    }
    return (Node);
  }
    return (begin_list);
}
