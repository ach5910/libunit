/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:02:27 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/04 20:00:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s)
		return (NULL);
	if (!(sub = ft_memalloc(len + 1)))
		return (NULL);
	if (start + len > ft_strlen(s))
		return (NULL);
	s += start;
	ft_strncpy(sub, s, len);
	sub[len] = '\0';
	return (sub);
}
