/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:12:34 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 14:37:08 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*new;

	new = NULL;
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < n)
	{
		new[i] = dest[i];
		i++;
	}
	while (src[j] != '\0' && i < n)
	{
		new[i] = src[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (i);
}
