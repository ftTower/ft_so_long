/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_init_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:05:41 by tauer             #+#    #+#             */
/*   Updated: 2024/03/14 17:43:17 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

bool	init_walls(t_data *data)
{
	printf("=========================================================================================\n| WALLS_TEXTURES\n=========================================================================================\n");
	add_img_to_garbage_memory(data, &data->textures.toward_wall_left_empty,
		"toward_wall_left_empty ", "./img/toward_wall_left_empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.toward_wall_right_empty,
		"toward_wall_right_empty", "./img/toward_wall_right_empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.right_corner,
		"right_corner           ", "./img/right_corner.xpm");
	add_img_to_garbage_memory(data, &data->textures.left_corner,
		"left_corner            ", "./img/left_corner.xpm");
	add_img_to_garbage_memory(data, &data->textures.left_top_corner,
		"left_top_corner        ", "./img/left_top_corner.xpm");
	add_img_to_garbage_memory(data, &data->textures.right_top_corner,
		"right_top_corner       ", "./img/right_top_corner.xpm");
	add_img_to_garbage_memory(data, &data->textures.right_top_corner_up,
		"right_top_corner_up    ", "./img/right_top_corner_up.xpm");
	add_img_to_garbage_memory(data, &data->textures.left_top_corner_up,
		"left_top_corner_up     ", "./img/left_top_corner_up.xpm");
	add_img_to_garbage_memory(data, &data->textures.right_empty,
		"right_empty            ", "./img/right_empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.left_empty,
		"left_empty             ", "./img/left_empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall,
		"simple_wall            ", "./img/wall.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall_up,
		"wall_up                ", "./img/wall_up.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall_4,
		"wall_4                 ", "./img/wall_4.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall_down,
		"wall_down              ", "./img/wall_down.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall_down_empty,
		"wall_down_empty        ", "./img/wall_down_empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.down,
		"down                   ", "./img/down.xpm");
	add_img_to_garbage_memory(data, &data->textures.toward_wall,
		"toward_wall            ", "./img/toward_wall.xpm");
	if (!data->textures.toward_wall_left_empty.img
		|| !data->textures.toward_wall_right_empty.img
		|| !data->textures.right_corner.img || !data->textures.left_corner.img
		|| !data->textures.left_top_corner.img
		|| !data->textures.right_top_corner.img
		|| !data->textures.right_top_corner_up.img
		|| !data->textures.left_top_corner_up.img
		|| !data->textures.right_empty.img || !data->textures.left_empty.img
		|| !data->textures.wall.img || !data->textures.wall_up.img
		|| !data->textures.wall_4.img || !data->textures.wall_down.img
		|| !data->textures.wall_down_empty.img || !data->textures.down.img
		|| !data->textures.toward_wall.img)
		return (false);
	return (true);
}

bool	init_wall_cosmetics(t_data *data)
{
	printf("=========================================================================================\n| WALLS_COSMETICS_TEXTURES\n=========================================================================================\n");
	add_img_to_garbage_memory(data, &data->textures.private_door,
		"private_door\t      ", "./img/cosmetic_4_wall/private_door.xpm");
	add_img_to_garbage_memory(data, &data->textures.panel_wall,
		"panel_wall\t      ", "./img/cosmetic_4_wall/pannel_wall.xpm");
	add_img_to_garbage_memory(data, &data->textures.wall_screen,
		"wall_screen\t      ", "./img/cosmetic_4_wall/wall_screen.xpm");
	if (!data->textures.private_door.img || !data->textures.panel_wall.img
		|| !data->textures.wall_screen.img)
		return (false);
	return (true);
}

bool	init_floor(t_data *data)
{
	printf("=========================================================================================\n| FLOORS_TEXTURES\n=========================================================================================\n");
	add_img_to_garbage_memory(data, &data->textures.floor_x,
		"floor_x\t\t      ", "./img/floor_cosmetics/floor_x.xpm");
	add_img_to_garbage_memory(data, &data->textures.floor_ventil,
		"floor_ventil\t      ", "./img/floor_cosmetics/floor_ventil.xpm");
	add_img_to_garbage_memory(data, &data->textures.empty, "empty\t\t      ",
		"./img/empty.xpm");
	add_img_to_garbage_memory(data, &data->textures.floor, "floor\t\t      ",
		"./img/floor.xpm");
	if (!data->textures.floor_x.img || !data->textures.floor_ventil.img
		|| !data->textures.empty.img || !data->textures.floor.img)
		return (false);
	return (true);
}

bool	init_rest(t_data *data)
{
	printf("=========================================================================================\n| REST_TEXTURES\n=========================================================================================\n");
	add_img_to_garbage_memory(data, &data->textures.collectibles,
		"collectibles\t      ", "./img/collectibles.xpm");
    if (!data->textures.collectibles.img)
        return (false);
    return (true);
}