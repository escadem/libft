/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:59 by eescat-l          #+#    #+#             */
/*   Updated: 2022/10/30 17:15:27 by eescat-l         ###   ########.fr       */
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

static size_t	ft_count_rows(char const *s, char c)
{
	int	rows;
	int	index;

	index = 0;
	rows = 0;
	while (*s)
	{
		if (*s != c && index == 0)
		{
			index = 1;
			rows ++;
		}
		else if (*s == c)
			index = 0;
		s++;
	}
	return (rows + 1);
}

static void	ft_count_rowlen(char const *s, char c, size_t *vect)
{
	int		i;
	int		j;
	size_t	length;

	i = 0;
	j = 0;
	while (s[i + j])
	{
		length = 0;
		while (s[i + j] != c)
		{
			length ++;
			j++;
		}
		if (length != 0)
		{
			vect[i] = length + 1;
			i++;
		}
		else if (length == 0)
			j++;
	}
	vect[i] = 0;
}

static char	**ft_split_exe(size_t *vect, char **str, char const *s, char c)
{
	size_t	row;
	size_t	s_counter;
	size_t	i;

	row = 0;
	s_counter = 0;
	i = 0;
	while (vect[row])
	{
		str[row] = ft_calloc((vect[row] + 1), sizeof(char));
		s_counter = 0;
		while (s_counter < vect[row] - 1)
		{
			if (*(s + i) != c)
			{
//printf("\trow = %zu\t\ts + %zu = %c\n",row, i, *(s + i));
				str[row][s_counter] = *(s + i);
				s_counter++;
			}
			i++;
		}
		row++;
	}
	str[row] = ft_calloc(1, sizeof(char));
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	*vect;
	char	**str;
	size_t	i;

	if (*s == 0)
		return (NULL);
	i = ft_count_rows(s, c);
	vect = ft_calloc(i, sizeof(size_t));
	ft_count_rowlen(s, c, vect);
// printf("i = %zu\n", i);
// for (int j=0; j< (int)i; j++)
// printf("vect[%d] = %zu \n",j, vect[j]);
	str = ft_calloc((i + 1), sizeof(char *));
// printf("calloc str OK\n");	
	str = ft_split_exe(vect, str, s, c);
// printf("ft_split_exe OK\n");	
	free (vect);
	return (str);
}

// int main(void)
// {
// 	char *s1 = "1A2B3C4A5E6G7D8F9HHH0A";
// 	char c = 'A';
// 	int i = 0;
// 	char **s3;

// 	s3 = ft_split(s1, c);
// printf("ft_split OK\n");
// 	while (**(s3 + i))
// 	{
// 		printf ("i = %d, \nrow %d: %s\n", i, i, *(s3 + i));
// 		i++;
// 	}
// 	return (0);
// }
