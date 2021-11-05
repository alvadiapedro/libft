#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;
	char	*new;

	n = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (n && ft_strchr(set, s1[n]))
		n--;
	new = ft_substr(s1, 0, n + 1);
	return (new);
}
