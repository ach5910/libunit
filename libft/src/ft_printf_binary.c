/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_binary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 04:54:53 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/02 04:54:55 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printf_binary(va_list *ap, t_fmt **args)
{
	uintmax_t	nbr;
	char		*prefix;
	size_t		size;

	nbr = ft_get_uint_length(ap, args);
	prefix = ft_strnew(1);
	prefix[0] = '\0';
	size = ft_putuint(args, prefix, nbr, 2);
	ft_strdel(&prefix);
	return (size);
}
