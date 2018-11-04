/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalar_v3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:51:53 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 17:31:31 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v3	*ft_v3_scalar_mem(const t_v3 *a, double s)
{
	t_v3	*new;

	if (!(new = ft_memalloc(sizeof(t_v3))))
		return (NULL);
	new->x = a->x * s;
	new->y = a->y * s;
	new->z = a->z * s;
	return (new);
}

t_v3	ft_v3_scalar(const t_v3 *a, double s)
{
	return ((t_v3){
			.x = a->x * s, 
			.y = a->y * s, 
			.z = a->z * s
			});
}
