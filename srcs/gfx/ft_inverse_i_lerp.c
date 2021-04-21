/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inverse_i_lerp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:42:12 by eniini            #+#    #+#             */
/*   Updated: 2021/04/20 13:49:23 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the distance of [x] in a vector [ab] as a percentage.
*/

double	ft_inverse_i_lerp(int a, int b, int x)
{
	double	placement;
	double	distance;

	placement = x - a;
	distance = b - a;
	if (distance == 0)
		return (1.0);
	else
		return (placement / distance);
}
