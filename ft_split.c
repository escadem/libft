/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:59 by eescat-l          #+#    #+#             */
/*   Updated: 2022/11/05 00:19:29 by eescat-l         ###   ########.fr       */
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

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	counter;

// 	counter = 0;
// 	i = 0;
// 	// if (!dst || !src)
// 	// 	return (0);
// 	while (src[counter])
// 		counter ++;
// 	if (dstsize == 0)
// 		return (counter);
// 	while (i < counter && i < dstsize - 1)
// 	{
// 		if (src[i] != '\0')
// 			dst[i] = src[i];
// 		i ++;
// 	}
// 	dst[i] = '\0';
// 	return (counter);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;

// 	if (!s)
// 		return (NULL);
// 	if (start > ft_strlen(s))
// 	{
// 		substr = (char *) malloc(1 * sizeof(char));
// 		if (substr == NULL)
// 			return (NULL);
// 		*substr = '\0';
// 		return (substr);
// 	}
// 	if (ft_strlen(s + start) < len)
// 		len = ft_strlen(s + start);
// 	substr = (char *)malloc((len + 1) * sizeof(char));
// 	if (substr == NULL )
// 		return (NULL);
// 	ft_strlcpy(substr, s + start, len + 1);
// 	return (substr);
// }

size_t	ft_count_rows(char const *s, char c)
{
	size_t	rows;
	int		i;
	int		index;

	rows = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c && index == 0)
		{
			index = 1;
			rows++;
		}
		if (s[i] == c)
			index = 0;
		i++;
	}
	return (rows);
}

char	*ft_free(char **matrix, size_t rows)
{
	size_t	i;

	i = 0;
	while (i < rows)
	{
		free(matrix[rows]);
		i++;
	}
	free(matrix);
	return (NULL);
}

// void	ft_create_matrix(char **matrix, char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	len;

// 	i = 0;
// 	j = 0;
// 	len = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 				len++;
// // printf("len = %zu\n", len);
// 		if (s[i] == c)
// 		{
// 			if (len)
// 			{
// // printf("\tj = %zu\n",j);
// 				matrix[j] = (char *)malloc ((len+1) * sizeof(char));
// 				j++;
// 				len=0;
// 			}
// 		}
// 		i++;
// 	}
// 	printf("i = %zu, j = %zu, len = %zu\n", i, j, len);
// }

void	ft_fill_matrix(char **matrix, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
// printf("len = %zu\n", len);
// printf("s[i] = %c\n", s[i]);
// printf("s[i+1] = %c\n", s[i+1]);
		if (s[i] == c && len)
		{
			matrix[j] = ft_substr(s, i - len, len);
// printf("matrix[%zu] = %s\n", j, matrix[j]);
			j++;
			len = 0;
		}
		i++;
	}
	if (!s[i] && len)
		matrix[j] = ft_substr(s, i - len, len);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	rows;

	if (!s)
		return (NULL);
	rows = ft_count_rows(s, c);
// printf("rows = %zu\n", rows);
	matrix = (char **)malloc((rows + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	ft_fill_matrix(matrix, s, c);
	matrix[rows] = NULL;
	return (matrix);
}

// int main(void)
// {
// 	char *s1 = "1A2B3C4A5E6G7D8F9HHH0A";
// 	// char *s1 = "ABCD";
// 	char c = 'A';
// 	int i = 0;
// 	char **s3;

// 	s3 = ft_split(s1, c);
// // printf("ft_split OK\n");
// // printf("s[0 = %s\n", *(s3));
// 	while (s3[i])
// 	{
// 		printf ("i = %d, row = %d, s= %s\n", i, i, s3[i]);
// 		i++;
// 	}
// 	return (0);
// }
