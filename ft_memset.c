/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:44:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/26 20:55:32 by eescat-l         ###   ########.fr       */
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

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i ++;
	}
	return (b);
}

int	main(void)
{
	char *str;

	str = "cadena";
	printf("posicion str: %p\n", str);
	printf("la cadena original es: \n\t%s\n", str);
	ft_memset(str, 'a', 2 * sizeof (char));
	printf("la cadena copia es: \n\t%s\n", str);
	return (0);
}
