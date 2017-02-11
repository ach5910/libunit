/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:12:59 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:13:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_hex(va_list *ap, t_fmt **args)
{
	uintmax_t	nbr;
	char		*prefix;
	size_t		size;

	nbr = ft_get_uint_length(ap, args);
	if ((*args)->hash && (*args)->is_upper)
		prefix = ft_strdup("0X");
	else if ((*args)->hash && !(*args)->is_upper)
		prefix = ft_strdup("0x");
	else
		prefix = ft_strnew(0);
	size = ft_putuint(args, prefix, nbr, 16);
	ft_strdel(&prefix);
	return (size);
}
