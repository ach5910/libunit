/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:08:36 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:08:56 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_printf_int(va_list *ap, t_fmt **args)
{
	intmax_t	nbr;
	char		*prefix;
	size_t		size;

	nbr = ft_get_int_length(ap, args);
	prefix = ft_strnew(1);
	if (nbr < 0)
	{
		prefix[0] = '-';
		nbr *= -1;
	}
	else if ((*args)->pos_val)
		prefix[0] = '+';
	else if ((*args)->prepend_sp)
		prefix[0] = ' ';
	else
		prefix[0] = '\0';
	size = ft_putuint(args, prefix, (uintmax_t)nbr, 10);
	ft_strdel(&prefix);
	return (size);
}
