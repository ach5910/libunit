/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 03:19:28 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/04 03:19:32 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printf_mod(va_list *ap, t_fmt **args)
{
	size_t	size;
	char	pad;

	size = 1;
	if (1 == 2)
		va_arg(*ap, int);
	if ((*args)->left_just)
		ft_putchar('%');
	pad = (*args)->prepend_zeros ? '0' : ' ';
	pad = (*args)->left_just ? ' ' : pad;
	size = ft_putcharpad((size_t)(*args)->width, size, pad);
	if (!(*args)->left_just)
		ft_putchar('%');
	return (size);
}
