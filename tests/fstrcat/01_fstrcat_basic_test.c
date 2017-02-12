/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_fstrcat_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:05:32 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 19:05:42 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_basic_test(void)
{
	char buf[256] = "This is a String";

	ft_strcat(buf, ", on drugs!");
	assert_str_eq(buf,"This is a String, on drugs!");
}