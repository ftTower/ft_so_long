/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sas_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:06:56 by tauer             #+#    #+#             */
/*   Updated: 2024/03/21 14:53:17 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long_bonus.h"

int	check_char(t_data *data, int x, int y, char c)
{
	char	comp;

	if (x < 0 || x > data->size_x || y < 0 || y > data->size_y)
		return (0);
	comp = data->map[x][y];
	return (c == comp);
}
