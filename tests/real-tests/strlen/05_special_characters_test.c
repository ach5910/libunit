/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:15:09 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 17:15:28 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	strlen_special_chars_test(void)
{
	const char *src = "This \tis a\n S\"ti\'ng"; 

	assert_int_eq(19, ft_strlen(src));
}