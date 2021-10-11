/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaggana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:28:48 by gtaggana          #+#    #+#             */
/*   Updated: 2021/10/11 10:28:51 by gtaggana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c == '\f' || c == '\n' || c == '\r'
			|| c == '\t' || c == '\v' || c == ' '))
		return (1);
	return (0);
}
