/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:11:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:11:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printf_ptr(va_list *ap, t_fmt **args)
{
	uintmax_t	nbr;
	size_t		size;
	char		*nstr;
	char		*pad;

	if ((*args)->has_percision && (*args)->min_width == 0)
		return (ft_putstr("0x"));
	(*args)->length = LEN_MOD_J;
	(*args)->left_just = (*args)->prepend_zeros ? 1 : (*args)->left_just;
	pad = ft_get_justified_pad((*args)->prepend_zeros, (*args)->has_percision,
		(*args)->left_just, 1);
	nbr = ft_get_uint_length(ap, args);
	nstr = ft_itoa_base(nbr, 16, (*args)->is_upper);
	size = ft_strpad((size_t)(*args)->min_width, &nstr, "0", 0);
	nstr = ft_strpre("0x", nstr);
	size = ft_strpad((size_t)(*args)->width, &nstr, pad, (*args)->left_just);
	ft_putstr(nstr);
	ft_strdel(&pad);
	ft_strdel(&nstr);
	return (size);
}
