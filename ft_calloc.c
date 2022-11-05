/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:25:16 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 21:03:58 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_bzero(void *s, size_t n)
// {
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		*(unsigned char *)(s + i) = (unsigned char) 0;
// 		i ++;
// 	}
// 	return (s);
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	// if (!count || !size)
	// 	return (NULL);
	if (count > SIZE_MAX / size)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	return (ft_bzero(p, count * size));
}

// #include <stdio.h>
// //#include <malloc.h>

// int main( void )
// {
//    long *buffer;

//    buffer = (long *)calloc( 40, sizeof( long ) );
//    if( buffer != NULL )
//       printf( "Allocated 40 long integers\n" );
//    else
//       printf( "Can't allocate memory\n" );
//    free( buffer );

//     long *buffer2;

//    buffer2 = (long *)ft_calloc( 40, sizeof( long ) );
//    if( buffer2 != NULL )
//       printf( "Allocated 40 long integers\n" );
//    else
//       printf( "Can't allocate memory\n" );
//    free( buffer2 );
// }