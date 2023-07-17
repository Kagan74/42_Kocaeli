/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:55:38 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:57:31 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

int	g_level = 0;
int	g_first = 1;

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
	{
		g_level--;
		return ;
	}
	applyf(root->item, g_level, g_first);
	g_level++;
	btree_apply_by_level(root->left, applyf);
	if (root->left)
		g_first = 0;
	g_level++;
	btree_apply_by_level(root->right, applyf);
	g_level--;
}
