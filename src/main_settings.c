/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_settings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:02:18 by tauer             #+#    #+#             */
/*   Updated: 2024/03/19 16:05:05 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

bool	settings(t_data *data)
{
	set_window_size(data);
	data->mlx = mlx_init();
	if (!data->mlx)
		return (free_map(data->map), false);
	data->win = mlx_new_window(data->mlx, data->win_x, data->win_y,
			"soooooLong");
	if (!data->win)
		return (free_map(data->map), mlx_destroy_display(data->mlx),
			free(data->mlx), false);
	data_maker(data);
	return (true);
}

bool	pre_settings(t_data *data)
{
	data->map = get_map(data->map_path);
	if (!data->map)
		return (true);
	if (set_map_size(data))
		return (true);
	data->selecter_custom = 0;
	data->time_render = gettime();
	data->time_perso = gettime();
	data->time_capsule = gettime();
	data->time_ennemy = gettime();
	data->time_start = gettime();
	data->move = 0;
	data->mov_chunk_x = 20;
	data->mov_chunk_y = 20;
	data->chunk_v_x = 20;
	data->chunk_v_y = 20;
	data->switcher = 1;
	data->wave = 0;
	data->collectibles = 0;
	set_key_false(data);
	if (find_first_border(data))
		return (true);
	set_input(data);
	data->collectibles_left = data->collectibles;
	return (false);
}
