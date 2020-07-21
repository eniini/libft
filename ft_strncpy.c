/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:59:21 by eniini            #+#    #+#             */
/*   Updated: 2020/07/07 17:22:50 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && i < ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len && i >= ft_strlen(src))
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
