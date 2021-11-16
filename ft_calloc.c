#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*alloc;

	alloc = malloc(n * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, n * size);
	return(alloc);
}
