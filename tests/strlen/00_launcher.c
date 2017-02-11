/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 15:0MAX_TESTS:59 by ahunt             #+#    #+#     */
/*   Updated: 2017/02/10 15:04:21 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define MAX_TESTS 5
#include "libunit.h"

static void	init_funct_ptr(t_test *test_funct)
{
	test_funct[0] = &strlen_empty_test;
	test_funct[1] = &strlen_basic_test;
	test_funct[2] = &strlen_long_test;
	test_funct[3] = &strlen_null_test;
	test_funct[4] = &strlen_special_chars_test;
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
void	strlen_launcher(t_test_results *test_res)
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
	char *tests[] = {"Empty", "Basic", "Long", "Null", "Speacial Characters"};

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
	ft_printf("\n***STRLEN***\n");
	i = 0;
	while (i < MAX_TESTS)
	{
		if (status_res[i] == EXIT_SUCCESS)
		{
			test_res->passed++;
			ft_printf("%-25s"GREEN"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		}
		else
		{
			test_res->failed++;
			ft_printf("%-25s"RED"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		}
		i++;
	}

}