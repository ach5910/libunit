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

void strcat_empty_2_test(void)
{
	char buf1[256] = "This is a String";
	char buf2[256] = "";
	char *ret;

	ret = ft_strcat(buf1, buf2);
	if (ft_strequ(ret ,buf1))
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}