/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2dsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 21:13:21 by eniini            #+#    #+#             */
/*   Updated: 2020/09/14 19:23:50 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Get the amount of array pointers allocated into given double char pointer.
*/

#include "libft.h"

size_t		ft_get2dsize(char **charray)
{
	size_t 	i;

	i = 0;
	while (charray[i] != NULL)
		i++;
	return (i);
}
