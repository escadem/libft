/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:39:51 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/16 13:11:18 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	value;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + ((int) str[i] - 48);
		i ++;
	}
	return (sign * value);
}

// int main(void)
// {
//     char str[] = "  -2147483648";
//     char str1[] = "  -0";
//     char str2[] = "  +-00235";
//     printf("value = %d\n", ft_atoi(str));
//     printf("value = %d\n", ft_atoi(str1));
//     printf("value = %d\n", ft_atoi(str2));
//     return (0);
// }