/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:29:08 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/13 18:33:35 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int2char(int n, char *str, int len)
{
	int	k;

	k = 0;
	if (n < 0)
	{
		str[0] = '-';
		k = 1;
	}
	str[len--] = '\0';
	while (len >= k)
	{
		if (n < 0)
			str[len--] = (n % 10) * (-1) + '0';
		else
			str[len--] = (n % 10) + '0';
		n /= 10;
	}
}

static int	ft_size_int(int n)
{
	int	size;

	size = 1;
	if (n <= 0)
	{
		size++;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;

	len = ft_size_int(n) - 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return ((void *)0);
	ft_int2char(n, str, len);
	return (str);
}
