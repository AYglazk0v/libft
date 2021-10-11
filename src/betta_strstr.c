/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   betta_strstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:26:35 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:26:38 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char	*haystack, const char *needle)
{
	int	i;
	int	l_haystack;

	l_haystack = ft_strlen(haystack);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		if (*haystack == needle[0])
		{
			while (*needle && needle[i] == haystack[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
			else if ((l_haystack - i) < 0)
				return ((void *)0);
			haystack += i - 1;
			l_haystack -= i - 1;
		}
		haystack++;
	}
	return ((void *)0);
}
