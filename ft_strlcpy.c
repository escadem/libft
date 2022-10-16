/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:22:21 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/16 09:43:23 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	if (!dst || !src)
		return (0);
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

// #include <string.h>
// int main(void)
// {
// 	char dst1[30] = "casa";
// 	char str1[] = "SourceSour";
// 	char dst2[30] = "casa";
// 	char str2[] = "SourceSour";
// 	int dstsize = 2;
// 	int res1 = 0; 
// 	int res2 = 0;
// 	printf("dst1: %s\n", dst1);
// 	res1 = strlcpy(dst1, str1, dstsize);
// 	printf("res1: %d\n", res1);
// 	printf("dst1: %s\n", dst1);
// 	printf("dst2: %s\n", dst2);
// 	res2 = ft_strlcpy(dst2, str2, dstsize);
// 	printf("res2: %d\n", res2);
// 	printf("dst2: %s\n", dst2);
// }