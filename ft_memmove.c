/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:14:57 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/10 11:27:36 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst)
		return (NULL);
	if ((dst + len) > src)
	{
		i = 0;
		while (i < len)
		{
			*(char *)dst ++ = *(char *)src ++;
			i ++;
		}
	}
	if ((dst + len) < src)
	{
		i = len;
		while (i)
		{
			*(char *)(dst + len - i) = *(char *)(src + len - i);
			i --;
		}
	}
	*(char *)(dst + len) = '\0';
	return (dst);
}

// #include <string.h>
// int main()
// {
// 	//MEMMOVE
//     char str11[100] = "Geeks"; // Array of size 100
//     char str21[] = "QuizQuizQuiz"; // Array of size 5
// 	//
// 	printf("direccion de memoria str11: %p\n", str11);
// 	printf("direccion de memoria str21: %p\n", str21);
// 	//
// 	puts("str1 before memmove ");
//     puts(str11);
// 	/* Copies contents of str2 to sr1 */
//     memmove(str11, str21, 10);
//     puts("str1 after memmove ");
//     puts(str11);
// 	puts("");
// 	//
// 	//FT_MEMMOVE
// 	char str12[100] = "Geeks"; // Array of size 100
//     char str22[] = "QuizQuizQuiz"; // Array of size 5
// 	//
// 	printf("direccion de memoria str11: %p\n", str12);
// 	printf("direccion de memoria str21: %p\n", str22);
// 	//
// 	puts("str1 before memmove ");
//     puts(str12);
//     /* Copies contents of str2 to sr1 */
//     ft_memmove(str12, str22, 10);
//     puts("str1 after memmove ");
//     puts(str12);
//     return 0;
// }