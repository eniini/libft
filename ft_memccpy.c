/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 15:52:11 by eniini            #+#    #+#             */
/*   Updated: 2020/07/04 17:14:58 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dststr;
	const unsigned char	*srcstr;
	unsigned char		chr;

	dststr = dst;
	srcstr = src;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dststr[i] = srcstr[i];
		if (srcstr[i] == chr)
			return ((void *)&dststr[++i]);
		i++;
	}
	return (NULL);
}
