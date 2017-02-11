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
	// ft_printf("%d\n", ft_strlen("A child that terminates, but has not been waited for becomes a zombie.  The kernel maintains a minimal set of information about the zombie process (PID, termination status, resource usage information) in order to allow the parent to later perform a wait to obtain information about the child.  As long as a zombie is not removed from the system via a wait, it will consume a slot in the kernel process table, and if this table fills, it will not be possible to create further processes"));
	t_test_results	*test_res;

	test_res = (t_test_results *)malloc(sizeof(t_test_results));
	bzero(test_res, sizeof(t_test_results));
	strlen_launcher(test_res);
	isnum_launcher(test_res);
		
	if (test_res->failed == 0)
		ft_printf("\nTests Passed: "GREEN"%d/%d"RESET"\n", 
			test_res->passed, test_res->passed);
	else
		ft_printf("\nTests Passed: "RED"%d/%d"RESET"\n", 
			test_res->passed, test_res->passed + test_res->failed);
	return (0);
}