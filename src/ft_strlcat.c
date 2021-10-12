/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:32:54 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 20:57:18 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	pt_dst_src;

	size_dst = 0;
	while (dst[size_dst] && (size_dst < size))
		size_dst++;
	pt_dst_src = size_dst;
	while (src[size_dst - pt_dst_src] && size_dst + 1 < size)
	{
		dst[size_dst] = src[size_dst - pt_dst_src];
		size_dst++;
	}
	if (size_dst < size)
		dst[size_dst] = '\0';
	return (pt_dst_src + (size_t)ft_strlen((char *)src));
}
