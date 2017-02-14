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

void strcat_return_test(void)
{
	char buf[256] = "This is a String";
	char *ret;

	ret = ft_strcat(buf, ", on drugs!");
	assert_str_eq(ret ,"This is a String, on drugs!");
}