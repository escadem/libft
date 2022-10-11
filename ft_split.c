/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:59 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/11 13:09:37 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}

static int	ft_count_c(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter ++;
		i ++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	*vect;

	vect = ft_calloc(ft_strlen(s), sizeof(int));
	if (vect)
		return (NULL);
	vect = ft_
}

// int main(void)
// {
// 	char *s1 = "1A2B3C4A5E6G7D8F9HHH0A";
// 	char c = "ABCDEFGH";
// 	char **s3;
// 	s3 = ft_strtrim(s1, s2);
// 	printf("s3: %s\n", s3);
// }