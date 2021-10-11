/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:29:35 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:29:36 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
