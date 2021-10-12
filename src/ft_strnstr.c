/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:34:20 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/12 03:38:14 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l_haystack;

	if (!len || !(*haystack))
		return ((void *)0);
	if (!*needle)
		return ((char *)haystack);
	l_haystack = ft_strlen(haystack);
	while (l_haystack > len && *haystack)
	{
		i = 0;
		if (*haystack == needle[0])
		{
			while (*needle && needle[i] == haystack[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
			haystack += (i - 1);
			l_haystack -= (i - 2);
		}
		haystack++;
	}
	return ((void *)0);
}
