/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 17:54:25 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/11 09:38:06 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_num(char const *str, char c)
{
	int		count;
	int		i;
	int		prev;

	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if ((str[i] == c) && prev == 1)
			prev = 0;
		if (str[i] != c && prev == 0)
		{
			prev = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	ft_get_word(char **words, char *s, int c)
{
	int		len;
	char	*temp;

	if ((temp = ft_strchr(s, c)))
	{
		len = ft_strlen(s) - ft_strlen(temp);
		*words = ft_strsub(s, 0, len);
	}
	else
	{
		*words = ft_strdup(s);
		len = ft_strlen(s);
	}
	return (len);
}

char		**ft_strsplit(char const *s, int c)
{
	char	**words;
	int		i;

	if (!s)
		return (NULL);
	i = ft_word_num(s, c);
	if (!(words = (char**)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	while (*s != '\0' && words)
	{
		while (s && *s == c)
			s++;
		if (*s != '\0')
		{
			s += ft_get_word(words, (char *)s, c);
			words++;
		}
	}
	*words = NULL;
	return (words - i);
}
