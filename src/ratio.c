/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ratio.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 22:22:55 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 22:38:08 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtvone.h>

void	screen_ratio(int width, int height, double *ratio_x, double *ratio_y)
{
	if (width >= height){
		*ratio_x = (double)width / (double)height;
		*ratio_y = 1;
	}
	else{
		*ratio_y = (double)height / (double)width;
		*ratio_x = 1;
	}
}
