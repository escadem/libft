/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:02:54 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/24 13:45:52 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

/*
int main(void)
{
	char *cadena;
	cadena = "Prueba";

	printf("La longitud de la cadena es %d\n", ft_strlen(cadena));
	return (0);
}
*/