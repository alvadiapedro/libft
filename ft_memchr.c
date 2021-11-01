#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str[i] != (char)c)
		i++;
	if ((char)c == str[i])
		return ((char *)&str[i]);
	return (0);
}
