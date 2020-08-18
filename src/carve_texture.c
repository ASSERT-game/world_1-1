/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carve_texture.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 19:51:55 by home              #+#    #+#             */
/*   Updated: 2020/08/17 18:35:54 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

SDL_Rect	*carve_mario_texture(void)
{
	int			row;
	int			col;
	SDL_Rect	*result;

	row = 0;
	result = malloc(sizeof(*result) * (8 * 8));
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			result[row * 8 + col].h = TILE_SIZE;
			result[row * 8 + col].w = TILE_SIZE;
			result[row * 8 + col].x = (col * TILE_SIZE);
			result[row * 8 + col].y = (row * TILE_SIZE);
			col++;
		}
		row++;
	}
	return (result);
}
