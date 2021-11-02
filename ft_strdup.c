#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof (*src) + (i + 1));
	ft_strcpy(dest, src);
	return (dest);
}
