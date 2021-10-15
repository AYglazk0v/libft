/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:30:46 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/15 13:42:09 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!n)
		return ((void *)0);
	while (n--)
	{
		if (*((char *)s) == (char)c)
			return ((void *)s);
		s++;
	}
	return ((void *)0);
}
