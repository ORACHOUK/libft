/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orachouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 03:42:33 by orachouk          #+#    #+#             */
/*   Updated: 2018/10/13 03:47:58 by orachouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*first;
	t_list		*new;
	t_list		*current;

	if (!lst || !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = (*f)(lst);
		if (first)
		{
			current->next = new;
			current = current->next;
		}
		else
		{
			first = new;
			current = first;
		}
		lst = lst->next;
	}
	return (first);
}
