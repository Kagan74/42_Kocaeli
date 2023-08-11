/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:55:46 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:56:02 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

int	btree_level_count(t_btree *root)
{
	int	countl;
	int	countr;

	if (root)
	{
		countl = btree_level_count(root->left);
		countr = btree_level_count(root->right);
		if (countl > countr)
			return (countl + 1);
		else
			return (countr + 1);
	}
	else
		return (0);
}

