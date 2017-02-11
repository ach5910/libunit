/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_tokens.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:45:40 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/30 21:45:44 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_tokens(char const *str, char c)
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
