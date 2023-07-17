/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 07:46:44 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 12:04:46 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		position;

	if (!*to_find)
		return ((char *)str);
	position = ft_strlen((char *)to_find);
	while (*str && len-- >= position)
	{
		if (*str == *to_find && !ft_memcmp(str, to_find, position))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
