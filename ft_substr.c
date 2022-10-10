/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:25:50 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/10 18:25:59 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(len * sizeof(char));
	if (substr == NULL )
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		substr[i] = s[i + start];
		i ++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *s1 = "12345Hola";
// 	char *s2;
// 	s2 = ft_substr(s1, 5, 10);
// 	printf("s2: %s\n", s2);
// }