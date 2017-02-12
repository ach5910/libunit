/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:34:57 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/11 18:35:09 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_test_list	*create_test(char *str, t_test f)
{
	t_test_list *tmp;

	tmp = (t_test_list *)malloc(sizeof(t_test_list));
	tmp->next = NULL;
	tmp->name = ft_strdup(str);
	tmp->pid = -1;
	tmp->test_func = f;
	tmp->status = "NULL";
	return (tmp);
}