/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:30:41 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/26 20:34:53 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i);
}
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i --;
	}
	return (NULL);
}

/*
int main(void)
{
	char *c;
	char *pc;
	int i = 0;

	c = "La casa de la abuela";
	pc = ft_strrchr(c, 'd');
	while (pc[i])
	{
		printf("%c", pc[i]);
		i ++;
	}
	printf("\n");
}
*/