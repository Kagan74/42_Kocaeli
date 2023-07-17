/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:27:08 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 12:09:27 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *sour, size_t len)
{
	if (!dest && !sour)
		return (0);
	if (dest < sour)
		ft_memcpy(dest, sour, len);
	else if (dest > sour)
		while (len--)
			*((unsigned char *)(dest + len)) = *((unsigned char *)(sour + len));
	return (dest);
}
