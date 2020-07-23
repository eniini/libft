/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:29:24 by eniini            #+#    #+#             */
/*   Updated: 2020/07/18 18:49:26 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_dblstrcpy(char const *s1, char const *s2, char *s3)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	return (s3);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	joinlen;

	if (!s1 && !s2)
		return (NULL);
	joinlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(concat = (char*)malloc(sizeof(concat) * (joinlen + 1))))
		return (NULL);
	concat = ft_dblstrcpy(s1, s2, concat);
	concat[joinlen] = '\0';
	return (concat);
}
