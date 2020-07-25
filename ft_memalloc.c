/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:26:56 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 14:19:21 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates [size] bytes of new memory initialized to 0's and returns it.
*/

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = (void*)malloc(sizeof(mem) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
