#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*alloc;

	alloc = malloc(n * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, count * size);
	return(alloc);
}
