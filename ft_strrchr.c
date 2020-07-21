/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 18:48:28 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:49:28 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	i = ft_strlen(s);
	while (i--)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
