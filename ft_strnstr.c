/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 17:07:22 by eniini            #+#    #+#             */
/*   Updated: 2020/07/10 18:03:06 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *stack, const char *ndl, size_t len)
{
	size_t	i;

	i = 0;
	if (ndl[0] == '\0')
		return ((char*)&stack[0]);
	while (*stack != '\0' && len >= ft_strlen(ndl))
	{
		if (*stack == *ndl)
		{
			i = 0;
			while (*(stack + i) == *(ndl + i))
			{
				if ((*(ndl + i + 1) == '\0') && (*(stack + i) ==
					*(ndl + i)))
					return ((char *)stack);
				i++;
			}
		}
		len--;
		stack++;
	}
	return (NULL);
}
