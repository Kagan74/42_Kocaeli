/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:46:38 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 14:24:58 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int find)
{
	while (*str && (char)find != *str)
		str++;
	if ((char)find == *str)
		return ((char *)str);
	return (0);
}
