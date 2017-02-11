/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 01:37:31 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/07 01:37:40 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strapp(char const *s1, char const *s2)
{
	char *res;
	size_t size1;
	size_t size2;

	if (!s1|| !*s1)
	{
		return (ft_strdup(s2));
	}
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (!s2)
		return (NULL);
	if (!(res = ft_strnew(size1 + size2 + 1)))
		return (NULL);
	ft_strncpy(res, s1, size1);
	ft_strcpy(res + size1, s2);
	free((void *)s1);
	return (res);
}
