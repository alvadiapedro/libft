#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*new;

	new = (unsigned char *)str;

	i = 0;
	while (i < n && new[i] != (char)c)
		i++;
	if ((char)c == new[i])
		return (&new[i]);
	return (0);
}
