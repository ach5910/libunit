/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 20:26:25 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 20:26:38 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void strcat_basic_test(void)
{
	char buf[256] = "This is a String";

	ft_strcat(buf, ", on drugs!");
	if (ft_strequ(buf,"This is a String, on drugs!"))
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
