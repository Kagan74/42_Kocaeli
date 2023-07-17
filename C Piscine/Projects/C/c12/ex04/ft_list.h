/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakur <kkarakur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:13:16 by kkarakur          #+#    #+#             */
/*   Updated: 2023/07/17 17:13:17 by kkarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_LIST_H__
# define __FT_LIST_H__

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
