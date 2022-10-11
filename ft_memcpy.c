/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:54:37 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/11 15:13:14 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i ++;
	}
	return (dst);
}

// mirar las direcciones de memoria de las variables
// comprobar el funcionamiento correcto de memcpy
// delimitar ft_memcpy con \0

// #include <string.h>

// size_t	ft_strlen(const char *s) 
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i ++;
// 	return (i);
// }

// int main(void)
// {
// 	char src1[] = "CaraCola";
// 	char dst1[] = "hola";
// 	char src2[] = "CaraCola";
// 	char dst2[] = "hola";
// 	size_t n = 5;
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
