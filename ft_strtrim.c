/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:01:17 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/16 23:09:34 by eescat-l         ###   ########.fr       */
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

static int	ft_chletter(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;
	int		count;

	i = 0;
	count = 0;
	len = ft_strlen(s1);
	str = (char *) malloc (len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_chletter(s1[i], set) == 0)
		{
			str[count] = s1[i];
			count ++;
		}
		i ++;
	}
	str[count] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *s1 = "1A2B3C4A5E6G7D8F9HHH0A";
// 	char *s2 = "";
// 	char *s3;
// 	s3 = ft_strtrim(s1, s2);
// 	printf("s3: %s\n", s3);
// }
