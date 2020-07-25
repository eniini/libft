/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 10:38:23 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 14:18:21 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the string [str] to int representation.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	long int	result;
	int			negative;
	size_t		i;

	result = 0;
	negative = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += (int)str[i] - '0';
		i++;
	}
	return (result * negative);
}
