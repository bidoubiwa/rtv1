/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_v3_mem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:45:30 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 00:05:58 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v3	*ft_new_v3_mem(double x, double y, double z)
{
	t_v3	*new;

	if (!(new = ft_memalloc(sizeof(t_v3))))
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
