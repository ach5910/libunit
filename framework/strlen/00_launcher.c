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
	test_funct[0] = &null_test;
	test_funct[1] = &basic_test;
	test_funct[2] = &long_string_test;
	test_funct[3] = &uninitialized_test;
	test_funct[4] = &special_chars_test;
}

t_test	ft_get_test(int i)
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
void	strlen_launcher(void)
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
	char *tests[] = {"Null", "Basic", "Long", "Uninitialized", "Speacial Characters"};
	//int answers[] = {SIGSEGV, EXIT_SUCCESS, EXIT_SUCCESS};

	while (i < MAX_TESTS)
	{
		if ((p[i] = fork()) < 0)
			exit(EXIT_FAILURE);
		//funtction ptr would be used here
		if (p[i] == 0)
		{
			test = ft_get_test(i);
			test();
			// if (i == 0)
			// 	null_test();
			// else if (i == 1)
			// 	basic_test();
			// else if (i == 2)
			// 	long_string_test();
			// else if (i == 3)
			// 	unitialized_test();
			// else
			// 	special_chars_test();
		}
		i++;
	}
	// if ((p[0] = fork()) < 0)
	// 	exit(EXIT_FAILURE);
	// else if (p[0] == 0)
	// 	uninitialized_ptr_test();
	// if ((p[1] = fork()) < 0)
	// 	exit(EXIT_FAILURE);
	// else if (p[1] == 0)
	// 	basic_test()
	// if ((p[MAX_TESTS] = fork()) < 0)
	// 	exit(EXIT_FAILURE);
	// else if (p[MAX_TESTS] == 0)
	// 	long_string_test();
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
	ft_printf("***STRLEN***\n");
	i = 0;
	while (i < MAX_TESTS)
	{
		if (status_res[i] == EXIT_SUCCESS)
			ft_printf("%s test : "GREEN"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		else
			ft_printf("%s test : "RED"[%s]"RESET"\n", tests[i], names[status_res[i]]);
		i++;
	}
}