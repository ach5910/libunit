/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_conversion_specifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 04:27:20 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/19 05:32:35 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	init_funct_ptr(t_conv_spec *conv_funct)
{
	conv_funct[0] = &ft_printf_string;
	conv_funct[1] = &ft_printf_ptr;
	conv_funct[2] = &ft_printf_int;
	conv_funct[3] = &ft_printf_int;
	conv_funct[4] = &ft_printf_oct;
	conv_funct[5] = &ft_printf_uint;
	conv_funct[6] = &ft_printf_hex;
	conv_funct[7] = &ft_printf_char;
	conv_funct[8] = &ft_printf_binary;
	conv_funct[9] = &ft_printf_hex;
	conv_funct[10] = &ft_printf_oct;
	conv_funct[11] = &ft_printf_wstring;
	conv_funct[12] = &ft_printf_int;
	conv_funct[13] = &ft_printf_uint;
	conv_funct[14] = &ft_printf_wchar;
	conv_funct[15] = &ft_printf_mod;
}

t_conv_spec	ft_get_conv_spec(int i)
{
	static t_conv_spec *conv_funct = NULL;

	if (conv_funct == NULL)
	{
		conv_funct = malloc(sizeof(*conv_funct) * 16);
		if (conv_funct != NULL)
			init_funct_ptr(conv_funct);
	}
	return (conv_funct[(int)i]);
}

size_t		ft_put_conv_spec(va_list *ap, t_fmt **args, char **fmt)
{
	t_conv_spec conv_spec;
	size_t		size;
	char		pad;
	int			i;

	size = 0;
	if ((i = parse_conv_spec(args, fmt)) != -1)
	{
		conv_spec = ft_get_conv_spec(i);
		size = conv_spec(ap, args);
	}
	else if (**fmt != '\0')
	{
		if ((*args)->left_just)
			ft_putchar(**fmt);
		pad = (*args)->prepend_zeros ? '0' : ' ';
		while ((size_t)(*args)->width > ++size)
			ft_putchar(pad);
		if (!(*args)->left_just)
			ft_putchar(**fmt);
	}
	return (size);
}
