/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:32:47 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 12:14:52 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str1, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str2;

	i = 0;
	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str1)) + 1);
	if (!str2)
		return (NULL);
	while (str1[i])
	{
		str2[i] = f(i, str1[i]);
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
