/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 17:07:22 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:54:18 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *stack, const char *ndl, size_t len)
{
	size_t	i;
	size_t	ndlsize;

	i = 0;
	if (ndl[0] == '\0')
		return ((char*)&stack[0]);
	ndlsize = ft_strlen(ndl);
	while (*stack != '\0' && len >= ndlsize)
	{
		i = 0;
		while (*(stack + i) == *(ndl + i))
		{
			if ((*(ndl + i + 1) == '\0') && (*(stack + i) ==
				*(ndl + i)))
				return ((char *)stack);
			i++;
		}
		len--;
		stack++;
	}
	return (NULL);
}
