/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_v4_mem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:51:29 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:04:44 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v4	*ft_new_v4_mem(double x, double y, double z, bool w)
{
	t_v4	*new;

	if (!(new = ft_memalloc(sizeof(t_v4))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	new->w = w;
	return (new);
}
