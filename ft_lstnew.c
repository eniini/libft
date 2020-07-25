/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:28:18 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 13:58:18 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Creates a new link which (content) and (content_size) are initialized
**	by copy of the parameters of the function and which (next) is NULL.
**
**	If the [content] is NULL, link's (content) is NULL and its (content_size)
**	is 0 even if [content_size] isn’t.
*/

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = (void*)malloc(content_size)))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
