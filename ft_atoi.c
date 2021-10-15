/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:26:48 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:26:50 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long unsigned int	num;
	int					sign;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
		if ((num >= __LONG_MAX__) && sign > 0)
			return (-1);
		if ((num > __LONG_MAX__) && sign < 0)
			return (0);
	}
	return (sign * (int)num);
}
