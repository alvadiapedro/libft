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

int	ft_delimiter(char i, char c)
{
	return (i == c);
}

int	ft_word_count(const char *str, char c)
{
	size_t			i;
	int	words;

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

char	*ft_alloc_word(const char *s, char c)
{
	int	i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && !ft_delimiter(s[i], c))
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] != '\0' && !ft_delimiter(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int	i;

	if (!s)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && ft_delimiter(*s, c))
			s++;
		if (*s && !ft_delimiter(*s, c))
		{
			array[i] = ft_alloc_word(s, c);
			while (*s && !ft_delimiter(*s, c))
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}
