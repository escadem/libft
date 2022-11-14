/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:14:57 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/14 18:27:05 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (p_dst > p_src && p_dst - p_src < (int)len)
	{
		i = len;
		while (i--)
			*(p_dst + i) = *(p_src + i);
		return (dst);
	}
	else
	{
		i = -1;
		while (++i < len)
		{
				*(p_dst + i) = *(p_src + i);
		}	
	}
	return (dst);
}
