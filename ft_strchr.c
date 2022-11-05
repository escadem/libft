/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:34:54 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 20:30:25 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	chr;

	chr = (unsigned char) c;
	str = (char *) s;
	// if (!s)
	// 	return (NULL);
	while (*str != '\0')
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (chr == '\0')
		return (str);
	return (NULL);
}

// int main(void)
// {
// 	char *c;
// 	char *pc;

// 	c = "La casa de la abuela";
// 	pc = ft_strchr(c, 'l');
// 	if (!pc)
// 		printf("No se han encontrado coincidencias\n");
// 	else
// 		printf("%s", pc);
// }
