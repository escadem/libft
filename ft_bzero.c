/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:59:16 by eescat-l          #+#    #+#             */
/*   Updated: 2022/09/29 07:06:41 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	//if(!s)
	//	return;
	i = 0;
	while (i < n)
	{
		*(unsigned char *) (s + i) = (unsigned char) '0';
		i ++;
	}
}

int main(void)
{
	char str[] = "Hola que tal";
	printf("cadena: %s\n", str);
	ft_bzero(str, 5);
	printf("cadena: %s\n", str);

	int i;
	int n;
	int array[5] = {12, 45, 75, 98, 01};
	
	i = 0;
	n = 3;
	printf("[");
	while (i < 5)
	{
		printf("%i ", array[i]);
		i ++;
	}
	printf("]\n");

	i = 0;
	n = 4;

	ft_bzero(array, n);
	
	printf("[");
	while (i < 5)
	{
		printf("%i ", array[i]);
		i ++;
	}
	printf("]\n");
}