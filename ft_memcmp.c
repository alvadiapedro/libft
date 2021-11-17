/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:05:22 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 13:22:38 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
			&& i < n - 1 && ((unsigned char *)s1)[i] != '\0'
			&& ((unsigned char *)s2)[i] != '\0')
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
