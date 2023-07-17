/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:01:24 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 13:02:56 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *del)
{
	size_t	i;

	i = 0;
	if (!str || !del)
		return (NULL);
	while (*str && ft_strchr(del, *str))
		str++;
	i = ft_strlen(str);
	while (i && ft_strchr(del, str[i]))
		i--;
	return (ft_substr(str, 0, i + 1));
}
