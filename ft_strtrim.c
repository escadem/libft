/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:01:17 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/21 21:21:12 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_letter(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	count;
	size_t	pos;

	i = 0;
	count = 0;
	pos = 0;
	while (*(s1 + count) && ft_check_letter(*(s1 + count), set))
		count++;
	str = (char *) malloc ((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_check_letter(s1[i], set) == 0)
		{
			str[pos] = s1[i];
			pos ++;
		}
		i ++;
	}
	str[pos] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *s1 = "1A2B3C4A5E6G7D8F9HHH0A";
// 	char *s2 = "ABCDEFGH";
// 	char *s3;
// 	s3 = ft_strtrim(s1, s2);
// 	printf("s3: %s\n", s3);
// }
