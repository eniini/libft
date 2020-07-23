/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:14:24 by eniini            #+#    #+#             */
/*   Updated: 2020/07/13 17:25:28 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*strsub;
	size_t	i;
	size_t	strlen;

	if (!s)
		return (NULL);
	if (!(strsub = (char*)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	i = 0;
	strlen = ft_strlen(s);
	while (i < len && len <= strlen)
	{
		strsub[i] = s[i + start];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
