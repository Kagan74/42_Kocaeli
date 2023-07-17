/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:56:18 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:57:37 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*elem;

	if (root)
	{
		elem = btree_search_item(root->left, data_ref, cmpf);
		if (elem)
			return (elem);
		if (!cmpf(root->item, data_ref))
			return (root->item);
		elem = btree_search_item(root->right, data_ref, cmpf);
		if (elem)
			return (elem);
	}
	return (0);
}

