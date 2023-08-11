/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakurt@student.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:59:07 by kkarakur          #+#    #+#             */
/*   Updated: 2023/02/10 00:00:25 by kkarakur         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);

void	rush(int a, int b)
{
	int	c;
	int	d;

	d = 1;
	while (d <= b && a > 0)
	{
		c = 1;
		while (c <= a)
		{
			if ((c != 1 && c != a) && (d == 1 || d == b))
				ft_putchar('-');
			else if ((d != 1 && d != b) && (c == 1 || c == a))
				ft_putchar('|');
			else if ((c == 1) || (c == a) || (d == 1) || (d == b))
				ft_putchar('o');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		d++;
	}
}
