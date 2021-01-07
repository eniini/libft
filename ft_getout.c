/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:37:00 by eniini            #+#    #+#             */
/*   Updated: 2021/01/07 16:05:37 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Prints [str] to standard output, then exits the program
**	with the (EXIT_FAILURE) status.
*/

void	ft_getout(const char *str)
{
	ft_putendl(str);
	exit(EXIT_FAILURE);
}
