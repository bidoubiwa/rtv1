/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cam_to_world_y.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:23:44 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:06:30 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>


double		ft_cam_to_world_y(double y, double inv_height,
		double angle, double ratio_y)
{
	return ((1.0 - 2.0 * (((double)y + 0.5) * inv_height)) * 
			angle * ratio_y);
}
