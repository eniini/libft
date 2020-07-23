/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 20:30:56 by eniini            #+#    #+#             */
/*   Updated: 2020/07/23 13:03:19 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_trimcpy(char const *s, size_t max, size_t min)
{
	size_t	i;
	char	*dup;

	i = 0;
	if (!(dup = (char*)malloc((max - min + 1) * sizeof(char))))
		return (NULL);
	while ((i + min) < max)
	{
		dup[i] = s[i + min];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i] != '\0'))
		i++;
	j = (ft_strlen(s) - 1);
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && (j > i))
		j--;
	return (ft_trimcpy(s, j + 1, i));
}
