#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)str;
	while (len > 0)
	{
		ptr = (unsigned char)c;
		*ptr++;
		len--;
	}
	return (str);
}
