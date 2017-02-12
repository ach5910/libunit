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

#include "libunit.h"

void	run_test(t_test_list **test)
{
	t_test cur_test_func;
	t_test_list *cur_test;
	
	cur_test = *test;
	while (cur_test)
	{
		if ((cur_test->pid = fork()) < 0)
			exit(EXIT_FAILURE);
		if (cur_test->pid == 0)
		{
			cur_test_func = cur_test->test_func;
			cur_test_func();
		}
		cur_test = cur_test->next;
	}
}
