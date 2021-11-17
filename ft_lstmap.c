/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:03:30 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 13:57:51 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	(void)del;
	if (!lst)
		return (0);
	while (lst)
	{
		new->content = (*f)(lst->content);
		if (!new->content)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	new->content = NULL;
	return (new);
}
