/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:14:57 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/03 11:52:03 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	
	if (!dst && !src)
		return (NULL);
	// if (p_dst == p_src || len == 0)
	// 	return (dst);
	if (p_dst > p_src && p_dst - p_src < (int)len)
	{
		i = len;
		while (i--)
			*(p_dst + i) = *(p_src + i);
		return (dst);
	}
	else
	{
		i = -1;
		while (++i < len)
		{
				*(p_dst + i) = *(p_src + i);
				//i++;
		}	
	}
	return (dst);
}

// #include <string.h>
// int main()
// {
// 	//MEMMOVE
//     char str21[] = "QuizQuizQuiz"; // Array of size 5
// 	char str11[100] = "Geeks"; // Array of size 100
//     //char str21[] = "QuizQuizQuiz"; // Array of size 5

// 	int n = 10; 
// 	//
// 	printf("direccion de memoria str11: %p\n", str11);
// 	printf("direccion de memoria str21: %p\n", str21);
// 	//
// 	puts("str1 before memmove ");
//     puts(str11);
// 	/* Copies contents of str2 to sr1 */
//     memmove(str21, str11, n);
//     puts("str1 after memmove ");
//     puts(str11);
// 	puts("");
	
// 	//FT_MEMMOVE
// 	char str22[] = "QuizQuizQuiz"; // Array of size 5
// 	char str12[100] = "Geeks"; // Array of size 100
//     //char str22[] = "QuizQuizQuiz"; // Array of size 5
// 	//
// 	printf("direccion de memoria str11: %p\n", str12);
// 	printf("direccion de memoria str21: %p\n", str22);
// 	//
// 	puts("str1 before memmove ");
//     puts(str12);
//     /* Copies contents of str2 to sr1 */
//     ft_memmove(str22, str12, n);
//     puts("str1 after memmove ");
//     puts(str12);
//     return 0;
// }
