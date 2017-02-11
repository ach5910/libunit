/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:23:58 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 16:24:11 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int main(void)
{
	// ft_printf("%d\n", ft_strlen("A child that terminates, but has not been waited for becomes a zombie.  The kernel maintains a minimal set of information about the zombie process (PID, termination status, resource usage information) in order to allow the parent to later perform a wait to obtain information about the child.  As long as a zombie is not removed from the system via a wait, it will consume a slot in the kernel process table, and if this table fills, it will not be possible to create further processes"));

	strlen_launcher();
	isnum_launcher();
	strcat_launcher();

	return (0);
}