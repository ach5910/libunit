/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:05:06 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:05:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_prepend_prefix(char **nstr, char *prefix, int base, uintmax_t nbr)
{
	if (prefix[0] != '\0' && base == 8 && prefix[0] != *nstr[0])
		*nstr = ft_strpre(prefix, *nstr);
	else if (prefix[0] != '\0' && base == 16 && nbr != 0)
		*nstr = ft_strpre(prefix, *nstr);
	else if (prefix[0] != '\0' && base != 8 && base != 16)
		*nstr = ft_strpre(prefix, *nstr);
}

void	ft_justify(t_fmt **args, char **nstr, size_t offset)
{
	size_t	size;
	char	*pad;

	pad = ft_get_justified_pad((*args)->prepend_zeros, (*args)->has_percision,
		(*args)->left_just, 0);
	if ((size_t)(*args)->width > offset)
		size = ft_strpad((size_t)(*args)->width - offset, nstr, pad,
			(*args)->left_just);
	ft_strdel(&pad);
}

size_t	ft_unassigned_precision(t_fmt **args, int base)
{
	int i;

	if ((*args)->hash && base == 8)
	{
		ft_putchar('0');
		return (1);
	}
	i = 0;
	while (((*args)->width > i++))
		ft_putchar(' ');
	return ((*args)->width);
}

size_t	ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr, int base)
{
	char	*nstr;
	char	*temp;
	size_t	size;

	if ((*args)->has_percision && (*args)->min_width == 0 && nbr == 0)
		return (ft_unassigned_precision(args, base));
	nstr = ft_itoa_base((uintmax_t)nbr, base, (*args)->is_upper);
	temp = nstr;
	while (*temp == '0' && temp[1] != '\0')
		temp++;
	free(nstr);
	nstr = ft_strdup(temp);
	size = ft_strpad((size_t)(*args)->min_width, &nstr, "0", 0);
	if ((*args)->left_just || ((*args)->prepend_zeros &&
		!(*args)->has_percision))
		ft_justify(args, &nstr, ft_strlen(prefix));
	ft_prepend_prefix(&nstr, prefix, base, nbr);
	if (!(*args)->left_just && (!(*args)->prepend_zeros ||
		(*args)->has_percision))
		ft_justify(args, &nstr, 0);
	size = ft_strlen(nstr);
	ft_putstr(nstr);
	ft_strdel(&nstr);
	return (size);
}
