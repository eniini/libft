/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arr_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:38:02 by eniini            #+#    #+#             */
/*   Updated: 2020/10/01 15:38:06 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Get the n of array pointers allocated into given double char pointer.
*/

#include "libft.h"

size_t		ft_get_arr_size(char **arr)
{
	size_t 	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}