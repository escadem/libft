/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:01:17 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/14 18:30:29 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_letter(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	init;
	size_t	end;
	size_t	length;

	if (s1 && set)
	{
		init = 0;
		while (s1[init] && ft_check_letter(s1[init], set))
				init++;
		end = ft_strlen(s1);
		while (end > init && ft_check_letter(s1[end -1], set))
				end--;
		length = end - init;
		return (ft_substr(s1, init, length));
	}
	return (NULL);
}
