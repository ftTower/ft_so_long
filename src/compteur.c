/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compteur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:11:39 by tauer             #+#    #+#             */
/*   Updated: 2024/03/14 18:59:39 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/so_long.h"

void	put_num(t_data *data)
{
	char	*compteur;
	int		i;

	i = 0;
	compteur = NULL;
	compteur = ft_itoa(data->move);
	while (compteur[i])
	{
		if (compteur[i] == '0')
			put_img_to_img(data->base_image, data->textures.num0, 0, i * 25);
		else if (compteur[i] == '1')
			put_img_to_img(data->base_image, data->textures.num1, 0, i * 25);
		else if (compteur[i] == '2')
			put_img_to_img(data->base_image, data->textures.num2, 0, i * 25);
		else if (compteur[i] == '3')
			put_img_to_img(data->base_image, data->textures.num3, 0, i * 25);
		else if (compteur[i] == '4')
			put_img_to_img(data->base_image, data->textures.num4, 0, i * 25);
		else if (compteur[i] == '5')
			put_img_to_img(data->base_image, data->textures.num5, 0, i * 25);
		else if (compteur[i] == '6')
			put_img_to_img(data->base_image, data->textures.num6, 0, i * 25);
		else if (compteur[i] == '7')
			put_img_to_img(data->base_image, data->textures.num7, 0, i * 25);
		else if (compteur[i] == '8')
			put_img_to_img(data->base_image, data->textures.num8, 0, i * 25);
		else if (compteur[i] == '9')
			put_img_to_img(data->base_image, data->textures.num9, 0, i * 25);
		i++;
	}
	free(compteur);
}

void	render_compteur(t_data *data)
{
	put_num(data);
}