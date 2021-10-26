/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:34:20 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/26 20:01:24 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;

	if (!*needle)
		return ((char *)haystack);
	if (!len || !(*haystack))
		return ((void *)0);
	i = 0;
	count = 0;
	while (i + count <= len && haystack[count])
	{
		i = 0;
		while (needle[i] && needle[i] == haystack[count + i]
			&& i + count < len)
			i++;
		if (needle[i] == '\0')
			return (&((char *)haystack)[count]);
		if (i > 1)
			count += i - 1;
		else
			count++;
	}
	return ((void *)0);
}
