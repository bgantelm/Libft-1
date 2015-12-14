/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:38:00 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/11 17:31:41 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *res;
	t_list *cur;

	res = NULL;
	if (lst != NULL && f != NULL)
	{
		res = (*f)(lst);
		list = res;
		lst = lst->next;
		while (lst != NULL)
		{
			cur = (*f)(lst);
			if (cur == NULL)
				return (res);
			list->next = cur;
			list = cur;
			lst = list->next;
		}
	}
	return (res);
}
