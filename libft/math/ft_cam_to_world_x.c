/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cam_to_world_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:06:10 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/03 23:23:30 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

double		ft_cam_to_world_x(double x, double inv_width,
		double angle, double ratio_x)
{
	return ((2.0 * (((double)x + 0.5) * inv_width) - 1) 
			* angle * ratio_x);
}
