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

void	isnum_escape_char_test(void)
{
	if (ft_isdigit('\n'))
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}
