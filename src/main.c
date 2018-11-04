/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvermand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:26:47 by cvermand          #+#    #+#             */
/*   Updated: 2018/11/04 22:36:18 by cvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtvone.h>

char	init_env(t_env *env, t_scr scr, t_cam cam)
{
	env->cam = cam;
	env->mlx = mlx_init();
	env->win = mlx_new_window(env->mlx, WIDTH_SCREEN, HEIGHT_SCREEN, "Fractol");
	env->img = mlx_new_image(env->mlx, WIDTH_SCREEN, HEIGHT_SCREEN);
	if (!(env->data_addr = (unsigned int*)mlx_get_data_addr(env->img,
			&env->bits_per_pixel, &env->bytes_per_line, &env->endian)))
		return (0);
	/*
	** INITIAILIZING SCREEN
	*/
	env->scr = scr;
	env->scr.width = WIDTH_SCREEN;
	env->scr.inv_width = 1.0 / (double)WIDTH_SCREEN;
	env->scr.half_width = (double)WIDTH_SCREEN / 2.0;
	env->scr.height = HEIGHT_SCREEN;
	env->scr.inv_height = 1.0 / (double)HEIGHT_SCREEN;
	env->scr.half_height = (double)HEIGHT_SCREEN / 2.0;
	screen_ratio(env->scr.width, env->scr.height, 
			&env->scr.ratio_x, &env->scr.ratio_y);
	/*
	** INITIALIZING CAMERA POSITION
	*/
	env->cam.fov = 30;
	env->cam.angle = tan(M_PI * 0.5 * env->cam.fov / 180.0);
	env->cam.pt = ft_new_v3(0, 0, 0);
	return (1);
}

int		main(void)
{
	t_env	env;
	t_scr	scr;
	t_cam	cam;

	if (!(init_env(&env, scr, cam))){
		return (0);
	}
	env.data_addr[2000] = 0xffffff;
	mlx_put_image_to_window(env.mlx, env.win, env.img, 0, 0);
	mlx_loop(env.mlx);
	return (0);
}
