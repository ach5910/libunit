/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_results.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:36:18 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 22:36:28 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_test_results *init_results(void)
{
	t_test_results	*test_res;

	test_res = (t_test_results *)malloc(sizeof(t_test_results));
	bzero(test_res, sizeof(t_test_results));
	return (test_res);
}
