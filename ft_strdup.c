/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 13:19:21 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 15:01:35 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	allocates sufficient memory for a copy of the string [s1], does the copy,
**	and returns a pointer to it. If malloc fails, NULL is returned.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	i = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(dup) * (i + 1))))
		return (NULL);
	dup = ft_strcpy(dup, s1);
	return (dup);
}
