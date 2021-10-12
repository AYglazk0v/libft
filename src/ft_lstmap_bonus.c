/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:30:21 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/12 03:46:38 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cp_lst;

	while (lst && f)
	{
		cp_lst = ft_lstnew(f(lst->content));
		if (cp_lst == NULL)
		{
			ft_lstclear(&cp_lst, del);
			return ((void *)0);
		}
		lst = lst->next;
		ft_lstadd_back(&cp_lst, cp_lst);
	}
	return (cp_lst);
}
