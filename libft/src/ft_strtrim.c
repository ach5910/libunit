/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:59:16 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/11 09:38:29 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	i = ft_strlen(s) - 1;
	while (i > 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i--;
	i++;
	trim = (char *)malloc(sizeof(char) * (i + 1));
	if (trim == NULL)
		return (NULL);
	ft_strncpy(trim, s, i);
	trim[i] = '\0';
	return (trim);
}
