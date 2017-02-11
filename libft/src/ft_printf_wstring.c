/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wstring.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:19:03 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/31 20:19:06 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

size_t	ft_printf_wstring(va_list *ap, t_fmt **args)
{
	wchar_t	*src;
	size_t	size;
	int		chcnt;
	char	ch;
	int		i;

	chcnt = 0;
	size = 0;
	if ((src = va_arg(*ap, wchar_t*)) == NULL)
		return (ft_putstr(NULL_STR));
	if ((*args)->has_percision && (*args)->min_width == 0)
	{
		ch = (*args)->prepend_zeros ? '0' : ' ';
		return (ft_putcharpad((size_t)(*args)->width, size, ch));
	}
	while ((i = ft_get_bytes_wc(src[chcnt])) != 0)
	{
		if ((*args)->has_percision && ((*args)->min_width -= i) < 0)
			break ;
		size += i;
		chcnt++;
	}
	size = ft_put_wstr(args, src, chcnt, size);
	return (size);
}

size_t	ft_put_wstr(t_fmt **args, wchar_t *src, int chcnt, size_t size)
{
	unsigned char	*dest;
	int				i;
	char			pad;

	i = 0;
	pad = ((*args)->prepend_zeros && !(*args)->min_width) ? '0' : ' ';
	if (!(*args)->left_just)
		size = ft_putcharpad((size_t)(*args)->width, size, pad);
	while (chcnt > i)
	{
		dest = ft_get_wc(src[i]);
		ft_putstr((const char *)dest);
		ft_strdel((char **)&dest);
		i++;
	}
	if ((*args)->left_just)
		size = ft_putcharpad((size_t)(*args)->width, size, pad);
	return (size);
}
