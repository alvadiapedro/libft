#include "libft.h"
/*
int	word_count(const char *str, char c)
{
	size_t	i;
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

char	alloc_word(char *str)
{
	
}	

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;

	array = malloc(sizeof(char *) * (word_count(s) + 1));
	i = 0;
	while (s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			array[i] = alloc_word(s);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}*/
