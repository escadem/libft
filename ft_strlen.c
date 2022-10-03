/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:02:54 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/03 07:42:08 by eescat-l         ###   ########.fr       */
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

// int main(void)
// {
// 	char *cadena;
// 	cadena = "Prueba";

// 	printf("La longitud de la cadena es %d\n", ft_strlen(cadena));
// 	return (0);
// }