/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 12:05:18 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 12:05:23 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <libft.h>

typedef void	(*t_test)(void);
typedef struct	s_test_results
{
	int	passed;
	int failed;
}				t_test_results;

typedef struct			s_test_list
{
	t_test				test_func;
	pid_t				pid;
	char				*status;
	char				*name;
	struct s_test_list	*next;
}						t_test_list;

int main(void);
void	strlen_launcher(t_test_results *test_res);
void	strlen_empty_test(void);
void	strlen_basic_test(void);
void	strlen_long_test(void);
void	strlen_null_test(void);
void	strlen_nullterm_test(void);
void	strlen_special_chars_test(void);
void	strlen_non_terminated_test(void);

void	isnum_launcher(t_test_results *test_res);
void	isnum_zero_test(void);
void	isnum_dec_char_test(void);
void	isnum_basic_test(void);
void	isnum_escape_char_test(void);
void	isnum_dec_num_test(void);

void	strcat_launcher(t_test_results *test_res);
void	strcat_basic_test(void);
void	strcat_return_test(void);
void	strcat_overflow_test(void);
void	strcat_empty_1_test(void);
void	strcat_empty_2_test(void);
void	strcat_null_1_test(void);
void	strcat_null_2_test(void);

void	fstrcat_launcher(t_test_results *test_res);
void	fstrcat_basic_test(void);
void	fstrcat_null_test(void);
void	fstrcat_empty_test(void);
void	fstrcat_return_test(void);
void	fstrcat_empty_2_test(void);
void	fstrcat_overflow_test(void);
void	fstrcat_null_2_test(void);

void	display_suite_results(t_test_list *test, t_test_results *test_res, char *str);
void	display_results(t_test_results *test_res);
t_test_results	*init_results(void);
void	wait_for_process(t_test_list **test);
void	run_test(t_test_list **test);
char	*get_exit_status(int n);
t_test_list	*create_test(char *str, t_test f);
void	add_test(t_test_list **test, char *str, t_test f);
void	launch_suite(t_test_list *tst_list, t_test_results *tst_res, char *str);
void	free_tests(t_test_list **test_list);

void	assert_str_eq(char *s1, char *s2);
void	assert_digit(char c);
void	assert_int_eq(int a, int b);



#endif

