/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 20:19:42 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 20:20:00 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

#define MAX_TESTS 7

static void	init_funct_ptr(t_test *test_funct)
{
	test_funct[0] = &strcat_basic_test;
	test_funct[1] = &strcat_return_test;
	test_funct[2] = &strcat_overflow_test;
	test_funct[3] = &strcat_empty_1_test;
	test_funct[4] = &strcat_empty_2_test;
	test_funct[5] = &strcat_null_1_test;
	test_funct[6] = &strcat_null_2_test;
}

static t_test	ft_get_test(int i)
{
	static t_test *test_funct = NULL;

	if (test_funct == NULL)
	{
		test_funct = malloc(sizeof(*test_funct) * MAX_TESTS);
		if (test_funct != NULL)
			init_funct_ptr(test_funct);
	}
	return (test_funct[(int)i]);
}	
void	strcat_launcher(void)
{
	pid_t p[MAX_TESTS], w;
	t_test test;
	int i = 0;
	char *str;
	int status;
	int status_res[MAX_TESTS];
	char *names[257];
	names[0] = "OK";
	names[256] = "KO";
	names[11] = "SEGV";
	names[10] = "BUSERROR";
	char *tests[] = {"Basic", "Return", "Overflow", "Empty_1", "Empty_2", "Null_1", "Null_2"};

	while (i < MAX_TESTS)
	{
		if ((p[i] = fork()) < 0)
			exit(EXIT_FAILURE);
		if (p[i] == 0)
		{
			test = ft_get_test(i);
			test();
		}
		i++;
	}
	i = 0;
	while (i < MAX_TESTS)
	{
		w = wait(&status);
		int j = 0;
		while (p[j] != w)
			j++;
		status_res[j] = status;
		i++;
	}
	ft_printf("\n***STRCAT***\n");
	i = 0;
	while (i < MAX_TESTS)
	{
		if (status_res[i] == EXIT_SUCCESS)
			ft_printf("%-25s"GREEN"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		else
			ft_printf("%-25s"RED"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		i++;
	}
}