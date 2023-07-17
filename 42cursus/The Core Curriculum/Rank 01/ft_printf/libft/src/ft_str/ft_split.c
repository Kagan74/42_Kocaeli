/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:01:33 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 15:13:46 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_count_word(const char *str1, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str1 && str1[i])
	{
		if (str1[i] != c)
		{
			word_count++;
			while (str1[i] != c && str1[i])
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

int	ft_size_word(const char *str1, char c, int i)
{
	int	size;

	size = 0;
	while (str1[i] != c && str1[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_free(char **str2, int c)
{
	while (c-- > 0)
		free(str2[c]);
	free(str2);
	return (NULL);
}

char	**ft_split(const char *str1, char c)
{
	int		i;
	int		j;
	int		word_count;
	char	**str2;

	i = 0;
	j = -1;
	word_count = ft_count_word(str1, c);
	str2 = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!str2)
		return (NULL);
	while (++j < word_count)
	{
		while (str1[i] == c)
			i++;
		str2[j] = ft_substr(str1, i, ft_size_word(str1, c, i));
		if (!(str2[j]))
			return (ft_free(str2, j));
		i += ft_size_word(str1, c, i);
	}
	str2[j] = 0;
	return (str2);
}
