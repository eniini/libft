/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:45:37 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 15:11:49 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Appends not more than [n] characters from [s2] to the end of [s1],
**	then adds a terminating `\0' and returns a pointer to [s1].
**	[s1] must have sufficient space to hold the result.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1len;
	size_t	i;

	s1len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s1[s1len + i] = s2[i];
		i++;
	}
	s1[s1len + i] = '\0';
	return (s1);
}
