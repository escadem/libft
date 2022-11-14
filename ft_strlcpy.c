/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:22:21 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/14 18:29:10 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (src[counter])
		counter ++;
	if (dstsize == 0)
		return (counter);
	while (i < counter && i < dstsize - 1)
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (counter);
}
