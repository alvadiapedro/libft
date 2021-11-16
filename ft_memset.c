#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*new;

	new = (unsigned char *)str;
	i = 0;
	while (n)
	{
		new[i] = c;
		i++;
		n--;
	}
	return (str);
}
