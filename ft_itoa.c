/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:58:39 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/14 18:25:57 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_itoa_lenght(int n)
{
	unsigned int		length;
	unsigned int		nr;

	length = 0;
	if (n < 0)
	{
		length += 1;
		nr = n * (-1);
	}
	else
		nr = n;
	while ((nr / 10) >= 1)
	{
		nr /= 10;
		length++;
	}
	return (length + 1);
}

char	*ft_itoa(int n)
{
	unsigned int		length;
	char				*str;
	unsigned int		nr;

	length = ft_itoa_lenght(n);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		if (n < 0)
			nr = n * (-1);
			str[0] = '-';
		if (n > 0)
			nr = n;
		while (nr > 0)
		{
			str[--length] = (nr % 10) + '0';
			nr /= 10;
		}
	}
	return (str);
}
