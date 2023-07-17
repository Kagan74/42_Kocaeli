/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:21:28 by kkarakur          #+#    #+#             */
/*   Updated: 2023/02/21 16:28:48 by kkarakur         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;
	int				i;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	i = 2;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
