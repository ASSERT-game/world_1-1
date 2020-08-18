/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 02:31:10 by home              #+#    #+#             */
/*   Updated: 2020/08/17 18:36:00 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	game_context_initialize(t_game_context *game_state, t_display *display)
{
	game_state->active = true;

	game_state->texture = IMG_LoadTexture(display->renderer, "resources/world1-1_texture.png");
	game_state->src_rect = carve_mario_texture();

	if (game_state->texture == NULL)
		printf("did not spawn correctly\n");

	game_state->ticks = 0;

	game_state->loc_x = 0;

	game_state->entity_cap = 1000;
	game_state->entity_curr = 0;

	game_state->entities = calloc(game_state->entity_cap, sizeof(*(game_state->entities)));

	game_state->game_over = false;
	(void)display;
}

int	main(void)
{
	t_display		display;
	t_game_context	game_state;

	SDLU_start(&display);
	game_context_initialize(&game_state, &display);
	while (game_state.active == true)
	{
		process_user_input(&game_state);

		update_game_state(&game_state);

		SDL_RenderPresent(display.renderer);
		SDL_RenderClear(display.renderer);

	}
	SDLU_close(&display);
	return (0);
}
