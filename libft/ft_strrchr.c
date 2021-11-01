#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && str[i] != (char)c)
		i--;
	if ((char)c == str[i])
		return ((char *)&str[i]);
	return (0);
}
