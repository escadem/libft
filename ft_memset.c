/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:44:40 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/02 20:05:10 by eescat-l         ###   ########.fr       */
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

// int main(void)
// {
// 	char str[] = "Hola que tal";
// 	printf("cadena: %s\n", str);
// 	ft_memset(str, 'x', 5);
// 	printf("cadena: %s\n", str);

// 	int i;
// 	int n;
// 	int array[5] = {12, 45, 75, 98, 01};

// 	i = 0;
// 	printf("[");
// 	while (i < 5)
// 	{
// 		printf("%i ", array[i]);
// 		i ++;
// 	}
// 	printf("]\n");
// 	i = 0;
// 	n = 4;
// 	ft_memset(array, 'x', n);
// 	printf("[");
// 	while (i < 5)
// 	{
// 		printf("%i ", array[i]);
// 		i ++;
// 	}
// 	printf("]\n");
// }