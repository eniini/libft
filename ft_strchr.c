/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 18:39:22 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 00:33:34 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
