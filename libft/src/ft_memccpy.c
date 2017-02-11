/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 04:54:36 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 06:34:08 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	b;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	b = (unsigned char)c;
	while (i < n)
	{
		*d = *s;
		if (*s == b)
			return ((void *)(dest + i + 1));
		d++;
		s++;
		i++;
	}
	return (NULL);
}
