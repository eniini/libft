/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:19:43 by eniini            #+#    #+#             */
/*   Updated: 2020/07/16 14:31:39 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Iterate the first link to save new link's head, then loop until lst = NULL
**	save current link to elem, then pass it through the function and malloc
**  a copy of elem's data into the new list, then increment through both lists
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	head = elem;
	lst = lst->next;
	while (lst)
	{
		elem->next = f(lst);
		elem = elem->next;
		lst = lst->next;
	}
	return (head);
}
