/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_fstrcat_null_2_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:53:37 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 20:53:41 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_null_2_test(void)
{
	char buf1[16] = "This is a String";
	char *buf2;
	char *ret;

	ret = ft_strcat(buf1, buf2);
	assert_str_eq(ret, buf2);
}
