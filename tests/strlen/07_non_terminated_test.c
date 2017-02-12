/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_non_terminated.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 23:03:31 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 23:03:42 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	strlen_non_terminated_test(void)
{
	char *str = "This is a string";
	int i;

	i = 0;
	while (str[i])
		i++;
	str[i] = 'A';
	assert_int_eq(0, ft_strlen(str));
}