/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 01:48:50 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 05:05:54 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *s;

	s = (unsigned char *)src;
	while (n > 0 && *s != (unsigned char)c)
	{
		n--;
		s++;
	}
	if (n == 0)
		return (NULL);
	return (s);
}
