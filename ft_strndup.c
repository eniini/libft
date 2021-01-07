/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:51:21 by eniini            #+#    #+#             */
/*   Updated: 2020/10/16 09:19:29 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	if (!(dup = (char*)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
