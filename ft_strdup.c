/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:10:49 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 13:10:52 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof (*src) + (i + 1));
	ft_strcpy(dest, src);
	return (dest);
}
