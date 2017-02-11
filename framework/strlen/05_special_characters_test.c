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

void	special_chars_test(void)
{
	const char *src = "This \tis a\n S\"ti\'ng"; 

	if (ft_strlen(src) == 19)
		exit(EXIT_SUCCESS);
	exit(EXIT_FAILURE);
}
