/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:06:28 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:06:30 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

uintmax_t	ft_get_uint_length(va_list *ap, t_fmt **args)
{
	uintmax_t nbr;

	nbr = va_arg(*ap, uintmax_t);
	if ((*args)->length == LEN_MOD_HH)
		nbr = (unsigned char)nbr;
	else if ((*args)->length == LEN_MOD_H)
		nbr = (unsigned short)nbr;
	else if ((*args)->length == LEN_MOD_L)
		nbr = (unsigned long)nbr;
	else if ((*args)->length == LEN_MOD_LL)
		nbr = (unsigned long long)nbr;
	else if ((*args)->length == LEN_MOD_J)
		nbr = (uintmax_t)nbr;
	else if ((*args)->length == LEN_MOD_Z)
		nbr = (size_t)nbr;
	else
		nbr = (unsigned int)nbr;
	return (nbr);
}

intmax_t	ft_get_int_length(va_list *ap, t_fmt **args)
{
	intmax_t nbr;

	nbr = va_arg(*ap, intmax_t);
	if ((*args)->length == LEN_MOD_HH)
		nbr = (char)nbr;
	else if ((*args)->length == LEN_MOD_H)
		nbr = (short)nbr;
	else if ((*args)->length == LEN_MOD_L)
		nbr = (long)nbr;
	else if ((*args)->length == LEN_MOD_LL)
		nbr = (long long)nbr;
	else if ((*args)->length == LEN_MOD_J)
		nbr = (intmax_t)nbr;
	else if ((*args)->length == LEN_MOD_Z)
		nbr = (ssize_t)nbr;
	else
		nbr = (int)nbr;
	return (nbr);
}
