/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:57:10 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 12:16:38 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (*(str + i) == (char)find)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
