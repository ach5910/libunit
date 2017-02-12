/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_fstrcat_return_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:50:54 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 20:50:56 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_return_test(void)
{
	char buf[256] = "This is a String";
	char *ret;

	ret = ft_strcat(buf, ", on drugs!");
	assert_str_eq(ret ,"This is a String, on drugs!");
}
