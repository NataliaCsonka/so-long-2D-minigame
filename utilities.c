/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:12:02 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:12:05 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_img(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.exit);
	if (game->img.collectible)
		mlx_destroy_image(game->mlx, game->img.collectible);
	if (game->img.player)
		mlx_destroy_image(game->mlx, game->img.player);
	if (game->img.floor)
		mlx_destroy_image(game->mlx, game->img.floor);
	if (game->img.wall)
		mlx_destroy_image(game->mlx, game->img.wall);
	if (game->img.on_exit)
		mlx_destroy_image(game->mlx, game->img.on_exit);
	if (game->img.fin_exit)
		mlx_destroy_image(game->mlx, game->img.fin_exit);
	mlx_destroy_display(game->mlx);
	free_map(game);
	free(game->mlx);
	exit(0);
}

void	free_map_passability(t_game *game)
{
	int	i;

	i = 0;
	while (game->map_passability[i])
	{
		free(game->map_passability[i]);
		i++;
	}
	free(game->map_passability);
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
}

void	ft_exit(char *s, t_game *game)
{
	ft_printf("%s\n", s);
	if (game->map[0])
		free_map(game);
	exit(0);
}

int	close_window(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	free_img(game);
	exit (0);
}
