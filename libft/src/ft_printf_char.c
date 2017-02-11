/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:15:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:15:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_char(va_list *ap, t_fmt **args)
{
	unsigned char	ch;
	size_t			size;
	char			pad;

	if ((*args)->length == LEN_MOD_L)
		size = ft_printf_wchar(ap, args);
	else
	{
		size = 1;
		ch = (unsigned char)va_arg(*ap, int);
		if ((*args)->left_just)
			ft_putchar(ch);
		pad = (*args)->prepend_zeros ? '0' : ' ';
		size = ft_putcharpad((size_t)(*args)->width, size, pad);
		if (!(*args)->left_just)
			ft_putchar(ch);
	}
	return (size);
}
