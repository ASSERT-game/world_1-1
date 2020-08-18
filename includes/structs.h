/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 03:05:42 by home              #+#    #+#             */
/*   Updated: 2020/08/17 18:28:00 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

#include <SDL2/SDL.h>
#include <stdbool.h>

typedef struct	s_display
{
	SDL_Window		*window;
	SDL_Renderer	*renderer;

}				t_display;

typedef struct	s_entity
{
	int			id;

	int			loc_x;
	int			loc_y;

}				t_entity;

typedef struct	s_game_context
{
	bool		active;

	SDL_Texture		*texture;
	SDL_Rect		*src_rect;

	int			ticks;

	int			loc_x;

	int			entity_cap;
	int			entity_curr;

	t_entity	*entities;

	bool		game_over;

}				t_game_context;

#endif
