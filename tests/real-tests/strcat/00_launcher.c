/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 20:19:42 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 20:20:00 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void strcat_launcher(t_test_results *test_res)
{
	t_test_list *test_list;

	test_list = NULL;
	add_test(&test_list, "Basic", &strcat_basic_test);
	add_test(&test_list, "Empty 1", &strcat_empty_1_test);
	add_test(&test_list, "Empty 2", &strcat_empty_2_test);
	add_test(&test_list, "Null 1", &strcat_null_1_test);
	add_test(&test_list, "Null 2", &strcat_null_2_test);
	add_test(&test_list, "Return", &strcat_return_test);
	add_test(&test_list, "Overflow", &strcat_overflow_test);
	launch_suite(test_list, test_res, "StringCat");
}