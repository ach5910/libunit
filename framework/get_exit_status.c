/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_exit_status.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:00:52 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 02:01:06 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char *get_exit_status(int n)
{
	if (n == 11)
		return ("SEGV");
	else if (n == 10)
		return ("BUSE");
	else if (n == 0)
		return ("OK");
	else if (n == 256)
		return ("KO");
	return (ft_itoa_base(n, 10, 1));
}