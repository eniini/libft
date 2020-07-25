/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:04:24 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 13:50:18 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes as a parameter link’s pointer address and frees the memory of link’s
**	content using the function [del], then frees the link’s memory.
**	Finally, the pointer to the link that was just freed is set to NULL.
*/

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
