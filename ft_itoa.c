/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:58:39 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/03 19:43:36 by eescat-l         ###   ########.fr       */
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

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*p;

// 	if (!count || !size)
// 		return (NULL);
// 	if (count > SIZE_MAX / size)
// 		return (NULL);
// 	p = (void *)malloc(count * size);
// 	if (p == NULL )
// 		return (NULL);
// 	return (ft_bzero(p, count * size));
// }

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

static unsigned int	ft_itoa_lenght(int n)
{
	unsigned int		length;
	unsigned int		nr;
	int					sign;

	sign = 0;
	length = 0;
	if (n < 0)
	{
		sign = 1;
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

// void test(int n)
// {
// 	char	*str;
// 	str = ft_itoa(n);
// 	printf("str = \"%s\"\n", str);
// }

// // int main(void)
// // {
// // 	test(12345);
// // 	test(-12345);
// // 	test(1);
// // 	test(-1);
// // 	test(0);
// // 	test(-2147483648);
// // 	test(2147483647);
// // }