/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_for_process.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:22:59 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 02:24:07 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	wait_for_process(t_test_list **test)
{
	int list_lenght;
	int i;
	int status;
	pid_t w;
	t_test_list tests;

	tests = *test;

	i = 0;
	list_length = get_list_length(*test);
	while (i < list_length)
	{
		w = wait(&status);
		while (tests->pit != w)
			tests = tests->next;
		tests->status = get_extit_status(status);
		tests = *test;
		i++;
	}
}