/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 15:54:15 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/01 14:00:25 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int s;

	s = 0;
	while (n != 0)
	{
		n /= 10;
		s++;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		neg;
	long	temp;

	neg = 0;
	temp = (long)n;
	if (n <= 0)
		neg = 1;
	if (neg)
		temp *= -1;
	size = get_size(n) + neg;
	if (!(res = ft_strnew(size)))
		return (NULL);
	size--;
	if (temp == 0)
		res[0] = '0';
	while (temp != 0)
	{
		res[size--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (neg && res[0] != '0')
		res[0] = '-';
	return (res);
}
