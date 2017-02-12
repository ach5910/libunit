/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:49:11 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 02:49:24 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"


void	add_test(t_test_list **test, char *str, t_test f) 
{
	t_test_list *temp;
	
	if (!(*test))
	{
		temp = create_test(str, f);
		temp->next = *test;
		*test = temp;
	}
	else
	{
		temp = *test;
		while (temp->next)
			temp = temp->next;
		temp->next = create_test(str, f);
	}
}
