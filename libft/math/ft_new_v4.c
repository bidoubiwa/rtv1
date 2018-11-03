/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_v4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:54:18 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:06:46 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v4	ft_new_v4(double x, double y, double z, bool w)
{
	return ((t_v4){.x = x, .y = y, .z = z, .w = w});
}
