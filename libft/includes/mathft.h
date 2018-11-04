/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:16:03 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 18:36:36 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHFT_H
# define MATHFT_H
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "libft.h"

typedef struct	s_v3
{
	double		x;
	double		y;
	double		z;
}				t_v3;

typedef struct	s_v4
{
	double		x;
	double		y;
	double		z;
	bool		w;
}				t_v4;

typedef struct	s_m4
{
	double		a[4];
	double		b[4];
	double		c[4];
	bool		d[4];
}				t_m4;
/*
** VERTEX
*/
t_v3		*ft_new_v3_mem(double x, double y, double z);
t_v3		ft_new_v3(double x, double y, double z);
t_v4		*ft_new_v4_mem(double x, double y, double z, bool w);
t_v4		ft_new_v4(double x, double y, double z, bool w);
/* 
** OPERATION ON VERTEX/VECTOR
** (MISSING OPPERATION ON v4)
*/
t_v4		*ft_norm_v4(t_v4 *vec);
t_v3		*ft_norm_v3(t_v3 *vec);
double		ft_v3_dot(const t_v3 *a, const t_v3 *b);
t_v3		ft_v3_scalar(const t_v3 *a, double s);
t_v3		*ft_v3_scalar_mem(const t_v3 *a, double s);
t_v3		ft_v3_multi(const t_v3 *a, const t_v3 *b);
t_v3		*ft_v3_multi_mem(const t_v3 *a, const t_v3 *b);
t_v3		ft_v3_div(const t_v3 *a, const t_v3 *b);
t_v3		*ft_v3_div_mem(const t_v3 *a, const t_v3 *b);
t_v3		ft_v3_add(const t_v3 *a, const t_v3 *b);
t_v3		*ft_v3_add_mem(const t_v3 *a, const t_v3 *b);
t_v3		ft_v3_subtract(const t_v3 *a, const t_v3 *b);
t_v3		*ft_v3_subtract_mem(const t_v3 *a, const t_v3 *b);
/*
** CAM AND WORLD
*/
double		ft_cam_to_world_x(double x, double inv_width,
		double angle, double ratio_x);
double		ft_cam_to_world_y(double y, double inv_height,
		double ange, double ratio_y);
double		ft_world_to_cam_x(double xx, double width,
		double angle, double ratio_x);
double		ft_world_to_cam_y(double yy, double height,
		double angle, double ratio_y);
#endif
