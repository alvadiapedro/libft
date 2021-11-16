#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = ft_nbrlen(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (n > 0)
	{
		str[len] = n % 10 + '0';
		len--;
		n /= 10;
	}
	if (((float)n) < 0)
		str[len] = '-';
	return (str);
	
}
