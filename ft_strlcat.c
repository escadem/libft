/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:02:20 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 21:01:50 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	if ((!dst || !src) && !dstsize)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	while (i < dstsize - dst_len - 1 && src[i])
	{
		if (src[i] != '\0')
			dst[i + dst_len] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

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
// 	char dst1[30] = "01234567890123456789";
// 	char str1[] = "ABCDEFGH";
// 	char dst2[30] = "01234567890123456789";
// 	char str2[] = "ABCDEFGH";
// 	int dstsize = 23;
// 	int res1 = 0; 
// 	int res2 = 0;
// 	printf("dst_len: %zu\n", ft_strlen(dst1));
// 	printf("src_len: %zu\n", ft_strlen(str1));
// 	printf("dst1: %s\n", dst1);
// 	res1 = strlcat(dst1, str1, dstsize);
// 	printf("res1: %d\n", res1);
// 	printf("dst1: %s\n", dst1);
// 	printf("dst2: %s\n", dst2);
// 	res2 = ft_strlcat(dst2, str2, dstsize);
// 	printf("res2: %d\n", res2);
// 	printf("dst2: %s\n", dst2);
// }