/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:50:45 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 05:12:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(str) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (dup != NULL)
	{
		ft_strcpy(dup, str);
		return (dup);
	}
	return (NULL);
}
