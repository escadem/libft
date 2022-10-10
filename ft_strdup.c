/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:23:51 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/10 18:24:16 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (*(s1 + len))
		len ++;
	s2 = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		s2[i] = s1[i];
		i ++;
	}
	s2[i] = '\0';
	return (s2);
}

// int main(void)
// {
// 	char s1[] = "origen";
// 	char *s2;
// 	s2 = ft_strdup(s1);
// 	printf("s2: %s\n", s2);
// }