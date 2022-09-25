/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:44:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/24 14:21:41 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b)
		return (NULL);

	while (b[i] != '\0')
	{
		s[i] = c;
		i++;
	}
	return (&s);
}
/*
int	main(void)
{
	char *string;
	string = "cadena";
	print("la cadena original es: \n\t%s\n", string);
	ft_memset(*string, 'a', 2);
	print("la cadena original es: \n\t%s\n", string);
	return (0);
}
*/