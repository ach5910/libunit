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

typedef struct	s_test_results
{
	int	passed;
	int failed;
}				t_test_results;

typedef void	(*t_test)(void);
int main(void);
void	strlen_launcher(t_test_results *test_res);
void	strlen_empty_test(void);
void	strlen_basic_test(void);
void	strlen_long_test(void);
void	strlen_null_test(void);
void	strlen_special_chars_test(void);
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



#endif

