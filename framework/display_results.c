/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_results.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:39:28 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 22:39:39 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	display_results(t_test_results *test_res)
{
	if (test_res->failed == 0)
		ft_printf("\n"IT_CYAN"Tests Passed: "RESET GREEN"%d/%d"RESET"\n\n", 
			test_res->passed, test_res->passed);
	else
		ft_printf("\n"IT_CYAN"Tests Passed: "RESET RED"%d/%d"RESET"\n\n", 
			test_res->passed, test_res->passed + test_res->failed);
}
