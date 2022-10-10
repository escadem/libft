/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:23:35 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/10 18:26:41 by eescat-l         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	lens1;
	size_t	lens2;
	size_t	i;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstr = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (newstr == NULL )
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		newstr[i] = s1[i];
		i ++;
	}
	while (i < lens1 + lens2)
	{
		newstr[i] = s2[i - lens1];
		i ++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// int main(void)
// {
// 	char *s1 = "1234567890";
// 	char *s2 = "ABCDEFGH";
// 	char *s3;
// 	s3 = ft_strjoin(s1, s2);
// 	printf("s3: %s\n", s3);
// }
