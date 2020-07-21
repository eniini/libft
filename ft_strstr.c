/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:25:12 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:38:32 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)&haystack[0]);
	while (*haystack != '\0')
	{
		i = 0;
		while (*(haystack + i) == *(needle + i))
		{
			if ((*(needle + i + 1) == '\0') && (*(haystack + i) ==
				*(needle + i)))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
