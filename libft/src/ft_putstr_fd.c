/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:27:21 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 16:47:07 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int len;

	if (!str)
		return ;
	len = 0;
	while (str[len])
	{
		ft_putchar_fd(str[len], fd);
		len++;
	}
}
