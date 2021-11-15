#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *x;

	while (*lst)
	{
		x = (*lst)->next;
		ft_delone(*lst, del);
		*lst = aux;
	}
	*lst = '\0';
}
