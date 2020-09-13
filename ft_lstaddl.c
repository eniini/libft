/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:59:25 by eniini            #+#    #+#             */
/*   Updated: 2020/08/24 01:15:04 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the list element [new] to the end of list.
** [alst] is a pointer to the first link of the list.
*/

#include "libft.h"

void	ft_lstaddl(t_list **alst, t_list *new)
{
	t_list **temp;

	if (alst != NULL && new != NULL)
	{
		temp = alst;
		while ((*temp)->next != NULL)
			*temp = (*temp)->next;
		(*temp)->next = new;
	}
}
