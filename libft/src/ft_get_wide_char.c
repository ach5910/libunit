/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_wide_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:29:57 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/01 16:30:03 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

unsigned char	*ft_get_wc(wchar_t c)
{
	unsigned char *buf;

	buf = (unsigned char *)ft_strnew(4);
	if (c <= 0x007F)
		buf[0] = (unsigned char)c;
	else if (c <= 0x07FF)
	{
		buf[0] = (unsigned char)((c >> 6) | 0xC0);
		buf[1] = (unsigned char)((c & 0x3F) | 0x80);
	}
	else if (c <= 0xFFFF)
	{
		buf[0] = (unsigned char)((c >> 12) | 0xE0);
		buf[1] = (unsigned char)(((c >> 6) & 0x3F) | 0x80);
		buf[2] = (unsigned char)((c & 0x3F) | 0x80);
	}
	else if (c <= 0x10FFFF)
	{
		buf[0] = (unsigned char)((c >> 18) | 0xF0);
		buf[1] = (unsigned char)(((c >> 12) & 0x3F) | 0x80);
		buf[2] = (unsigned char)(((c >> 6) & 0x3F) | 0x80);
		buf[3] = (unsigned char)((c & 0x3F) | 0x80);
	}
	return (buf);
}

size_t			ft_get_bytes_wc(wchar_t c)
{
	if (c == 0x0000)
		return (0);
	if (c <= 0x007F)
		return (1);
	if (c <= 0x07FF)
		return (2);
	if (c <= 0xFFFF)
		return (3);
	if (c <= 0x10FFFF)
		return (4);
	return (0);
}
