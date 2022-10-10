/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:52:31 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/10 12:33:35 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1 && s2 && i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		if (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
			i ++;
	}
	return (0);
}

// #include <string.h>
// int main()
// {
// 	//MEMCMP
// 	char str11[100] = "QuizQui0Quiz"; // Array of size 100
// 	char str21[] = "QuizQuizQuiz"; 
// 	//
// 	printf("str11: %s\n", str11);
// 	printf("str21: %s\n", str21);
// 	/* Comparison between str2 and sr1 */
// 	printf("s1 - s2 = %d\n", memcmp(str11, str21, 10));
// 	puts("");
// 	//
// 	//FT_MEMCMP
// 	char str12[100] = "QuizQui0Quit"; // Array of size 100
// 	char str22[] = "QuizQuizQuiz"; 
// 	//
// 	printf("str12: %c\n", *str12);
// 	printf("str22: %c\n", *str22);
// 	printf("str12: %s\n", str12);
// 	printf("str22: %s\n", str22);
// 	/* Comparison between str2 and sr1 */
// 	printf("s1 - s2 = %d\n", ft_memcmp(str12, str22, 10));
// 	puts("");
// 	//
// 	return 0;
// }