/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get2dsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 21:13:21 by eniini            #+#    #+#             */
/*   Updated: 2020/09/08 21:02:37 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Get the amount of array pointers allocated into given double char pointer.
*/

#include "libft.h"

int		ft_get2dsize(char **charray)
{
	int		i;

	i = 0;
	while (charray[i] != NULL)
		i++;
	return (i);
}
