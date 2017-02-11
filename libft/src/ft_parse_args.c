/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 03:59:47 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 03:59:54 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	parse_length(t_fmt **args, char **fmt)
{
	while (**fmt == 'h' || **fmt == 'l' || **fmt == 'j' || **fmt == 'z')
	{
		if (**fmt == 'h')
		{
			if ((*args)->length == LEN_MOD_H)
				(*args)->length = LEN_MOD_HH;
			else
				(*args)->length = MAX((*args)->length, LEN_MOD_H);
		}
		else if (**fmt == 'l')
		{
			if ((*args)->length == LEN_MOD_L)
				(*args)->length = LEN_MOD_LL;
			else
				(*args)->length = MAX((*args)->length, LEN_MOD_L);
		}
		else if (**fmt == 'j')
			(*args)->length = MAX((*args)->length, LEN_MOD_J);
		else if (**fmt == 'z')
			(*args)->length = MAX((*args)->length, LEN_MOD_Z);
		(*fmt)++;
	}
}

void	parse_num(t_fmt **args, char **fmt, int is_width)
{
	int nbr;

	nbr = 0;
	if (!is_width)
		(*fmt)++;
	if (**fmt == '0')
	{
		(*args)->prepend_zeros = 1;
		(*fmt)++;
	}
	while (ft_isdigit(**fmt))
	{
		nbr *= 10;
		nbr += (**fmt - '0');
		(*fmt)++;
	}
	if (is_width)
		(*args)->width = nbr;
	else
		(*args)->min_width = nbr;
}

void	parse_flags(t_fmt **args, char **fmt)
{
	while (**fmt == '#' || **fmt == '0' || **fmt == '-' || **fmt == '+' ||
			**fmt == ' ')
	{
		if (**fmt == '#')
			(*args)->hash = 1;
		else if (**fmt == '-')
			(*args)->left_just = 1;
		else if (**fmt == '+')
			(*args)->pos_val = 1;
		else if (**fmt == ' ')
			(*args)->prepend_sp = 1;
		else if (**fmt == '0')
			(*args)->prepend_zeros = 1;
		(*fmt)++;
	}
}

int		parse_conv_spec(t_fmt **args, char **fmt)
{
	int i;

	if (**fmt == '\0')
		return (-1);
	i = ft_str_index("spdiouxcbXOSDUC%", **fmt);
	if (i >= 9)
		(*args)->is_upper = 1;
	if (i >= 10)
		(*args)->length = LEN_MOD_L;
	return (i);
}

size_t	parse_args(va_list *ap, t_fmt **args, char **fmt)
{
	size_t size;

	if (*(*fmt + 1) == '\0')
		return (0);
	(*fmt)++;
	parse_flags(args, fmt);
	parse_num(args, fmt, 1);
	while (**fmt == '.')
	{
		(*args)->has_percision = 1;
		parse_num(args, fmt, 0);
	}
	parse_length(args, fmt);
	parse_flags(args, fmt);
	size = ft_put_conv_spec(ap, args, fmt);
	return (size);
}
