/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:56:35 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:56:36 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void*))
{
	t_btree	*node;

	if ((*root) == NULL)
		*root = btree_create_node(item);
	node = *root;
	if ((cmpf)(item, (*root)->item) < 0)
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}
