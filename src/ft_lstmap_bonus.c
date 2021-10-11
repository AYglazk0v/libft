/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:30:21 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:30:22 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy_lst;
	t_list	*cp_lst;

	cpy_lst = ((void *)0);
	while (lst && f)
	{
		cp_lst = ft_lstnew(f(lst->content));
		if (cp_lst == NULL)
		{
			ft_lstclear(&cpy_lst, del);
			return ((void *)0);
		}
		ft_lstadd_back(&cpy_lst, cp_lst);
		lst = lst->next;
	}
	return (cpy_lst);
}
