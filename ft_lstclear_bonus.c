#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pt;

	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		pt = *lst;
		*lst = pt->next;
		free(pt);
	}
	*lst = ((void *)0);
}
