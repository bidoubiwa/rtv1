/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:03:59 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 16:04:39 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v3	ft_v3_div(const t_v3 *a, const t_v3 *b)
{
	return ((t_v3){.x = a->x / b->x, 
			.y = a->y / b->y, 
			.z = a->z / b->z
			});
}

t_v3	*ft_v3_div_mem(const t_v3 *a, const t_v3 *b)
{
	t_v3	*new;

	if (!(new = ft_memalloc(sizeof(t_v3))))
		return (NULL);
	new->x = a->x / b->x;
	new->y = a->y / b->y;
	new->z = a->z / b->z;
	return (new);
}
