/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:45:45 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/11 17:54:52 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (new && lst)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			p = ft_lstlast(*lst);
			if (!p)
				*lst = new;
			else
				p->next = new;
		}
	}
}
