/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 00:09:53 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/12 00:10:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_TEST_H
# define LIBUNIT_TEST_H
# include "libunit_test"
# include "libft.h"

int 	main(void);
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

#endif