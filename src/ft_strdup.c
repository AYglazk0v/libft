/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:32:22 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 19:34:04 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;
	int		size;

	i = 0;
	size = 0;
	size = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * (size + 1));
	if (cpy == NULL)
		return ((void *)0);
	while (size--)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
