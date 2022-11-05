/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:17:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/03 17:29:10 by eescat-l         ###   ########.fr       */
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

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	// if (!s1 || !s2)
// 	// 	return (0);
// 	i = 0;
// 	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
// 	{
// 		if ((unsigned char)s1[i] > (unsigned char)s2[i])
// 			return (1);
// 		if ((unsigned char)s1[i] < (unsigned char)s2[i])
// 			return (-1);
// 		i ++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	// size_t	i;
	// size_t	j;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	// if (!haystack || *haystack == 0)
	// 	return (NULL);
	//i = 0;
	if (!len)
		return (NULL);
	while (*haystack && needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <string.h>
// int main(void)
// {
// 	char dst1[30] = "bla ble bli";
// 	char str1[] = "bli";
// 	char dst2[30] = "bla ble bli";
// 	char str2[] = "bli";
// 	int dstsize = 10;
// 	char *res1 = strnstr(dst1, str1, dstsize); 
// 	char *res2 = ft_strnstr(dst2, str2, dstsize); 
// 	printf("%s , %s , %d\n", dst1, str1, dstsize);
// 	printf("res1: %s\n", res1);
// 	printf("%s , %s , %d\n", dst2, str2, dstsize);
// 	printf("res2: %s\n", res2);
// 	return (0);
// }
