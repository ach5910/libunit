/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 05:56:41 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/07 05:56:43 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

uintmax_t	ft_pow(int base, int i)
{
	if (i == 0)
		return (1);
	else
		return (base * ft_pow(base, i - 1));
}

char		*ft_itoa_base(uintmax_t value, int base, int is_upper)
{
	char	*buf;
	int		size;
	char	*nbr;

	buf = is_upper ? ft_strdup("0123456789ABCDEF") :
		ft_strdup("0123456789abcdef");
	size = 1;
	while (ft_pow(base, size) - 1 < value)
		size++;
	nbr = ft_strnew(size);
	while (size-- > 0)
	{
		nbr[size] = buf[value % base];
		value /= base;
	}
	ft_strdel(&buf);
	return (nbr);
}
