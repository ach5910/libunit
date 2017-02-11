/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 03:56:47 by ahunt             #+#    #+#             */
/*   Updated: 2016/09/28 11:50:22 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_lst;
	t_list	*new_link;

	if (!lst)
		return (NULL);
	if (!(fresh_lst = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	fresh_lst = f(lst);
	new_link = fresh_lst;
	while (lst->next)
	{
		new_link->next = f(lst->next);
		new_link = new_link->next;
		lst = lst->next;
	}
	return (fresh_lst);
}
