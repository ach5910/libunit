/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_suite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:59:36 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 21:59:50 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	launch_suite(t_test_list *tst_list, t_test_results *tst_res, char *str)
{
	run_test(&tst_list);
	wait_for_process(&tst_list);
	print_results(tst_list, tst_res, str);
	free_tests(&tst_list);
}