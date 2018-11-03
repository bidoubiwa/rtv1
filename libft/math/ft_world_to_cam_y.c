/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_to_cam_y.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:27:56 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:00:16 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

double		ft_world_to_cam_y(double yy, double height,
		double angle, double ratio_y)
{
	return (((yy / angle * ratio_y - 1) * -0.5 * height) - 0.5);
}
