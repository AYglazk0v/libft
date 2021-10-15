/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:27:42 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:27:44 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pt_s;

	pt_s = malloc(count * size);
	if (pt_s == NULL)
		return ((void *)0);
	ft_bzero(pt_s, count * size);
	return (pt_s);
}
