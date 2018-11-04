/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm_v4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:32:52 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 15:33:43 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mathft.h>

t_v4	*ft_norm_v4(t_v4 *vec)
{
	double	magnitude;

	magnitude = sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z);
	vec->x = vec->x / magnitude;
	vec->y = vec->y / magnitude;
	vec->z = vec->z / magnitude;
	return (vec);
}
