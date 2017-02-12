/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 15:0MAX_TESTS:59 by ahunt             #+#    #+#     */
/*   Updated: 2017/02/10 15:04:21 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	strlen_launcher(t_test_results *test_res)
{
	t_test_list *test_list;

	test_list = NULL;
	add_test(&test_list, "Empty", &strlen_empty_test);
	add_test(&test_list, "Null", &strlen_null_test);
	add_test(&test_list, "Null_Term Char", &strlen_nullterm_test);
	add_test(&test_list, "Basic", &strlen_basic_test);
	add_test(&test_list, "Long", &strlen_long_test);
	add_test(&test_list, "Special Chars", &strlen_special_chars_test);
	add_test(&test_list, "Non_Terminated", &strlen_non_terminated_test);
	launch_suite(test_list, test_res, "Stringlen");
}