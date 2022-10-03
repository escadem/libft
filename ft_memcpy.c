/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:54:37 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/03 07:40:35 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (*(char *)(src + i) != '\0' && i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i ++;
	}
	return (dst);
}

// #include <string.h>
// int main(void)
// {
// 	char src1[] = "CaraCola";
// 	char dst1[] = "hola";
// 	char src2[] = "CaraCola";
// 	char dst2[] = "hola";
// 	size_t n = 6;
// 	printf("strlen src= %zu\n", ft_strlen(src1));
// 	printf("strlen dst= %zu\n", ft_strlen(dst1));
// 	char *res1;
// 	res1= memcpy(dst1, src1, n);
// 	printf("memcpy res1: %s\n", res1);
// 	printf("memcpy des1: %s\n", dst1);
// 	char *res2;
// 	res2 = ft_memcpy(dst2, src2, n);
// 	printf("memcpy res2: %s\n", res2);
// 	printf("memcpy des2: %s\n", dst2);
// }
