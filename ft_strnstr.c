/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:17:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/09 19:11:57 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i ++;
// 	return (i);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (i < len - ft_strlen(needle))
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
				j ++;
			else
				break ;
		}
		if (j == ft_strlen(needle))
			return ((char *)(haystack + i));
		i ++;
	}
	return (NULL);
}

// #include <string.h>
// int main(void)
// {
// 	char dst1[30] = "bla ble bli";
// 	char str1[] = "ble";
// 	char dst2[30] = "bla ble bli";
// 	char str2[] = "ble";
// 	int dstsize = 12;
// 	char *res1 = strnstr(dst1, str1, dstsize); 
// 	char *res2 = ft_strnstr(dst1, str1, dstsize); 
// 	printf("%s , %s , %d\n", dst1, str1, dstsize);
// 	printf("res1: %s\n", res1);
// 	printf("%s , %s , %d\n", dst2, str2, dstsize);
// 	printf("res2: %s\n", res2);
// }