#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = (char *)malloc(sizeof (char) * len);
	ft_strlcpy(sub, &s[start], len);
	if (!sub)
		return (0);
	return (sub);
}
