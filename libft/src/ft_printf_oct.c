/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:12:11 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:12:14 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_oct(va_list *ap, t_fmt **args)
{
	uintmax_t	nbr;
	char		*prefix;
	size_t		size;

	nbr = ft_get_uint_length(ap, args);
	prefix = ft_strnew(1);
	if ((*args)->hash && (!(*args)->left_just || !(*args)->has_percision))
		prefix[0] = '0';
	else
		prefix[0] = '\0';
	size = ft_putuint(args, prefix, nbr, 8);
	ft_strdel(&prefix);
	return (size);
}
