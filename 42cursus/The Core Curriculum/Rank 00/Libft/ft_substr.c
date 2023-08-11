/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:18:06 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/22 14:45:34 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || !len || !ft_strlen(s))
		return (ft_strdup(""));
	while (x < len && s[x + start] != '\0')
		x++;
	dest = (char *)malloc((sizeof(char) * x) + 1);
	if (dest == NULL)
		return (NULL);
	x = 0;
	while (s[y])
	{
		if (y >= start && x < len)
			dest[x++] = s[start++];
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
