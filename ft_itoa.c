#include "libft.h"

char	*ft_putnbr(int nb)
{
	int	i;
	unsigned char	*str;

	i = 0;
	if (nb == -2147483648)
		str = "-2147483648";
	else if (nb < 0)
	{
		str[i] = '-';
		i++;
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		str[i++] = nb % 10 + '0';
	}
	return (str);
}

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

	if (!(str = malloc(sizeof(char) * (ft_nbrlen(n) + 1))))
		return (NULL);
	str = ft_putnbr(n);
	return (str);
	
}
