/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_fstrcat_empty_2_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:49:00 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 20:49:14 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_empty_2_test(void)
{
	char buf1[256] = "This is a String";
	char buf2[256] = "";
	char *ret;

	ret = ft_strcat(buf1, buf2);
	assert_str_eq(ret ,buf2);
}
