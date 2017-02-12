/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_fstrcat_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:09:15 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 19:09:24 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_empty_test(void)
{
	char buf1[256] = "";
	char buf2[256] = "This is a String";
	char *ret;

	ret = ft_strcat(buf1, buf2);
	assert_str_eq(ret ,buf2);
}