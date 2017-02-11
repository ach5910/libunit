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
void strlen_launcher(void);
void	null_test(void);
void	basic_test(void);
void	long_string_test(void);
void	uninitialized_test(void);
void	special_chars_test(void);


#endif

