/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:33:16 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:38:13 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	int			i;

	i = -1;
	if (!s || !f)
		return ((void *)0);
	str = ft_strdup(s);
	if (str == NULL)
		return ((void *)0);
	while (str[++i])
		str[i] = (*f)(i, str[i]);
	return (str);
}
