/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:56:26 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 17:56:43 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void isnum_launcher(t_test_results *test_res)
{
	t_test_list *test_list;

	test_list = NULL;
	add_test(&test_list, "Zero", &isnum_zero_test);
	add_test(&test_list, "Decimal-Char", &isnum_dec_char_test);
	add_test(&test_list, "Basic", &isnum_basic_test);
	add_test(&test_list, "Newline", &isnum_escape_char_test);
	add_test(&test_list, "Decimal-Num", &isnum_dec_num_test);
	launch_suite(test_list, test_res, "Is_Num");	
}