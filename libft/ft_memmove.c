#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((size_t)dest > (size_t)src)
	{
		while (n)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n--;
		}
	}
	else
	{
		while (i  < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
