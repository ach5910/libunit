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

void	uninitialized_test(void)
{
	char *str;

	ft_strlen(str);
	exit(EXIT_FAILURE);
}