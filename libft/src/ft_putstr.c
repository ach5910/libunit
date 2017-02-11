/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:01:17 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/27 18:38:03 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr(const char *str)
{
	size_t length;

	length = 0;
	if (str)
	{
		while (str[length])
		{
			ft_putchar(str[length]);
			length++;
		}
	}
	return (length);
}
