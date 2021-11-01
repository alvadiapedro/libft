#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i; 
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (n != 0)
	{
		while ((src[i] != '\0') && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);	
}
