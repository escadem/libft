/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:44:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/29 11:56:43 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

