/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 23:21:16 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 05:23:24 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char *substring;

	substring = NULL;
	if (*src == (char)c)
		substring = (char *)src;
	while (*src++)
	{
		if (*src == (char)c)
			substring = (char *)src;
	}
	return (substring);
}
