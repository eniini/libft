/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 13:41:43 by eniini            #+#    #+#             */
/*   Updated: 2020/07/22 17:18:55 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (n > 1)
	{
		if (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			break ;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
