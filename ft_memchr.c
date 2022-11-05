/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 07:29:48 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 19:25:06 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *str, int ch, size_t n )
{
	size_t	i;

	// if (!str)
	// 	return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)ch)
			return ((void *)(str + i));
		else
			i ++;
	}
	return (NULL);
}

// #include <string.h>
// int main(void)
// {
// 	//initializing character pointer
// 	const char *str = "Learn C from trytoprogram.com";
// 	const char ch = 'C';
// 	//displaying str
// 	printf("str = %s\n\n", str);
// 	printf("Remaining string after '%c': %s\n", ch,
// 			(char *) ft_memchr( str, ch, 25));
// 	return (0);
// }
