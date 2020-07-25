/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:06:56 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 14:41:43 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Locates the first occurrence of [c] (converted to an unsigned char) in
**	string [s]. Returns a pointer to the byte located, or NULL if no such byte
**	exists within [n] bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		else
			i++;
	}
	return (NULL);
}
