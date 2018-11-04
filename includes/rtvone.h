/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtvone.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:24:53 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 22:38:02 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTVONE_H
# define RTVONE_H

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include "mlx_keys_macos.h"
# define WIDTH_SCREEN 1550
# define HEIGHT_SCREEN 750

typedef enum			e_type
{
	E_SPHERE = 0,
}						t_type;

typedef struct			s_cam
{
	double				fov;
	double				angle;
	t_v3				pt;
}						t_cam;

typedef struct			s_scr
{
	uint16_t			height;
	uint16_t			width;
	double				inv_height;
	double				inv_width;
	double				half_height;
	double				half_width;
	double				ratio_x;
	double				ratio_y;
	t_v3				light;
	// UTILE ? A QUOI TU SERS
	double				low_light;
	double				high_light;
	double				nbr_light;
	double				total_light;
}						t_scr;

typedef struct			s_obj
{
	double				scale;
	t_type				type;
	t_v3				pt;
	size_t				color;
}						t_obj;

typedef struct			s_env
{
	void				*mlx;
	void				*win;
	void				*img;
	unsigned int		*data_addr;
	char				*title;
	int					bits_per_pixel;
	int					bytes_per_line;
	int					endian;
	t_scr				scr;
	t_cam				cam;
	t_obj				**objs;
}						t_env;

/*
** UTILS
*/
void					screen_ratio(int width, int height,
		double *ratio_x, double *ratio_y);

#endif
