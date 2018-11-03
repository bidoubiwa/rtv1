/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_to_cam_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:26:26 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:07:05 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

double		ft_world_to_cam_x(double xx, double width,
		double angle, double ratio_x)
{
	return (((xx / (angle * ratio_x) + 1) * 0.5 * width) - 0.5);
}
