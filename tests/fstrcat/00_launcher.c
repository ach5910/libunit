/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:45:53 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 18:46:06 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void fstrcat_launcher(t_test_results *test_res)
{
	t_test_list *test_list;

	test_list = NULL;
	add_test(&test_list, "Basic", &fstrcat_basic_test);
	add_test(&test_list, "Empty 1", &fstrcat_empty_test);
	add_test(&test_list, "Empty 2", &fstrcat_empty_2_test);
	add_test(&test_list, "Null 1", &fstrcat_null_test);
	add_test(&test_list, "Null 2", &fstrcat_null_2_test);
	add_test(&test_list, "Return", &fstrcat_return_test);
	add_test(&test_list, "Overflow", &fstrcat_overflow_test);
	launch_suite(test_list, test_res, "FStringCat");
}