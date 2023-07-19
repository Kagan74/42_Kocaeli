/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:46:38 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/19 13:15:12 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int find)
{
	while (*str && (char)find != *str)
		str++;
	if ((char)find == *str)
		return ((char *)str);
	return (0);
}
