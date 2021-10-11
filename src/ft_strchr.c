/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:32:15 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:32:16 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string)
	{
		if (*string == (char) symbol)
			return ((char *) string);
		string++;
	}
	return ((void *)0);
}
