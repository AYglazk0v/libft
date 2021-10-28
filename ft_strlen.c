/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:36:31 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 19:33:28 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char	*s)
{
	int	n;

	n = 0;
	while (*(s + n))
		n++;
	return (n);
}