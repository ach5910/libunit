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
int main(void);
void 	strlen_launcher(void);
void	strlen_null_test(void);
void	strlen_basic_test(void);
void	strlen_long_test(void);
void	strlen_uninitialized_test(void);
void	strlen_special_chars_test(void);
void	isnum_launcher(void);
void	isnum_zero_test(void);
void	isnum_dec_char_test(void);
void	isnum_basic_test(void);
void	isnum_escape_char_test(void);
void	isnum_dec_num_test(void);


#endif

