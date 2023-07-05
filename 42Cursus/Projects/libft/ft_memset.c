/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:45:16 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/05 12:45:21 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*strptr;
	size_t	i;

	strptr = (char *)ptr;
	i = 0;
	while (i < count)
	{
		strptr[i] = value;
		i++;
	}
	return (ptr);
}
