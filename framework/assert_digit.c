/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:19:07 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 21:19:20 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	assert_digit(char c)
{
	if (ft_isdigit(c))
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
