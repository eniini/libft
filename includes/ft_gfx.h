/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gfx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:23:17 by eniini            #+#    #+#             */
/*   Updated: 2021/05/15 17:52:00 by eniini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GFX_H
# define FT_GFX_H

# include <math.h>
# include "libft.h"

# define RAD_CON	0.01745329251993888928

//	!! UPDATE THESE DEFINITIONS ON USE !!
# define WIN_H	600
# define WIN_W	800
// !! UPDATE THESE DEFINITIONS ON USE !!

//	Rotation matrix for RGB/integer colors
typedef struct s_rgb_mat
{
	float		rix[3][3];
	float		cos_a;
	float		sin_a;
	double		axis_unit;
}				t_rgb_mat;

int				ft_color_lerp(int c1, int c2, double p);

int				ft_i_lerp(int a, int b, double p);
double			ft_inverse_i_lerp(int a, int b, int x);

double			ft_d_lerp(double a, double b, double p);
double			ft_inverse_d_lerp(double a, double b, double x);

int				ft_create_bmp(char *filename, int bpp, char *img_addr);

int				ft_hueshift(int c, double p);

double			ft_smoothstep(double start, double end, double x);

#endif
