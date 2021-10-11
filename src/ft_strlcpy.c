/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:33:01 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:33:02 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t	size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
