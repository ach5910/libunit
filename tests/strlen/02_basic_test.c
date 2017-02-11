/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:15:09 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 17:15:28 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	strlen_basic_test(void)
{
	const char *src = "This is a Sting"; 

	if (ft_strlen(src) == 15)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}