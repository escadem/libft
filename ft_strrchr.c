/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:30:41 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/14 18:30:22 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			*p_chr;
	unsigned char	chr;

	chr = (unsigned char) c;
	str = (char *) s;
	p_chr = NULL;
	while (*str)
	{
		if (*str == chr)
			p_chr = str;
		str++;
	}
	if (chr == '\0')
		p_chr = (char *)(s + ft_strlen(s));
	return (p_chr);
}
