/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 15:48:14 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:32:47 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dststr;
	const char	*srcstr;

	dststr = dst;
	srcstr = src;
	i = 0;
	while (i < n)
	{
		dststr[i] = srcstr[i];
		i++;
	}
	return ((void *)dst);
}
