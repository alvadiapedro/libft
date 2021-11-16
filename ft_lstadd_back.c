#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	if (*lst)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	else
		*lst = new;
}
