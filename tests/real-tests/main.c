/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:23:58 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 16:24:11 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int main(void)
{
	t_test_results	*test_res;

	test_res = init_results();
	strcat_launcher(test_res);
	isnum_launcher(test_res);
	strlen_launcher(test_res);
	display_results(test_res);
	return (0);
}