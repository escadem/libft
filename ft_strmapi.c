/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:04:49 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/02 21:12:49 by eescat-l         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	char			*str;

	pos = 0;
	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		str[pos] = f(pos, *s);
		pos++;
		s++;
	}
	str[pos] = '\0';
	return (str);
}

// char	f(unsigned int n, char c)
// {
// 	char	conv;

// 	n = 0;
// 	conv = c + '0';
// 	return (conv);
// }

// void test(char *s)
// {
// 	printf("str = %s\n", ft_strmapi(s, *f));
// }

// int main(void)
// {
// 	test("casa");
// 	test("0123456789");
// }