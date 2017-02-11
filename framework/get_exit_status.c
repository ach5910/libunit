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
	if (n == SIGSEGV)
		return ("SEGV");
	else if (n == SIGBUS)
		return ("BUSE");
	else if (n == EXIT_SUCCESS)
		return ("OK");
	else if (n == EXIT_FAILURE)
		return ("KO")
	return ("Unknown Error");
}