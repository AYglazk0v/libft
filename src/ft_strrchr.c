/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:34:40 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:34:41 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*str_tmp;

	str_tmp = (void *)0;
	while (*string)
	{
		if (*string == (char)c)
			str_tmp = (char *)string;
		string++;
	}
	if (str_tmp == (void *)0)
		return ((void *)0);
	return (str_tmp);
}
