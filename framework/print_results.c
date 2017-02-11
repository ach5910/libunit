/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:36:05 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 02:36:22 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_results(t_test_list *test)
{
	ft_printf("\n***IS_NUMBER***\n");
	while (test)
	{
		if (ft_strequ(test->status, "OK"))
		{
			test->passed++;
			ft_printf("%-25s"GREEN"[%s]"RESET"\n", test->name, "OK");
		}
		else
		{
			ft_printf("%-25s"RED"[%s]"RESET"\n", test->name, get_exit_status(test->status));
		}
		test = test->next;
	}
}