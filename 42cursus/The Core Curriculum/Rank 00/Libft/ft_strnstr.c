/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 07:46:44 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/22 14:44:11 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		position;

	if (!*needle)
		return ((char *)haystack);
	position = ft_strlen((char *)needle);
	while (*haystack && len-- >= position)
	{
		if (*haystack == *needle && !ft_memcmp(haystack, needle, position))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
