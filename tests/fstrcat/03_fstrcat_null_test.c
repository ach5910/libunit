/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_fstrcat_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:12:23 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 19:12:33 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_null_test(void)
{
	char *buf1;
	char buf2[16] = "This is a String";
	char *ret;

	ret = ft_strcat(buf1, buf2);
	assert_str_eq(ret ,buf2);
}