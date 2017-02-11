/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 09:35:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 13:37:52 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>

t_fmt	*new_format(void)
{
	t_fmt *temp;

	temp = (t_fmt *)ft_memalloc(sizeof(t_fmt));
	temp->hash = 0;
	temp->has_percision = 0;
	temp->left_just = 0;
	temp->pos_val = 0;
	temp->prepend_sp = 0;
	temp->prepend_zeros = 0;
	temp->width = 0;
	temp->has_percision = 0;
	temp->min_width = 0;
	temp->length = 0;
	temp->is_upper = 0;
	return (temp);
}

size_t	parse_format(va_list *ap, const char *fmt)
{
	size_t	size;
	char	*iter;
	char	*cursor;
	t_fmt	*args;

	size = 0;
	cursor = ft_strdup(fmt);
	args = new_format();
	while ((iter = ft_strchr(cursor, '%')) != NULL)
	{
		*iter = '\0';
		size += ft_putstr(cursor);
		size += parse_args(ap, &args, &iter);
		ft_bzero(args, sizeof(t_fmt));
		if (*iter == '\0')
			iter--;
		free(cursor);
		cursor = ft_strdup(iter + 1);
	}
	if (*cursor != '\0')
		size += ft_putstr(cursor);
	ft_memdel((void **)&args);
	ft_strdel(&cursor);
	return (size);
}

size_t	ft_printf(const char *format, ...)
{
	size_t	size;
	va_list	ap;

	va_start(ap, format);
	size = parse_format(&ap, format);
	va_end(ap);
	return (size);
}
