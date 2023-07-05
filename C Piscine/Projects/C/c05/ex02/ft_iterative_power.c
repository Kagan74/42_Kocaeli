/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:49:03 by kkarakur          #+#    #+#             */
/*   Updated: 2023/02/21 16:32:41 by kkarakur         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
