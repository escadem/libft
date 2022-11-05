/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:58:59 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 20:31:25 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	// if (!s1 || !s2)
	// 	return (0);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i ++;
	}
	return (0);
}

// int main()
// {
//     char *X = "Techie";
//     char *Y = "Tech"; 
//     int ret = ft_strncmp(X, Y, 15);
//     if (ret > 0) {
//         printf("%s", "X is greater than Y");
//     }
//     else if (ret < 0) {
//         printf("%s", "X is less than Y");
//     }
//     else {
//         printf("%s", "X is equal to Y");
//     }
//     return 0;
// }