/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:14:57 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/09 19:47:42 by eescat-l         ###   ########.fr       */
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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst)
		return (NULL);
	if ((dst + len) > src)
		ft_memcpy(dst, src, len);
	else if ((dst + len) < src)
	{
		i = len;
		while (i < len)
		{
			*(char *)(dst + len - i) = *(char *)(src + len - i);
			i --;
		}
	}
	*(char *)(dst + len) = '\0';
	return (dst);
}

#include <string.h>
int main()
{
    char str11[] = "Geeks"; // Array of size 100
    char str21[] = "Quiz"; // Array of size 5
    puts("str1 before memmove ");
    puts(str11);
    /* Copies contents of str2 to sr1 */
    memmove(str11, str21, sizeof(str21));
    puts("\nstr1 after memmove ");
    puts(str11);
	//
	//
	char str12[] = "Geeks"; // Array of size 100
    char str22[] = "Quiz"; // Array of size 5
    puts("");
	puts("");
	puts("str1 before memmove ");
    puts(str12);
    /* Copies contents of str2 to sr1 */
    ft_memmove(str12, str22, sizeof(str22));
    puts("\nstr1 after memmove ");
    puts(str12);
    return 0;
}