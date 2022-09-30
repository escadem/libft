/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:34:54 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/30 18:52:04 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *c;
// 	char *pc;
// 	int i = 0;

// 	c = "La casa de la abuela";
// 	pc = ft_strchr(c, 'b');
// 	while (pc[i])
// 	{
// 		printf("%c", pc[i]);
// 		i ++;
// 	}
// 	printf("\n");
// }
