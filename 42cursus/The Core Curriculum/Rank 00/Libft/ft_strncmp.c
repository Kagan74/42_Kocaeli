/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:55:15 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/19 13:19:19 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 && *str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
