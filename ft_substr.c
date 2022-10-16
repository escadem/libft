/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:25:50 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/16 22:59:50 by eescat-l         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		substr = (char *) malloc(1 * sizeof(char));
		if (substr == NULL)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL )
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// int main(void)
// {
// 	char *s1 = "12345Hola";
// 	//
// 	char *s2 = ft_substr(s1, 5, 4);
// 	printf("s2: %s\n", s2);
// 	//
// 	char *s3 = ft_substr(s1, 2, 1);
// 	printf("s3: %s\n", s3);
// 	//
// 	char *s4 = ft_substr(s1, 0, 10);
// 	printf("s4: %s\n", s4);
// 	//
// 	char *s5 = "123456789";
// 	//
// 	char *s6 = ft_substr(s5, 8, 0);
// 	printf("s6: %s\n", s6);
// 	//
// 	char *s7 = ft_substr(s5, 0, 3);
// 	printf("s7: %s\n", s7);
// 	//
// 	char *s8 = ft_substr(s5, 1, 5);
// 	printf("s8: %s\n", s8);
// }
