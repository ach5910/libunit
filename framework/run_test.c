/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:10:56 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 02:11:05 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.c"

void	run_tests(t_test_list *test)
{
	t_test *cur_test;
	while (test)
	{
		if ((test->pid = fork()) < 0)
			exit(EXIT_FAILURE);
		if (test->pid == 0)
		{
			cur_test = test->test_funct;
			cur_test();
		}
		test = test->next;
	}
}
