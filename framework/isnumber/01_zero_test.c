/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:02:42 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 18:02:54 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	isnum_zero_test(void)
{
	if (ft_isdigit('0'))
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
