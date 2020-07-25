/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 16:24:51 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 14:57:56 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Computes the length of the string [s] and returns the number of characters
**	that precede the terminating NUL character.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
