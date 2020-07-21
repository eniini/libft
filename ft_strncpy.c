/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:59:21 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:37:20 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (i < len && i < srclen)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len && i >= srclen)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
