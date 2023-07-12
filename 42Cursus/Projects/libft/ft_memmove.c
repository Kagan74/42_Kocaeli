/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:27:08 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/09 06:53:18 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*srcmov;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	srcmov = (char *)src;
	i = 0;
	if (dest > srcmov)
		ft_memcpy(dest, src, n);
	else
	{
		while (n)
		{
			dest[i] = srcmov[i];
			i++;
			n--;
		}
	}
	return (dest);
}
