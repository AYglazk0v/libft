/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:30:21 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/12 06:49:30 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_e;

	if (!f && !del)
		return ((void *)0);
	new_l = ((void *)0);
	new_e = ((void *)0);
	while (lst)
	{
		new_e = ft_lstnew(f(lst->content));
		if (new_e == NULL)
		{
			ft_lstclear(&new_l, del);
			return ((void *)0);
		}
		ft_lstadd_back(&new_l, new_e);
		lst = lst->next;
	}
	return (new_l);
}
