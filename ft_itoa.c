/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:59:58 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/18 17:11:25 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;
	unsigned int	nbr;

	i = 0;
	nbr = n;
	if (n < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char *ft_writenbr(char *str, unsigned int n, int len)
{
	while (n > 0)
	{
		str[len] = 48 + (n % 10);
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str = ft_writenbr(str, n, len);
	return (str);
}
