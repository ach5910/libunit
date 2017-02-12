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

void	print_results(t_test_list *test, t_test_results *test_res, char *str)
{
	ft_printf("\n"RESET BD_YELLOW UN_YELLOW"%s"RESET"\n", str);
	while (test)
	{
		if (ft_strequ(test->status, "OK"))
		{
			test_res->passed++;
			ft_printf(BD_YELLOW">>>"RESET BD_WHITE"%-25s"RESET GREEN"[%s]"RESET"\n", test->name, "OK");
		}
		else
		{
			test_res->failed++;
			ft_printf(BD_YELLOW">>>"RESET BD_WHITE"%-25s"RESET RED"[%s]"RESET"\n", test->name, test->status);
		}
		test = test->next;
	}
}