/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:16:30 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/18 16:46:04 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int	i;

	i = 0;
	sub = malloc(sizeof(char) * len);
	while (*s && i < start)
	{
		i++;
		s++;
	}
	i = 0;
	while (*s && i < len)
	{
		sub[i] = *s;
		s++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
