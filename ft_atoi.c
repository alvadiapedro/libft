#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	nb;

	i = 0;
	x = 1;
	nb = 0;
	if (str[i] == '-')
		x *= -1;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (x * nb);
}
