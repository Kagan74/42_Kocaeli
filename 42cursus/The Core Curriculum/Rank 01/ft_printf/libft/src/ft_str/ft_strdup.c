/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:23:21 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/16 18:23:22 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	len;

	len = ft_strlen(str);
	str2 = (char *)malloc(len + 1);
	if (!(str2))
	{
		return (NULL);
	}
	ft_memcpy(str2, str, len + 1);
	return (str2);
}
