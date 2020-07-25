/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 16:21:30 by eniini            #+#    #+#             */
/*   Updated: 2020/07/25 14:18:46 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Returns a fresh valid string representing the integer [n] given as argument.
**	If the allocation fails, the function returns NULL.
*/

#include <stdlib.h>
#include "libft.h"

static int	ft_numlen(int n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			n = 2147483647;
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_recursive_modulo(int n, int i, char *str, int strlen)
{
	if (n <= 9)
	{
		str[(strlen - 1) - i] = (48 + n);
		return (str);
	}
	else
	{
		str[(strlen - 1) - i] = (48 + (n % 10));
		i++;
		ft_recursive_modulo(n / 10, i, str, strlen);
		return (str);
	}
}

char		*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		strlen;

	if (n == -2147483648)
	{
		if (!(result = (char*)malloc(sizeof(char) * 12)))
			return (NULL);
		result = ft_strcpy(result, "-2147483648");
		return (result);
	}
	i = 0;
	strlen = ft_numlen(n);
	if (!(result = (char*)malloc(sizeof(char) * strlen + 1)))
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result = ft_recursive_modulo(n, i, result, strlen);
	result[strlen] = '\0';
	return (result);
}
