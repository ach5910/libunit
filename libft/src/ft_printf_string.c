/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:14:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:14:17 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_string(va_list *ap, t_fmt **args)
{
	char	*str;
	char	*temp;
	size_t	size;
	char	*pad;

	if ((*args)->length == LEN_MOD_L)
		return (ft_printf_wstring(ap, args));
	if ((temp = va_arg(*ap, char*)) == NULL)
	{
		if ((*args)->width & (*args)->prepend_zeros)
			return (ft_putcharpad((size_t)(*args)->width, 0, '0'));
		return (ft_putstr(NULL_STR));
	}
	if ((*args)->has_percision && (*args)->min_width == 0)
		return (ft_putcharpad((size_t)(*args)->width, 0, ' '));
	pad = ft_get_justified_pad((*args)->prepend_zeros, (*args)->has_percision,
		(*args)->left_just, 0);
	str = ft_strdup(temp);
	if ((*args)->min_width && (size_t)(*args)->min_width < ft_strlen(str))
		str[(*args)->min_width] = '\0';
	size = ft_strpad((size_t)(*args)->width, &str, pad, (*args)->left_just);
	ft_putstr(str);
	ft_strdel(&pad);
	ft_strdel(&str);
	return (size);
}
