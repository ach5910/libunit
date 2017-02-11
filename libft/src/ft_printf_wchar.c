/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:49:46 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/31 13:49:47 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

size_t	ft_printf_wchar(va_list *ap, t_fmt **args)
{
	size_t			size;
	unsigned char	*dest;
	wchar_t			ch;

	if ((ch = (wchar_t)va_arg(*ap, wint_t)) == 0)
	{
		ft_putchar('\0');
		return (1);
	}
	dest = ft_get_wc(ch);
	size = ft_strlen((const char *)dest);
	if ((*args)->left_just)
		ft_putstr((const char *)dest);
	size = ft_putcharpad((size_t)(*args)->width, size, ' ');
	if (!(*args)->left_just)
		ft_putstr((const char *)dest);
	ft_strdel((char **)&dest);
	return (size);
}
