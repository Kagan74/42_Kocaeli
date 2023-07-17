/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:18:06 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 12:17:19 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str) || !len || !ft_strlen(str))
		return (ft_strdup(""));
	while (x < len && str[x + start] != '\0')
		x++;
	dest = (char *)malloc((sizeof(char) * x) + 1);
	if (dest == NULL)
		return (NULL);
	x = 0;
	while (str[y])
	{
		if (y >= start && x < len)
			dest[x++] = str[start++];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
