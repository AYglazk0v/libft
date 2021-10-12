/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:32:15 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 19:17:41 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	char	*str_tmp;

	str_tmp = (char *)string;
	while (*str_tmp)
	{
		if (*str_tmp == (char) symbol)
			return ((char *) str_tmp);
		str_tmp++;
	}
	if (*str_tmp == (char) symbol)
		return ((char *) str_tmp);
	return ((void *)0);
}
