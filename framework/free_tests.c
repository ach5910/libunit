/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:25:10 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 22:25:23 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	free_tests(t_test_list **tests)
{
	if ((*tests)->next)
		free_tests(&(*tests)->next);
	ft_strdel(&(*tests)->name);
	ft_memdel((void **)tests);
}
