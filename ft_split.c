/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:09:38 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 13:10:10 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *str, char c)
{
	size_t			i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;

	array = malloc(sizeof(char *) * (word_count(s, c) + 1));
	i = 0;
	while (s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			j = 0;
			while (*s && *s != c)
			{
				array[i][j] = s[0];
				j++;
				s++;
			}
			array[i][j] = '\0';
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}
