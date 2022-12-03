/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eescat-l <eescat-l@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:59 by eescat-l          #+#    #+#             */
/*   Updated: 2022/12/03 09:58:16 by eescat-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (s[i] == c && len)
		{
			matrix[j] = ft_substr(s, i - len, len);
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
	matrix = (char **)malloc((rows + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	ft_fill_matrix(matrix, s, c);
	matrix[rows] = NULL;
	return (matrix);
}
