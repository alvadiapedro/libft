#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = ft_strlen(needle);
	while (haystack[i] != '\0' || i < n)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, t) == 0)
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
