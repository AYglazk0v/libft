/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:33:01 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 22:23:43 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t	size)
{
	size_t	i;

	i = 0;
	while (*(src + i) && (i + 1 < size))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (i > 0 || (!*(src + i)))
		*(dst + i) = '\0';
	return ((size_t)ft_strlen(src));
}
