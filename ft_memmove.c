/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:10:54 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:33:06 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dststr;
	const unsigned char	*srcstr;

	dststr = dst;
	srcstr = src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			dststr[len] = srcstr[len];
	}
	return ((void *)dst);
}
