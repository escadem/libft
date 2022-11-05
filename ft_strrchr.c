/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:30:41 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 20:30:53 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i ++;
// 	return (i);
// }

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			*p_chr;
	unsigned char	chr;

	chr = (unsigned char) c;
	str = (char *) s;
	p_chr = NULL;
	// if (!s)
	// 	return (p_chr);
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

// int main(void)
// {
// 	char *c;
// 	char *pc;

// 	c = "La casa de la abuela";
// 	pc = ft_strrchr(c, 'l');
// 	if (!pc)
// 		printf("No se han encontrado coincidencias\n");
// 	else
// 		printf("%s\n", pc);
// }
